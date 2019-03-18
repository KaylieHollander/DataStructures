//
//  Graph.hpp
//  DataStructures
//
//  Created by Hollander, Kaylie on 3/18/19.
//  Copyright © 2019 Hollander, Kaylie. All rights reserved.
//

#ifndef GraphTester_hpp
#define GraphTester_hpp

#include "../Linear/Graph.hpp"
#include <iostream>



class GraphTester
{
    
private:
    Graph<string> puzzle;
    void compareTraversals();
    void findCheapestTraversal();
    
public:
    void testGraphs();
    void setup();
};


#endif /* GraphTester_hpp */
