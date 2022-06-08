// DE 10 - BAI 1
#include <bits/stdc++.h>
using namespace std;

// Ham dem tan so xuat hien cua cac phan tu so nguyen trong mot vector
void count_frequency(vector<int> &vec)
{
    vector<bool> check(vec.size(), false);
    {
        for (int i = 0; i < vec.size(); i++)
        {
            if (check[i] == true)
                continue;

            int count = 1;
            for (int j = i + 1; j < vec.size(); j++)
            {
                if (vec[i] == vec[j])
                {
                    check[j] = true;
                    count++;
                }
            }
            cout << vec[i] << " " << count << endl;
        }
    }
}

int main(int argc, char *argv[])
{
    vector<int> vec = {1, 2, 2, 3, 1, 4, 4, 5};

    count_frequency(vec);

    return 0;
}
