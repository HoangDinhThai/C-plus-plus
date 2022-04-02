#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <set>
#include <unordered_set>
#include <unordered_map>
#include <map>
// set map
using namespace std;

void invec(vector<int> vec)
{
    for(int x : vec)
        cout << x << " ";
    cout << endl;
}

// double tim_kmax(vector<int> vec, int k)
// {
//     // sap xep
//     sort(vec.begin(), vec.end());
//     return vec[vec.size() - k];
// }

void timx(unordered_map<int, int> count, int x)
{
    if(count.find(x) != count.end())
    {
        cout << "Ton tai, xuat hien: " << count[x] << endl;
    }
    else
    {
        cout << "Khong ton tai\n";
    }
}

int main(int argc, char *argv[])
{
    // vector<int> vec = {1,2,3,4,56,6,7,78,8,8,656,454,21};
    // // viet ham tim phan tu thu k cua vec
    // set<int> s;
    // for(int x : vec)
    //     s.insert(x);
    // s.insert(5);
    // for(int x : s)
    //     cout << x << " ";
    // cout << endl;

    /*
    string text = "-	Một trong những điều làm cản trở việc phân chia thời gian của chúng ta là: vấn đề cấp báchCấp bách được hiểu là việc cần được tập trung hay hành động ngay lập tức Cách tốt nhất để giải quyết tình thế đối nghịch giữa tính cấp bách và tầm quan trọng là ý thức được vấn đề và cân nhắc việc gì quan trọng nhưng khẩn cấp mà bản thân chọn thực hiện và việc gì sẽ từ chối ";
    set<string> danh_sach_cac_tu;
    stringstream ss(text);
    vector<string> allWord;
    string word;
    while(ss >> word)
    {
        danh_sach_cac_tu.insert(word);
        allWord.push_back(word);
    }

    for(auto x : danh_sach_cac_tu)
    {
        int count = 0;
        for(auto y : allWord)
            if(y == x)
                count ++;
        cout << x << " : " << count << endl;
    }
    */
    
    // vector<int> numbers = {1,23,54,1,2,3,5,4,43,22,11};
    // multiset<int> s;
    // for(auto x : numbers)
    //     s.insert(x);
    // for(auto x : numbers)
    //     cout << x << endl;

    // map<string, string> danhba;
    // danhba["cRE"] = 1;
    // danhba["bDS"] = 5;
    // danhba["eBC"] = 5;

    // for(auto info : danhba)
    // {
    //     cout << info.first << " " << info.second << "\n";
    // }
    // if (danhba.find("ABC") == danhba.end())
    //     cout << "Khong ton tai\n";
    // else
    //     cout << danhba["HDT"] << endl;
 
    // string text = "A stream is an abstraction that represents a device on which input and ouput operations are performed. A stream can basically be represented as a source or destination of characters of indefinite length.Streams are generally associated to a physical source or destination of characters, like a disk file, the keyboard, or the console, so the characters gotten or written to/from our abstraction called stream are physically input/output to the physical device. For example, file streams are C++ objects to manipulate and interact with files; Once a file stream is used to open a file, any input or output operation performed on that stream is physically reflected in the file.";
    // map<string, int> count;
    // stringstream ss(text);
    // string word;
    // while(ss >> word)
    // {
    //     if(count.find(word) == count.end())
    //     {
    //         count[word] = 1;
    //     }

    //     else
    //     {
    //         count[word] ++;
    //     }
    //     count[word] ++;
    // }
    // for(pair<string, int> info : count){
    //     cout << info.first << " - " << info.second << endl;
    // }

    // string text = "A stream is an abstraction that represents a device on which input and ouput operations are performed. A stream can basically be represented as a source or destination of characters of indefinite length.Streams are generally associated to a physical source or destination of characters, like a disk file, the keyboard, or the console, so the characters gotten or written to/from our abstraction called stream are physically input/output to the physical device. For example, file streams are C++ objects to manipulate and interact with files; Once a file stream is used to open a file, any input or output operation performed on that stream is physically reflected in the file.";
    // unordered_map<string, int> count;
    // stringstream ss(text);
    // string word;
    // while(ss >> word)
    // {
    //     if(count.find(word) == count.end())
    //     {
    //         count[word] = 1;
    //     }

    //     else
    //     {
    //         count[word] ++;
    //     }
    //     count[word] ++;
    // }

    // for(pair<string, int> info : count)
    // {
    //     cout << info.first << " - " << info.second << endl;
    // }

    vector<int> v = {1,5,2,67,78,23,1,89};

    // khởi tạo 1 set hoặc map S
    unordered_map<int,int> count;
    for(int x : v)
    {
        if(count.find(x) != count.end())
        {
            count[x] ++;
        }

        else
        {
            count[x] = 1;
        }
    }
    // Viết hàm kết luận có tồn tại 1 số bất kì trong S hay không, nếu có thì xuất hiện mấy lần trong v
    timx(count, 1);
    return 0;
}