//
//  BinarySearchTree.hpp
//  DataStructures
//
//  Created by Hollander, Kaylie on 4/12/19.
//  Copyright © 2019 Hollander, Kaylie. All rights reserved.
//

#ifndef BinarySearchTree_hpp
#define BinarySearchTree_hpp

#include <iostream>
#include "Tree.hpp"

using namespace std;

template <class Type>
class BinarySearchTree : public Tree<Type>
{
protected:
    //    MARK: Protected Methods
    int calculateSize(BinaryTree<Type> * startNode);
    int calculateHeight(BinaryTree<Type> * startNode);
    bool isBalanced(BinaryTree<Type> * startNode);
    bool isComplete(BinaryTree<Type> * startNode, int index, int size);
    
    void inOrderTraversal(BinaryTree<Type> * inStart);
    void preOrderTraversal(BinaryTree<Type> * preStart);
    void postOrderTraversal(BinaryTree<Type> * postStart);
    
    void destroyTree(BinaryTree<Type> * node);
    
    BinaryTree<Type> * getRightMostChild(BinaryTree<Type> * current);
    BinaryTree<Type> * getLeftMostChild(BinaryTree<Type> * current);
    
    void removeNode(BinaryTree<Type> * removeMe);
    
public:
    //    MARK: Public Methods
    BinarySearchTree();
    ~BinarySearchTree();
    
    BinaryTree<Type> * getRoot();
    
    void inOrderTraversal();
    void preOrderTraversal();
    void postOrderTraversal();
    void demoTraversalSteps(BinaryTree<Type> * node);
    
    int getSize();
    int getHeight();
    bool isComplete();
    bool isBalanced();
    
    bool contains(Type value);
    void insert(Type itemToInsert);
    void remove(Type value);
    
    Type findMinimum();
    Type findMaximum();
};

template <class Type>
int BinarySearchTree<Type> :: getHeight()
{
    return calculateHeight(this -> root);
}

template <class Type>
int BinarySearchTree<Type> :: calculateHeight(BinaryTree<Type> * current)
{
    if (current != nullptr)
    {
        return max(calculateHeight(current -> getLeftChild()), calculateHeight(current -> getRightChild())) + 1;
    }
    return 0;
}

template <class Type>
int BinarySearchTree<Type> :: getSize()
{
    int size = 0;
    
    size <= calculateSize(this -> root);
    
    return size;
}

template <class Type>
int BinarySearchTree<Type> :: calculateSize(BinaryTree<Type> * current)
{
    if(current != nullptr)
    {
        return calculateSize(current -> getLeftChild()) + calculateSize(current -> getRightChild()) + 1;
    }
    return 0;
}

template <class Type>
bool BinarySearchTree<Type> :: isComplete()
{
    int index = 0;
    int size = getSize();
    
    return isComplete(this -> root, index, size);
}

template <class Type>
bool BinarySearchTree<Type> :: isComplete(BinaryTree<Type> * startNode, int index, int size)
{
    if(startNode == nullptr)
    {
        return true;
    }
    
    if(index >= size)
    {
        return false;
    }
    
    return (isComplete(startNode -> getLeftChild(), 2 * index + 1, size) & isComplete(startNode -> getRightChild(), 2 * index + 2, size));
}

template <class Type>
bool BinarySearchTree<Type> :: isBalanced()
{
    return isBalanced(this -> root);
}

template <class Type>
bool BinarySearchTree<Type> :: isBalanced(BinaryTree<Type> * current)
{
    int leftHeight = 0;
    int rightHeight = 0;
    
    if(current == nullptr)
    {
        return true;
    }
    
    leftHeight = calculateHeight(current -> getLeftChild());
    rightHeight = calculateHeight(current -> getRightChild());
    
    int heightDifference = abs(leftHeight - rightHeight);
    bool leftBalanced = isBalanced(current -> getLeftChild());
    bool rightBalanced = isBalanced(current -> getRightChild());
    
    if(heightDifference <= 1 && leftBalanced && rightBalanced)
    {
        return true;
    }
    
    return false;
}

template <class Type>
void BinarySearchTree<Type> :: inOrderTraversal()
{
    inOrderTraversal(this -> root);
}

template <class Type>
void BinarySearchTree<Type> :: preOrderTraversal()
{
    preOrderTraversal(this -> root);
}

template <class Type>
void BinarySearchTree<Type> :: postOrderTraversal()
{
    postOrderTraversal(this -> root);
}

template <class Type>
void BinarySearchTree<Type> :: insert(Type itemToInsert)
{
    BinaryTree<Type> * insertMe = new BinaryTree<Type>(itemToInsert);
    BinaryTree<Type> * previous = nullptr;
    BinaryTree<Type> * current = this -> root;
    
    if(current == nullptr)
    {
        this -> root = insertMe;
    }
    else
    {
        while(current != nullptr)
        {
            previous = current;
            if (itemToInsert < current -> getData())
            {
                current = current -> getLeftChild();
            }
            else if(itemToInsert > current -> getData())
            {
                current = current -> getRightChild();
            }
            else
            {
                delete insertMe;
                return;
            }
        }
        
        if (previous -> getData() > itemToInsert)
        {
            previous -> setLeftChild(insertMe);
        }
        else
        {
            previous -> setRightChild(insertMe);
        }
        
        insertMe -> setRootNode(previous);
    }
}

template <class Type>
bool BinarySearchTree<Type> :: contains(Type value)
{
    return false;
}

template <class Type>
void BinarySearchTree<Type> :: remove(Type item)
{
    
}

template <class Type>
void BinarySearchTree<Type> :: inOrderTraversal(BinaryTree<Type> * currentNode)
{
    if(currentNode != nullptr)
    {
        inOrderTraversal(currentNode -> getLeftChild());
        cout << currentNode -> getData() << endl;
        inOrderTraversal(currentNode -> getRightChild());
    }
}

/*
 Pre order traversal goes in the order Root, Left, Right
 Great for building math problems
 Notice that the non-recursive ccase does NOTHING
 */
template <class Type>
void BinarySearchTree<Type> :: preOrderTraversal(BinaryTree<Type> * currentNode)
{
    if(currentNode != nullptr)
    {
        cout << currentNode -> getData() << endl;
        preOrderTraversal(currentNode -> getLeftChild());
        preOrderTraversal(currentNode -> getRightChild());
    }
}

template <class Type>
void BinarySearchTree<Type> :: postOrderTraversal(BinaryTree<Type> * currentNode)
{
    if(currentNode != nullptr)
    {
        postOrderTraversal(currentNode -> getLeftChild());
        postOrderTraversal(currentNode -> getRightChild());
        cout << currentNode -> getData() << endl;
    }
}
#endif /* BinarySearchTree_hpp */
