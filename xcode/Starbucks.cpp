//
//  Starbucks.cpp
//  StarbucksSearchTest
//
//  Created by Jake Gregg on 10/15/12.
//
//

#include "Starbucks.h"
#include "Entry.h"
#include "cinder/app/AppBasic.h"
#include <iostream>
#include <fstream>
#include <string>

using namespace std;
using namespace ci;
using namespace ci::app;

void Starbucks::build(Entry* c, int n) {
    ifstream myfile;
    string id;
    double x, y;
    
    myfile.open("/Users/smartkid1965/Documents/DOC/CSE 274/HW04StarterFiles/Starbucks_2006.csv");
    while (myfile.good()) {
        getline(myfile, id, ',');
        cout << id << endl;
    }
}