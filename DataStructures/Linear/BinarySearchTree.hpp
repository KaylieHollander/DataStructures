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
    void demoTraversalSteps(BinarTree<Type> * node);
    
    int getSize();
    int getHeight();
    bool isComplete();
    bool isBalanced();
    
    bool contains(Type value);
    void insert(Type itemToInsert);
    void remove(Type value);
    
    Type findMinimum();
    Type findMaximum();
}

template <class Type>
int BinarySearchTree<Type> :: getHeight()
{
    return -1;
}

template <class Type>
int BinarySearchTree<Type> :: getSize()
{
    return -1;
}

template <class Type>
bool BinarySearchTree<Type> :: isComplete()
{
    return false;
}

template <class Type>
bool BinarySearchTree<Type> :: isBalanced()
{
    return false;
}

template <class Type>
void BinarySearchTree<Type> :: inOrderTraversal()
{
    
}

template <class Type>
void BinarySearchTree<Type> :: preOrderTraversal()
{
    
}

template <class Type>
void BinarySearchTree<Type> :: postOrderTraversal()
{
    
}

template <class Type>
void BinarySearchTree<Type> :: insert(Type item)
{
    
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

#endif /* BinarySearchTree_hpp */
