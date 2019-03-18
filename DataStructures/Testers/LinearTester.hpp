//
//  LinearTester.hpp
//  DataStructures
//
//  Created by Hollander, Kaylie on 2/13/19.
//  Copyright © 2019 Hollander, Kaylie. All rights reserved.
//

#ifndef LinearTester_hpp
#define LinearTester_hpp

#include "../Controller/Timer.hpp"
#include "../Controller/FileController.hpp"
#include "../Linear/LinkedList.hpp"
#include "../Linear/Stack.hpp"
#include "../Linear/Queue.hpp"
#include "../Linear/Array.hpp"

#include <iostream>
using namespace std;

class LinearTester
{
public:
    void testVsSTL();
    void testVsStack();
    void testVsQueue();
    void testVsDouble();
     
    
};

#endif /* LinearTester_hpp */
