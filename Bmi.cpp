#include <iostream>
#include <string>
using namespace std;

/* Struct bieu dien thong tin cua 1 cau thu bong da
ten 
tuoi
chieu cao
can nang

ham:
1. Tinh chir so bmi cua cau thu bmi = can nang/ chieu cao ^ 2
2. In ra cac thong tin co ban cua cau thu

*/

struct CauThu{ // attributes methods
	string ten;
	int tuoi;
	float cao;
	float nang;
	
	float bmi(){
		return nang / (cao * cao);
	}
	
	void display(){
		cout << ten << "\t" << tuoi << "\t" 
		<< cao << "\t" << nang << "\t"
		<< bmi() << endl;
		
		if (isBeophi())
			cout << "Beo phi\n";
		else
			cout << "\nKhong beo Phi\n";
	}
	
	bool isBeophi(){
		if(bmi() > 30)
			return true;
		else
			return false;
	}
};

int main(){
	CauThu c = {"Hoang Dinh Thai", 20, 1.7, 70};
	c.display();
	return 0;
	return 0;
}
