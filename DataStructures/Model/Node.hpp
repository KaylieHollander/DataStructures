//
//  Node.hpp
//  DataStructures
//
//  Created by Hollander, Kaylie on 1/28/19.
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
    void setDaata(Type data);
};

#endif /* Node_h */
