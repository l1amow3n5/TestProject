//
//  Controller.cpp
//  TestProject
//
//  Created by Owen, Liam on 1/28/19.
//  Copyright © 2019 CTEC. All rights reserved.
//

#include "Controller.hpp"

void Controller :: start()
{
    cout << "HELLO!!!" << endl;
    
    for (int n = 0 ; n < numList.size(); ++n)
    {
        cout << numList[n] << endl;
    }
    for (int n = 0 ; n < wordList.size() ; ++n)
    {
        cout << wordList[n] << endl;
    }
    for (int n = 0 ; n < 5 ; ++n)
    {
        Words[n] = wordList[n];
        cout << Words[n] << endl;
    }
}
