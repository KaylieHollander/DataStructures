//
//  Stack.hpp
//  DataStructures
//
//  Created by Hollander, Kaylie on 2/11/19.
//  Copyright © 2019 Hollander, Kaylie. All rights reserved.
//

#ifndef Stack_hpp
#define Stack_hpp

#include "LinkedList.hpp"

template <class Type>
class Stack : public LinkedList<Type>
{
public:
    Stack();
    ~Stack();
    
//    Stack specific methods
    void push(Type data);
    Type pop();
    Type peek();
    
//    Overridden LinkedList methods
    void add(Type data);
    void addAtIndex(int index, Type data);
    Type getFromIndex(int index);
    Type remove(int index);
};

template <class Type>
Stack<Type> :: Stack() : LinkedList<Type>()
{
    
}

template <class Type>
Stack<Type> :: ~Stack()
{
    while(this -> size > 0)
    {
        pop();
    }
}

#endif /* Stack_hpp */