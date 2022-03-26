#include <sstream>
#include <fstream>
#include <vector>
#include <iostream>
#include <string>
using namespace std;

int main(int argc, char *argv[])
{
    string path = argv[1];
    string id = argv[2];

    ifstream myFile(path);
    if (!myFile)
    {
        cout << "Khong co file\n";
        exit(0);
    }

    string line;
    getline(myFile, line);

    double sumVale = 0, sumTime = 0;
    int count = 0;
    while (getline(myFile, line))
    {
        stringstream ss(line);
        string token;

        getline(ss, token, ',');
        if (token != id)
            continue;

        getline(ss, token, ',');
        sumVale += stod(token);

        getline(ss, token, ',');
        sumTime += stod(token);

        count += 1;
    }
    myFile.close();

    ofstream outFile("C:/Users/Administrator/Downloads", ios_base::app);
    outFile << "asdsadsa";

    if (count == 0)
    {
        cout << "Khong ton tai" << id << "\n";
    }
    else
    {
        cout << sumVale / count << " - " << sumTime / count << endl;
    }

    outFile.close();

    return 0;
}