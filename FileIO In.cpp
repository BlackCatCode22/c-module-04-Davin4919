//
// Created by BE129 on 9/29/2025.
//

#include <iostream>
#include <fstream>
#include<string>
using namespace std;
int main() {

    fstream myFile;
    myFile.open("D:/CPP Stuff- dAvina/dataFiles", ios::in);
    if (myFile.is_open()) {
        string line;
        while (getline(myFile, line)) {
            cout << line << endl;
        }

        myFile.close();


    }}