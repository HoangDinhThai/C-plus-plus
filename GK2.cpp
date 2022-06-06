#include <iostream>
#include <fstream>
#include <sstream>
#include <istream>
#include <string>
#include <vector>

using namespace std;

struct Richman
{
    string name;
    int rank, age;
    string country;
    int finalWorth;
};

int main(int argc, char const *argv[])
{
    vector<Richman> richman;
    string Path, country_input, age_input, token;
    string name;
    int rank, age;
    string country;
    int finalWorth;
    ifstream myfile(Path);
    ofstream outFile("result.csv");
    string teamp, token;
    getline(myfile, teamp);
    while (getline(myfile, teamp))
    {
        stringstream ss(teamp);
        getline(ss, token, ',');
        rank = stoi(token);

        getline(ss, token, ',');
        name = token;

        getline(ss, token, ',');
        age = stoi(token);

        getline(ss, token, ',');
        finalWorth = stoi(token);

        getline(ss, token, ',');
        getline(ss, token, ',');
        getline(ss, token, ',');
        getline(ss, token, ',');
        getline(ss, token, ',');
        country = token;

        Richman n(rank, name, age, finalWorth, country)
            richman.push_back(n)
    }
    myfile.close();
    for (int i = 0; i < richman.size(); i++)
    {
        if (richman[i].country == country_input)
        {
            outFile << richman.rank << "\t" << richman.name << "\t" << richman.age << richman.finalWorth << richman.country << endl;
        }
    }
    outFile.close();
    return 0;
}

