//
//  LinkedList.hpp
//  DataStructures
//
//  Created by Hollander, Kaylie on 2/7/19.
//  Copyright © 2019 Hollander, Kaylie. All rights reserved.
//

#ifndef LinkedList_hpp
#define LinkedList_hpp

#include "List.hpp"

using namespace std;

template <class Type>
class LinkedList : public List<Type>
{
public:
//    Constructors
    LinkedList();
//    Destructor
    virtual ~LinkedList();
//    Helper Methods
    int getSize() const;
    LinearNode<Type> * getFront();
    LinearNode<Type> * getEnd();
    
//    Structure Methods
    virtual void add(Type item);
    virtual void addAtIndex(int index, Type item);
    virtual Type getFromIndex(int index);
    virtual Type remove(int index);
    bool contains(Type item);
protected:
    LinearNode<Type> * front;
    LinearNode<Type> * end;
};
    
template <class Type>
LinkedList<Type> :: LinkedList()
{
    this -> front = nullptr;
    this -> end = nullptr;
    this -> size = 0;
}
    
template <class Type>
LinkedList<Type> :: ~LinkedList()
{
    LinearNode<Type> * destroyStructure = front;
    while (front != nullptr)
    {
        front = destroyStructure -> getNextNode();
        delete destroyStructure;
        destroyStructure = front;
    }
}
    
template <class Type>
void LinkedList<Type> :: addAtIndex(int index, Type item)
{
    assert(index >+ 0 && index <= this -> size);
    if(index == this -> size)
    {
        add(item);
    }
    else
    {
        LinearNode<Type> * toBeAdded = new LinearNode<Type>(item);
        if (index == 0)
        {
            toBeAdded -> setNextNode(front);
            front = toBeAdded;
        }
        else
        {
            LinearNode<Type> * previous = nullptr;
            LinearNode<Type> * current = front;
            
            for(int position = 0; position < index; position++)
            {
                previous = current;
                current = current -> getNextNode();
            }
            previous -> setNextNode(toBeAdded);
            toBeAdded -> setNextNode(current);
        }
        this -> size++;
    }
}
    
template <class Type>
Type LinkedList<Type> :: remove(int index)
{
    assert(index >= 0 && index < this -> size);
    
    LinearNode<Type> * current = front;
    LinearNode<Type> * toBeRemoved = nullptr;
    LinearNode<Type> * previous = nullptr;
    
    Type removedData;
    
    if (index == 0)
    {
        toBeRemoved = front;
        this -> front = this -> front -> getNextNode();
    }
    else
    {
        for(int position = 0; position < index; position++)
        {
            previous = current;
            current = current -> getNextNode();
        }
        
        toBeRemoved = current;
        
        if(index == this -> size - 1)
        {
            previous -> setNextNode(nullptr);
            end = previous;
        }
        else
        {
            current = toBeRemoved -> getNextNode();
            previous -> setNextNode(current);
        }
    }
    
    this -> size -= 1;
    
    removedData = toBeRemoved -> getData();
    delete toBeRemoved;
    return removedData;
}
    
template <class Type>
    bool LinkedList<Type> :: contains(Type thingToFind)
    {
        bool exists = false;
        
        LinearNode<Type> * searchPointer = front;
        
        for(int index = 0; index < getSize(); index++)
        {
            if(searchPointer -> getData() == thingToFind)
            {
                return true;
            }
            searchPointer = searchPointer -> getNextNode();
        }
        
        return exists;
    }
#endif /* LinkedList_hpp */