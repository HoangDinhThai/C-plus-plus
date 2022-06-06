#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Student
{
protected:
    string ten;
    int MSSV;
    string khoa;
    string ntns;
    double diem;

public:
    Student()
    {
    }

    Student(string ten, int MSSV, string ntns, string khoa, double diem)
    {
        this->ten = ten;
        this->MSSV = MSSV;
        this->ntns = ntns;
        this->khoa = khoa;
        this->diem = diem;
        this->email = email;
    }

    virtual void in_thong_tin()
    {
        cout << ten << endl;
        cout << MSSV << endl;
        cout << ntns << endl;
        cout << khoa << endl;
        cout << diem << endl;
    }

    void get_email()
    {
        cout << " ";
    }

protected:
    string email;
};

class CNTT : public Student
{
public:
    CNTT()
    {
    }

    CNTT(string ten, int MSSV, string ntns, string khoa, double diem)
    {
        this->ten = ten;
        this->MSSV = MSSV;
        this->ntns = ntns;
        this->khoa = khoa;
        this->diem = diem;
        this->email = email;
    }
    virtual void in_thong_tin()
    {
        cout << ten << endl;
        cout << MSSV << endl;
        cout << ntns << endl;
        cout << khoa << endl;
        cout << diem << endl;
        cout << toeic << endl;
    }

protected:
    double toeic;
};

class VJ : public Student
{
public:
    VJ()
    {
    }

    VJ(string ten, int MSSV, string ntns, string khoa, double diem)
    {
        this->ten = ten;
        this->MSSV = MSSV;
        this->ntns = ntns;
        this->khoa = khoa;
        this->diem = diem;
        this->email = email;
        this->n = n;
    }

    virtual void in_thong_tin()
    {
        cout << ten << endl;
        cout << MSSV << endl;
        cout << ntns << endl;
        cout << khoa << endl;
        cout << diem << endl;
        cout << n << endl;
    }

protected:
    string n;
};

class KHMT : public Student
{
public:
    KHMT()
    {
    }

    KHMT(string ten, int MSSV, string ntns, string khoa, double diem)
    {
        this->ten = ten;
        this->MSSV = MSSV;
        this->ntns = ntns;
        this->khoa = khoa;
        this->diem = diem;
        this->email = email;
        this->Ielts = Ielts;
    }

    virtual void in_thong_tin()
    {
        cout << ten << endl;
        cout << MSSV << endl;
        cout << ntns << endl;
        cout << khoa << endl;
        cout << diem << endl;
        cout << Ielts << endl;
    }

protected:
    double Ielts;
};

int main(int argc, char const *argv[])
{
    CNTT HDT("Hoang Dinh Thai", 20001823, "22 - 11 - 2002", "K14", 10);
    VJ HQH("Hoang Quy Hao", 20010723, "11- 2- 2002", "K14", 5);
    KHMT TMK("Tong Minh Khang", 20010744, "12 - 3 - 2002", "K14", 1);
    HDT.in_thong_tin();
    cout << "-------------------------------\n";
    HQH.in_thong_tin();
    cout << "-------------------------------\n";
    TMK.in_thong_tin();
    cout << "-------------------------------\n";
    return 0;
}
