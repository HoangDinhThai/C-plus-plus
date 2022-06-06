#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
using namespace std;

int main(int argc, char *argv[])
{
    int nodeID = stoi(argv[2]);    
    int w = stod(argv[3]);

    ifstream myFile("network.csv");   
    if (!myFile)
    {
        exit(1);
    }
    string line;
    getline(myFile, line);

    int node_i;
    int node_j;
    double trongSo;
    int count = 0;
    ofstream outFile("output1.txt");
    while (getline(myFile, line))
    {
        // cout << line << endl;
        stringstream ss(line);
        string token;
        getline(ss, token, ',');
        node_i = stoi(token);

        if (node_i != nodeID)
        {
            continue;
        }

        getline(ss, token, ',');
        node_j = stod(token);

        getline(ss, token, ',');
        trongSo = stod(token);

    if (trongSo > w){
        outFile << "i : " << node_i << endl;
        outFile << "j : " << node_j << endl;
        outFile << "Trong so : " << trongSo << endl;
        outFile << "================" << endl;
    }
    }
    outFile.close();
}