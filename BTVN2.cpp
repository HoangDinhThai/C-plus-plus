#include <iostream>
#include <vector>
#include <fstream>
#include <sstream>
#include <string>
#include <math.h>
using namespace std;

int main(int argc, char *argv[]){
    string pathFile = argv[1];
    ifstream inputFile(pathFile);
    if (!inputFile){
        cout << "Error\n";
        exit(0);
    }

    int nodeID = stoi( argv[2] );
    double w = stod( argv[3] );

    string line;
    getline(inputFile, line); // header
    ofstream outFile("/home/toto/Desktop/out.txt");

    while (getline(inputFile, line)) {
        stringstream ss(line);
        string token;
        getline(ss, token, ',');
        int nodei = stoi(token);
        if (nodei != nodeID)
            continue;

        getline(ss, token, ',');
        int nodej = stoi(token);

        getline(ss, token, ',');
        double trongso = stod(token);

        if (trongso > w){
            cout << nodej << endl;
            outFile << line << endl;
        }
    }
    outFile.close();
    return 0;
}
