#include <iostream>
#include <string>
#include <cstring>
using namespace std;

/* argc in ra tổng chuỗi trong 1 chuỗi
 argv là tập hợp các string
*/

bool isNumber(string s)
{
    for (int i = 0; i < s.size(); i++)
    {
        if (isalpha(s[i]))
            return false;
    }
    return true;
}

int main(int argc, char *argv[])
{
    // cout << argc << endl;

    /* double tong = 0;

    for (int i = 1; i < argc ; i++){

        tong += stod ( argv[i] );
        //Nếu đó làm số thực dùng: stod
        //Nếu là số nguyên dùng: stoi

       cout << tong << endl;
    */

    /*
    if (!isNumber(argv[5]))
    {
        cout << "Nhap sai tuoi roi nhap lai di\n";
        exit(0);
    }

    cout << "Xin chao\n"
         << argv[1] << " "
         << argv[2] << " " << argv[3] << endl;

    cout << "Tuoi: " << argv[5] << " " << endl
         << "Gioi tinh: " << argv[4] << endl;

    return 0;

    */

    string ten;
    string tuoi;
    for (int i = 1; i < argc; i++)
    {
        if (strcmp (argv[i], "-Ten") == 0)
            ten = argv[i + 1];

        else if(strcmp (argv[i], "-Tuoi") == 0)
        tuoi = argv[i + 1];
    }

    cout << "Ten: " << ten << endl;
    cout << "Tuoi: " << tuoi << endl;
}
