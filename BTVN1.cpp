#include <iostream>
#include <string>
#include <math>
#include <vector>
#include <sstream>
#include <fstream>
using namespace std;

struct Node
{
    int id;
    double x, y;
    Node(){}

};

double khoangCach(Node& node1, Node& node2)
{
    return sqrt((node1.x - node2.x) * (node1.x - node2.x) +
                (node1.y - node2.y) * (node1.y - node2.y))
}

int main(int argc, char *argv[])
{
    string pathFile = argv[1];
    ifstream inputFile(pathFile);
    if(!inputFile)
    {
        cout << "Khong tim duoc file\n";
        exit(0);
    }

    vector<Node> danhsach;
    string line;
    getline(inputFile, line); //dòng đầu

    while(getline(inputFile, line))
    {
        stringstream ss(line);
        string token;
        Node n;

        getline(ss, token, ',');
        n.id =stoi(token) ;

        getline(ss, token, ',');
        n.x = stod(token);

        getline(ss, token, ',');
        n.y = stod(token);

        danhsach.push_back(n);
    }

    // in điểm gần nhất hoặc xa nhất của nodeID

    int nodeID = stoi(argv[2]);
    double kc_max = -9999;
    double kc_min = 9999;
    for(int i = 0; i < danhsach.size(); i++)
    {
        if(i == nodeID)
            continue;
        double kc_max = khoangCach(nodeID, danhsach[i]);

        if(kc > kc_max)
            kc_max = kc;
        if(kc < kc_min)
            kc_min = kc;
    }

    pathFile.end();
    ofstream outFile("C:/Users/Admin/Downloads/out.txt");
    
    cout << "Cac diem xa nhat la: ";
    outFile << "Cac diem xa nhat la: ";
    for(int i = 0; i < danhsach.size(); i++)
    {
        double kc = khoangCach(danhsach[nodeID], danhsach[i]);
        if(kc == kc_max)
        {
            cout << i << " ";
            outFile << i << " ";
        }
    }
    
    cout << endl;
    outFile << endl;

    cout << "Cac diem gan nhat la: ";
    outFile << "Cac diem gan nhat la: ";
    for(int i = 0; i < danhsach.size(); i++)
    {
        double kc = khoangCach(danhsach[nodeID], danhsach[i]);
        if(kc == kc_min)
        {
            cout << i << " ";
            outFile << i << " ";
        }
            
    }

    cout << endl;
    outFile << endl;
    outFile.end();

    return 0;
}
