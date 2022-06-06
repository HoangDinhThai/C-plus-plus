#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Animal
{
public:
    int soChan;
    int id;
    string ten;
    string tenchu;
    double nang;
    double cao;
    string maulong;

    Animal()
    {
    }

    Animal(int soChan, int id, string ten, string tenchu, double nang, double cao, string maulong)
    {
        this->soChan = soChan;
        this->id = id;
        this->ten = ten;
        this->tenchu = tenchu;
        this->nang = nang;
        this->cao = cao;
        this->maulong = maulong;
    };

    virtual void print()
    {
        cout << soChan << endl;
        cout << id << endl;
        cout << ten << endl;
        cout << tenchu << endl;
        cout << nang << endl;
        cout << cao << endl;
    }
};

class Dog : public Animal
{
public:
    Dog()
    {
    }
    Dog(int soChan, int id, string ten, string tenchu, double nang, double cao, string maulong)
    {
        this->soChan = soChan;
        this->id = id;
        this->ten = ten;
        this->tenchu = tenchu;
        this->nang = nang;
        this->cao = cao;
    }
    void sua()
    {
        cout << "Gau gau" << endl;
    }
};

class Becgie : public Dog
{
public:
    Becgie()
    {
    }
    Becgie(int soChan, int id, string ten, string tenchu, double nang, double cao, string maulong)
    {
        this->soChan = soChan;
        this->id = id;
        this->ten = ten;
        this->tenchu = tenchu;
        this->nang = nang;
        this->cao = cao;
    }
    void sanmoi()
    {
        cout << "San moi \n";
    }
};

class Chihuahua : public Dog
{
public:
    Chihuahua()
    {
    }
    Chihuahua(int soChan, int id, string ten, string tenchu, double nang, double cao)
    {
        this->soChan = soChan;
        this->id = id;
        this->ten = ten;
        this->tenchu = tenchu;
        this->nang = nang;
        this->cao = cao;
    }
};

class Cat : public Animal
{
public:
    Cat()
    {
    }
    Cat(int soChan, int id, string ten, string tenchu, double nang, double cao, string maulong)
    {
        this->soChan = soChan;
        this->id = id;
        this->ten = ten;
        this->tenchu = tenchu;
        this->nang = nang;
        this->cao = cao;
    }
    void keu()
    {
        cout << "Meo meo" << endl;
    }
};

void print(Animal a)
{
    a.print();
}

int main(int argc, char const *argv[])
{
    Animal saka(1, 4, "saka", "Hoang Dinh Thai", 45, 1.2, "trang");
    Becgie tuntun(23, 43, "tuntun", "Tong Minh Khang", 30, 1.55, "7 mau sac cau vong");

    Dog d1(2, 23, "a", "Hoang Quy Hao", 20, 12.2, "den");
    Dog d2(3, 34, "b", "Hoang Van Thinh", 111, 1.23, "vang");

    Cat c1(5, 32, "d", "Nguyen Van A", 20, 12.9, "trang");
    Cat c2(6, 55, "e", "Nguyen Van B", 12, 26.1, "nau");

    // saka.in_thong_tin();
    // lenovo.in_thong_tin();
    // tuntun.in_thong_tin();
    // tuntun.sanmoi();

    Animal *p = &d1;

    vector<Animal *> pets;

    pets.push_back(&d1);
    pets.push_back(&d2);
    pets.push_back(&c1);
    pets.push_back(&c2);

    for (int i = 0; i < pets.size(); i++)
    {
        pets[i]->print();
        cout << "--------------------------" << endl;
    }

    return 0;
}
