// include các thư viện và file .cpp
#include <iostream>
#include "People.cpp"
#include "Family.cpp"
#include "Group.cpp"
#include <vector>
int main()
{
    People a("Thai", 20, "", "20010823");
    People b("Khang", 21, "", "20010824");
    People c("Thoai", 22, "", "20010825");
    People d("Thanh", 23, "Sinh vien", "20010826");

    a.display();
    b.display();
    c.display();
    d.display();
}
