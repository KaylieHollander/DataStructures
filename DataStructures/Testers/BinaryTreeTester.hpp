//
//  BinaryTreeTester.hpp
//  DataStructures
//
//  Created by Hollander, Kaylie on 4/16/19.
//  Copyright © 2019 Hollander, Kaylie. All rights reserved.
//

#ifndef BinaryTreeTester_hpp
#define BinaryTreeTester_hpp

#include "../Linear/BinarySearchTree.hpp"
#include "../Node/BinaryTree.hpp"
#include <iostream>

class BinaryTreeTester
{
private:
    BinarySearchTree<int> testNode;
    BinarySearchTree<int> testTree;
    BinarySearchTree<string> wordTree;
    
public:
    void treeStuff();
    void doTreeStuff();
};

#endif /* BinaryTreeTester_hpp */
