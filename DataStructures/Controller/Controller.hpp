//
//  Controller.hpp
//  DataStructures
//
//  Created by Hollander, Kaylie on 1/28/19.
//  Copyright © 2019 Hollander, Kaylie. All rights reserved.
//

#ifndef Controller_hpp
#define Controller_hpp

#include <iostream>
//#include "../Model/Nodes/Node.hpp"
//#include "../Model/Node/LinearNode.hpp"
#include "FileController.hpp"
#include "../Testers/LinearTester.hpp"

using namespace std;

class Controller
{
private:
    void usingNodes();
    void testLinear();
public:
    void start();
};

#endif /* Controller_hpp */
