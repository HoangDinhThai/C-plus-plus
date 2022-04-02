#include <iostream>
#include <string>
#include <vector>
using namespace std;

template <typename T, size_t size>

void inMang(array<T, size> a)
{
    for (int i = 0; i < a.size(); i++)
    {
        cout << a[i] << " ";
    }
}

int main(int argc, char *argv[])
{
    int mangnguyen[4] = {1, 2, 3, 4};
    mangnguyen[2] = 6;

    array<int, 4> a = {1, 65, 87, 87};
    cout << a.size() << endl;
    cout << a.back() << endl;  // in ra phần tử cuối
    cout << a.front() << endl; // in ra phần tử đầu
    a[2] = 6;
    cout << a.at(2) << endl; // in ra phần tử thứ 2
    a.fill(0);
    for (int i = 0; i < a.size(); i++)
    {
        cout << a[i] << " " << endl;
    }

    array<int, 4> a = {1, 5, 8, 9};
    inMang(a);

    array<int, 3> a = {1, 5, 8};
    inMang(a);

    array<double, 5> b = {1.2, 5, 4, 5, 8};
    inMang(b);

    return 0;
}