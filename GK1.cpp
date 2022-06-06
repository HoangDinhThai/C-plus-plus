#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <sstream>
#include <math.h>

struct tips
{
    double total_bill, tip, phantram, sex;
    tips(double a = 0, double b = 0, double d = 0)
    {
        total_bill = a;
        tip = b;
        phantram = d;
    }
};

using namespace std;

int main(int arvc, char *arvg[])
{
    double tip, total_bill, phantram, tong_phantram;
    vector<tips> list;
    string path = arvg[1];
    ifstream myFile(path);
    if (!myFile)
    {
        cout << "Khong tim thay file !\n";
        exit(0);
    }

    string teamp, token;
    getline(myFile, teamp);

    while (getline(myFile, teamp))
    {
        stringstream ss(teamp);
        double all = 0;
        getline(ss, token, ',');
        getline(ss, token, ',');
        total_bill = stod(token);
        getline(ss, token, ',');
        tip = stod(token);
        getline(ss, token, ',');
        all = total_bill + tip;
        phantram = tip / all;

        tips x(total_bill, tip, phantram);
        list.push_back(x);
    }

    myFile.close();

    double all_total_bill;
    double total_tip = 0;

    for (int i = 0; i < list.size(); i++)
    {
        total_tip += list[i].tip;
        all_total_bill += list[i].total_bill;
    }

    cout << "Tong tien tip = " << total_tip << endl;
    tong_phantram = total_tip / (all_total_bill + total_tip);
    cout << "Trung binh tip = " << tong_phantram << endl;
}
