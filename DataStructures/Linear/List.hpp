//
//  List.hpp
//  DataStructures
//
//  Created by Hollander, Kaylie on 2/7/19.
//  Copyright © 2019 Hollander, Kaylie. All rights reserved.
//

#ifndef List_hpp
#define List_hpp

#include "../Nodes/LinearNode.hpp"

template <class Type>
class List
{
public:
//    Structure
    virtual void add(Type item) = 0;
    virtual void addAtIndex(int index, Type item) = 0;
    virtual Type remove(int index) = 0;
    virtual Type getFromIndex(int index) = 0;
//    Helper
    virtual int getSize() const = 0;
    virtual LinearNode<Type> * getFront() = 0;
    virtual LinearNode<Type> * getEnd() = 0;
protected:
    int size;
};

#endif /* List_hpp */
