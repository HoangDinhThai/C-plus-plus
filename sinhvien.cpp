#include <string>
#include <sstream>
#include <iostream>
using namespace std;
struct Date
{
    int ngay, thang, nam;
    Date(string s)
    {
        stringstream ss(s);
        string token;
        getline(ss, token, '/');
        ngay = stoi(token);
        getline(ss, token, '/');
        thang = stoi(token);
        getline(ss, token, '/');
        nam = stoi(token);
    }
    string getstring()
    {
        return to_string(ngay) + "/" + to_string(thang) + "/" + to_string(nam);
    }
};

class SinhVien
{
public:
    string mssv;
    string ten;
    string queQuan;
    Date birthday;
    string khoa;
    string nganh;
    string khoa_nhap_hoc;
    double hocPhi;

    SinhVien(string Mssv, string Ten, string Que, Date Birthday, string Khoa, string Khoas, double Hocphi, string Nganh) : mssv(Mssv), ten(Ten), queQuan(Que), birthday(Birthday), khoa(Khoa), khoa_nhap_hoc(Khoas), hocPhi(Hocphi), nganh(Nganh)
    {
    }

    int getTuoi()
    {
        return 2022 - birthday.nam;
    }
    string getEmail()
    {
        return mssv + "@st.phenikaa-uni.edu.vn";
    }
    /*virtual*/ void print()
    {
        cout << mssv << " " << ten << " " << queQuan << " "
             << " " << birthday.nam << " " << khoa << " " << khoa_nhap_hoc << " " << hocPhi << " " << nganh << endl;
    }
};

class SVCNTT : public SinhVien
{
public:
    SVCNTT(string Mssv, string Ten, string Que, Date Birthday, string Khoa, string Khoas, double Hocphi, string Nganh, int Toeic) : SinhVien(Mssv, Ten, Que, Birthday, Khoa, Khoas, Hocphi, Nganh), toeic(Toeic)
    {
    }
    void print()
    {
        cout << mssv << " " << ten << " " << queQuan << " "
             << " " << birthday.nam << " " << khoa << " " << khoa_nhap_hoc << " " << hocPhi << " " << nganh << " " << toeic << endl;
    }

protected:
    int toeic;
};
class SVCNTT_VJ : public SinhVien
{
public:
    SVCNTT_VJ(string Mssv, string Ten, string Que, Date Birthday, string Khoa, string Khoas, double Hocphi, string Nganh, int JLPT) : SinhVien(Mssv, Ten, Que, Birthday, Khoa, Khoas, Hocphi, Nganh), jlpt(JLPT)
    {
    }
    void print()
    {
        cout << mssv << " " << ten << " " << queQuan << " "
             << " " << birthday.nam << " " << khoa << " " << khoa_nhap_hoc << " " << hocPhi << " " << nganh << " " << jlpt << endl;
    }

protected:
    int jlpt;
};

// SinhVien a("12", "Hung", "HungYen", Date("21/06/2002"), "CNTT", "K14", 28, "KTPM");
// SVCNTT b("12", "Hung", "HungYen", Date("21/06/2002"), "CNTT", "K14", 28, "KTPM", 600);
// a.print();
// b.print();
// cout << b.getTuoi() << endl;
// cout << b.getEmail() << endl;
