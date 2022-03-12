#include <sstream>
#include <fstream>
#include <vector>
#include <iostream>
#include <string>
using namespace std;

// sum
// int main(int argc, char *argv[]){
// double sum=0;
// for(int i=1; i < argc; i++){
// sum += stod(argv[i]);
// }
// cout << sum << endl;
// return 0;
// }

// mot thuat toan can 1 so du lieu dau vao
// So vong lap - int     -n
// Che do - 1 2 3 -int   -mode
// Thoi gian ket thuc -float  -time
// rate -float -r
// Viet ham dau vao

int main(int argc, char *argv[])
{
    
    int n;
    bool foundN = false;

    int mode;
    bool foundMode = false;

    float time;
    bool foundTime = false;

    float r;
    bool foundR = false;

    for (int i = 1; i < argc; i++)
    {
        string s(argv[i]);

        if (s == "-n")
        {
            n = stoi(argv[i + 1]);
            foundN = true;
        }

        else if (s == "-mode")
        {
            mode = stoi(argv[i + 1]);
            foundMode = true;
        }

        else if (s == "-time")
        {
            time = stod(argv[i + 1]);
            foundTime = true;
        }

        else if (s == "-r")
        {
            r = stod(argv[i + 1]);
            foundR = true;
        }
    }

    if (!foundN)
    {
        cout << "thieu so vong lap" << endl
             << "setting N defaul: N = 100" << endl;
        n = 100;
    }

    if (!foundMode)
    {
        cout << "Thieu mode " << endl
             << "setting MOde defaul: N = 100" << endl;
        mode = 100;
    }

    if (!foundTime)
    {
        cout << "Thieu Time" << endl
             << "setting Time defaul: N = 100" << endl;
        time = 100;
    }

    if (!foundR)
    {
        cout << "Thieu R" << endl
             << "setting R defaul: N = 100" << endl;
        r = 100;
    }

    cout << "n" << n << endl;
    cout << "mode" << mode << endl;
    cout << "time" << time << endl;
    cout << "r" << r << endl;
    
    return 0;
}