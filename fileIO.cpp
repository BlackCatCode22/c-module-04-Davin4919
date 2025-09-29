//
// Created by Daniel A  on 9/29/2025.
//

#include <iostream>
#include <fstream>
using namespace std;
int main() {

    fstream myFile;
    myFile.open("arrivingAnimals.txt", ios::out); //write mode
    if (myFile.is_open()) {
        myFile << " Hello " << endl;;
        myFile << " This is 2nd line" << endl;
        myFile.close();

    }
    myFile.open("arrivingAnimals.txt", ios::app); //Append
    if (myFile.is_open()) {
        myFile << " Hello 2 " << endl;;
        myFile.close();

    }

    system ("pause>0");
    return 0;
}