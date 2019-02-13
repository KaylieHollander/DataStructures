//
//  FileController.cpp
//  DataStructures
//
//  Created by Hollander, Kaylie on 2/13/19.
//  Copyright © 2019 Hollander, Kaylie. All rights reserved.
//

#include "FileController.hpp"

LinkedList<CrimeData> FileController :: readDataToList(string filename)
{
    LinkedList<CrimeData> crimes;
    
    string currentCSVLine;
    int rowCount = 0;
    
    ifstream dataFile(filename);
    
//    If the file exists at that path
    if (dataFile.is_open())
    {
//        Keep reading until you are at the end of the file
        while (!dataFile.eof())
        {
//            Grab each line from the csv separated by the carriage return character
            getline(dataFile, currentCSVLine, '\r');
//            Exclude header row
            if (rowCount != 0)
            {
                
                if(currentCSVLine.length() != 0)
                {
                    CrimeData row(currentCSVLine);
                    crimes.add(row);
                }
            }
            rowCount++;
        }
        dataFile.close();
    }
    else
    {
        cerr << "NO FILE" << endl;
    }
    
    return crimes;
}

LinkedList<Music> FileController :: readDataToList(string filename)
{
    LinkedList<Music> musicList;
    
    string currentCSVLine;
    int rowCount = 0;
    
    ifstream dataFile(filename);
    
    //    If the file exists at that path
    if (dataFile.is_open())
    {
        //        Keep reading until you are at the end of the file
        while (!dataFile.eof())
        {
            //            Grab each line from the csv separated by the carriage return character
            getline(dataFile, currentCSVLine, '\r');
            //            Exclude header row
            if (rowCount != 0)
            {
                
                if(currentCSVLine.length() != 0)
                {
                    Music row(currentCSVLine);
                    musicList.add(row);
                }
            }
            rowCount++;
        }
        dataFile.close();
    }
    else
    {
        cerr << "NO FILE" << endl;
    }
    
    return musicList;
}
