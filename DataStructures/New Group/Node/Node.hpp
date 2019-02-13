//
//  Node.hpp
//  DataStructures
//
//  Created by Hollander, Kaylie on 2/7/19.
//  Copyright © 2019 Hollander, Kaylie. All rights reserved.
//

#ifndef Node_hpp
#define Node_hpp

#include <assert.h>

template <class Type>
class Node
{
private:
    Type data;
public:
    Node(Type data);
    Type getData();
    void setData(Type data);
};

template <class Type>
Node<Type> :: Node(Type data)
{
    this -> data = data;
}

template <class Type>
Type Node<Type> :: getData()
{
    return data;
}

template <class Type>
void Node<Type> :: setData(Type data)
{
    this -> data = data;
}


#endif /* Node_hpp */
