//
//  DoubleNode.h
//  DataStructures
//
//  Created by Hollander, Kaylie on 2/21/19.
//  Copyright © 2019 Hollander, Kaylie. All rights reserved.
//

#ifndef DoubleNode_hpp
#define DoubleNode_hpp

template < class Type>
class DoubleNode : public node<Type>
{
protected:
    DoubleNode <Type> * next;
    DoubleNode<Type> * previous;
    
public:
    DoubleNode();
    DoubleNode(Type data);
    DoubleNode(Type data, DoubleNode <Type> * next, DoubleNode <Type> * previous);
    
    DoubleNode <Type> * getNext();
    DoubleNode <Type> * getPrevious;
    
    void setPrevious(DoubleNode<Type> * previous);
    void setNext(DoubleNode<Type> * next);
};

template <class Type>
DoubleNode<Type> :: DoubleNode() : Node<Type>()
{
    previous = nullptr;
    next = nullptr;
}

template <class Type>
DoubleNode<Type> :: DoubleNode(Type data) : Node<Type>(data)
{
    previous = nullptr;
    next = nullptr;
}

template <class Type>
void DoubleNode<Type> :: setNext(DoubleNode<Type> * next)
{
    this -> next = next;
}

template <class Type>
void DoubleNode<Type> :: setPrevious(DoubleNode<Type> * previous)
{
    this -> previous = previous;
}

template <class Type>
DoubleNode<Type> * DoubleNode<Type> :: getPrevious()
{
    return previous;
}

template <class Type>
DoubleNode<Type> * DoubleNode<Type> :: getNext()
{
    return next;
}

#endif /* DoubleNode_hpp */
