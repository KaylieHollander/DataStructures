//
//  BinaryTree.hpp
//  DataStructures
//
//  Created by Hollander, Kaylie on 4/12/19.
//  Copyright © 2019 Hollander, Kaylie. All rights reserved.
//

#ifndef BinaryTree_hpp
#define BinaryTree_hpp

#include "Node.hpp"

template <class Type>
class BinaryTree : public Node<Type>
{
private:
    BinaryTree<Type> * root;
    BinaryTree<Type> left;
    BinaryTree<Type> right;
    
public:
    BinaryTree();
    BinaryTree(Type data);
    
    void setRootNode(BinaryTree<Type> * root);
    void setRightNode(BinaryTree<Type> * right);
    void setLeftNode(BinaryTree<Type> * left);
    
    BinaryTree<Type> * getRootNode();
    BinaryTree<Type> * getLeftNode();
    BinaryTree<Type> * getRightNode();
};

template <class Type>
BinaryTree<Type> :: BinaryTree() : Node<Type>()
{
    root = nullptr;
    left = nullptr;
    right = nullptr;
}


template <class Type>
BinaryTree<Type> :: BinaryTree(Type data) : Node<Type>(data)
{
    root = nullptr;
    left = nullptr;
    right = nullptr;
}

template <class Type>
BinaryTree<Type> * BinaryTree<Type> :: getRootNode()
{
    return this -> root;
}

template <class Type>
BinaryTree<Type> * BinaryTree<Type> :: getRightNode()
{
    return this -> right;
}

template <class Type>
BinaryTree<Type> * BinaryTree<Type> :: getLeftNode()
{
    return this -> left;
}

template <class Type>
void BinaryTree<Type> :: setRootNode(BinaryTree<Type> * newRoot)
{
    root = newRoot;
}

template <class Type>
void BinaryTree<Type> :: setRightNode(BinaryTree<Type> * right)
{
    this -> right = right;
}

template <class Type>
void BinaryTree<Type> :: setLeftNode(BinaryTree<Type> * left)
{
    this -> left = left;
}
#endif /* BinaryTree_hpp */
