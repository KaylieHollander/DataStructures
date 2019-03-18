//
//  LinearTester.cpp
//  DataStructures
//
//  Created by Hollander, Kaylie on 2/13/19.
//  Copyright © 2019 Hollander, Kaylie. All rights reserved.
//

#include "LinearTester.hpp"

void LinearTester :: testVsSTL()

{
    Timer crimeTimerSTL, crimeTimerOOP, musicSTL, musicOOP;
    
    crimeTimerSTL.startTimer();
    vector<CrimeData> crimes = FileController :: readCrimeDataToVector("/Users/khol1271/Documents/C++/DataStructures/DataStructures/Resources/crime.csv");
    crimeTimerSTL.stopTimer();
    
    crimeTimerOOP.startTimer();
    LinkedList<CrimeData> moreCrimes = FileController :: readDataToList("/Users/khol1271/Documents/C++/DataStructures/DataStructures/Resources/crime.csv");
    crimeTimerOOP.stopTimer();
    
    cout << "This is the STL: " << endl;
    crimeTimerSTL.displayInformation();
    cout << "This is the OOP: " << endl;
    crimeTimerOOP.displayInformation();
    cout << "A difference of: " << crimeTimerOOP.getTimeInMicroseconds() - crimeTimerSTL.getTimeInMicroseconds() << "microseconds" << endl;
    
    musicSTL.startTimer();
    vector<Music> tunez = FileController :: musicDataToVector("/Users/khol1271/Documents/C++/DataStructures/DataStructures/Resources/music.csv");
    musicSTL.stopTimer();
    
    musicOOP.startTimer();
    LinkedList<Music> musicList = FileController :: musicDataToList("/Users/khol1271/Documents/C++/DataStructures/DataStructures/Resources/music.csv");
    musicOOP.stopTimer();
    
    cout << "This is the STL: " << endl;
    musicSTL.displayInformation();
    cout << "This is the OOP: " << endl;
    musicOOP.displayInformation();
    cout << "A difference of: " << musicOOP.getTimeInMicroseconds() - musicSTL.getTimeInMicroseconds() << " microseconds" << endl;
    
    
    
    crimeTimerOOP.resetTimer();
    crimeTimerSTL.resetTimer();
    musicOOP.resetTimer();
    musicSTL.resetTimer();
}

void LinearTester :: testVsStack()
{
    vector<CrimeData> crimes = FileController :: readCrimeDataToVector("/Users/khol1271/Documents/C++/DataStructures/DataStructures/Resources/crime.csv");
    
    LinkedList<CrimeData> moreCrimes = FileController :: readDataToList("/Users/khol1271/Documents/C++/DataStructures/DataStructures/Resources/crime.csv");
    
   
}

void LinearTester :: testVsQueue()
{
    vector<Music> tunez = FileController :: musicDataToVector("/Users/khol1271/Documents/C++/DataStructures/DataStructures/Resources/music.csv");
    
    LinkedList<Music> musicList = FileController :: musicDataToList("/Users/khol1271/Documents/C++/DataStructures/DataStructures/Resources/music.csv");
}

void LinearTester :: testVsDouble()
{
    
}
