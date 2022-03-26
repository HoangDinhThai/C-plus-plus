#include <iostream>
#include <string>
#include <cstring>
#include <sstream>
#include <fstream>
#include <vector>

using namespace std;

int main(int argc, char *argv[])
{
    // int n;
    // bool foundN = false;

    // int mode;
    // bool foundMode = false;

    // float time;
    // bool foundTime = false;

    // float r;
    // bool foundR = false;

    // for (int i = 1; i < argc; i++)
    // {
    //     string tukhoa(argv[i]);
    //     if (tukhoa == "-n")
    //     {
    //         n = stoi(argv[i + 1]);
    //         foundN = true;
    //     }

    //     else if (tukhoa == "-mode")
    //     {
    //         mode = stoi(argv[i + 1]);
    //         foundMode = true;
    //     }

    //     else if (tukhoa == "-time")
    //     {
    //         time = stod(argv[i + 1]);
    //         foundTime = true;
    //     }

    //     else if (tukhoa == "-r")
    //     {
    //         r = stod(argv[i + 1]);
    //         foundR = true;
    //     }
    // }

    // if (!foundN)
    // {
    //     cout << "Khong co n, thiet klap n mac dinh = 100\n" << endl;
    //     n = 100;
    // }

    // if (!foundN)
    // {
    //     cout << "Khong co n, thiet klap n mac dinh = 100\n" << endl;
    //     n = 100;
    // }

    // if (!foundMode)
    // {
    //     cout << "Khong co mode, thiet klap n mac dinh = 100\n" << endl;
    //     mode = 100;
    // }

    // if (!foundTime)
    // {
    //     cout << "Khong co time, thiet klap n mac dinh = 100\n" << endl;
    //     time = 100;
    // }

    // if (!foundR)
    // {
    //     cout << "Khong co r, thiet klap n mac dinh = 100\n" << endl;
    //     r = 100;
    // }

    // cout << "n = " << n << endl;
    // cout << "mode = " << mode << endl;
    // cout << "time = " << time << endl;
    // cout << "r = " << r << endl;

    /* Người dùng sẽ nhập các thông tin liên quan tới cá nhân
    Họ   -h
    Đệm  -d
    Tên  -t
    Tuoi -tu
    Que  -q
    */

    /*
        string ho;
        bool foundH = false;

        string dem;
        bool foundD = false;

        string ten;
        bool foundT = false;

        string que;
        bool foundQ = false;

        int tuoi;
        bool foundTu = false;

        for (int i = 1; i < argc; i++)
        {
            string tukhoa(argv[i]);

            else if (tukhoa == "-h")
            {
                ho = argv[i + 1];
                foundH = true;
            }

            else if (tukhoa == "-d")
            {
                dem = argv[i + 1];
                foundD = true;
            }

            else if (tukhoa == "-t")
            {
                ten = argv[i + 1];
                foundT = true;
            }

            else if (tukhoa == "-Que")
            {
                que = argv[i + 1];
                foundQ = true;
            }

            else if (tukhoa == "tuoi")
            {
                tuoi = stoi(argv[i + 1]);
                foundTu = true;
            }
        }

        if (!foundH)
        {
            cout << "Khong tim thay ho !" << endl;
        }

        if (!foundD)
        {
            cout << "Khong tim thay dem !" << endl;
        }

        if (!foundT)
        {
            cout << "Khong tim thay ten !" << endl;
        }

        if (!foundQ)
        {
            cout << "Khong tim thay que!" << endl;
        }

        if (!foundTu)
        {
            cout << "Khong tim thay tuoi !" << endl;
        }

        cout << "ho = " << ho << endl;
        cout << "dem = " << dem << endl;
        cout << "ten = " << ten << endl;
        cout << "que = " << que << endl;
        cout << "tuoi = " << tuoi << endl;

    */

    /*
    //Stringstream này sẽ nhận tất cả các giá trị của s
    double x, y, z, k;
    string a;
    string s = "1 2 3 4.1 ABCD";
    stringstream ss(s);

    // Ở đây ss >> tương tự như cout >> nó sẽ lấy được giá trị của s
    ss >> x >> y >> z >> k >> a;

    cout << x << endl;
    cout << y << endl;
    cout << z << endl;
    cout << k << endl;
    cout << a << endl;

    */

    /*
     // Khai bảo kiểu ss như này thì ở đây ss là 2 chiều có thể nhập vào và có thể đẩy giá trị ra được
    //  Ở đây ss << hiểu là nó sẽ nhận vào các giá trị như hello, hi, abc
    //  Muốn in ra thì dùng ss.str();

    stringstream ss;
    ss << "Hello";
    ss << " Hi";
    ss << " abc";
    cout << ss.str() << endl;

    string s;
    ss >> s; // ss dí cho con s giá trị hello ở hàm bên trên
    cout << "s = " << s << endl;

    ss >> s; // ss dí cho con s giá trị hi bởi vì nó chỉ nhận giá trị lúc saau nhập vào và ghi đè lên cái trước
    cout << "s = " << s << endl;

    ss >> s; // ss dí cho con s giá trị abc bởi vì nó chỉ nhận giá trị lúc sau nhập vào và ghi đè lên cái trước
    cout << "s = " << s << endl;

    */

    /*
     vector<string> lines = {"a 10", "b 2", "c 5", "d 7", "e 9.5"};
     double sum = 0;
     for (string line : lines)
     {
         stringstream ss(line);
         string s;

         ss >> s >> s;

         sum += stod(s);
     }

     cout << sum / lines.size() << endl;
     */

    // vector<string> danhsach = {"a 10 9", "b 2 8", "c 5 7", "d 7 9", "e 9.5 7"};

/*
    ifstream myFile("/Users/LAPTOP ACER/Desktop/diem.txt");
    if (!myFile)
    {
        cout << "Khong tim thay file !\n";
        exit(0);
    }

    int count = 0;
    string temp;
    while (getline(myFile, temp))
    {
        stringstream ss(temp);
        string ten;
        float toan, van;
        ss >> ten >> toan >> van;

        if (toan + van >= 16);
            count ++;
    }

    cout << count << endl;
*/

    //     int count = 0;
    //     for (string line : danhsach)
    //     {
    //         stringstream ss(line);
    //         string name;
    //         float toan, van;
    //         ss >> name;
    //         ss >> toan;
    //         ss >> van;

    //         if ((toan + van) / 2 >= 8)
    //         {
    //             count++;
    //         }
    //     }

    //     cout << count << endl;
}