//
//  LinearNode.hpp
//  DataStructures
//
//  Created by Hollander, Kaylie on 2/7/19.
//  Copyright © 2019 Hollander, Kaylie. All rights reserved.
//

#ifndef LinearNode_hpp
#define LinearNode_hpp

#include "Node.hpp"

template <class Type>
class LinearNode : public Node<Type>
{
protected:
    LinearNode<Type> * next;
    
public:
//    Constructors
    LinearNode();
    LinearNode(Type data);
    LinearNode(Type data, LinearNode<Type> * next);
//    Methods
    void setNextNode(LinearNode<Type> * next);
    LinearNode<Type> * getNextNode();
};

// Constructors

/**
This constructor is used for building the raw structure before the values are known.
*/

template <class Type>
LinearNode<Type> :: LinearNode() : Node<Type>()
{
    this -> next = nullptr;
}

/**
 This constructor is used used to create a reference to a instance with data.
 */
template <class Type>
LinearNode<Type> :: LinearNode(Type data) : Node<Type>(data)
{
    this -> next = nullptr;
}

/*
 This constructor is used to create a referncce to a instance with data and a known list.
 */
template <class Type>
LinearNode<Type> :: LinearNode(Type data, LinearNode<Type> * next) : Node<Type>(data)
{
    this -> next = next;
}

// Accessor methods
template <class Type>
void LinearNode<Type> :: setNextNode(LinearNode<Type> * nextNodePointer)
{
    this -> next = nextNodePointer;
}

template <class Type>
LinearNode<Type> * LinearNode<Type> :: getNextNode()
{
    return next;
}
#endif /* LinearNode_hpp */
