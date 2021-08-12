
#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

string dial(int key)
{
    unordered_map<int, string> m;
    m[0] = "";
    m[1] = "";
    m[2] = "abc";
    m[3] = "def";
    m[4] = "ghi";
    m[5] = "jkl";
    m[6] = "mno";
    m[7] = "pqrs";
    m[8] = "tuv";
    m[9] = "wxyz";
    return m[key];
}
void print(int num, string out)
{

    if (num == 0)
    {
        cout << out << endl;
        return;
    }
    string pd = dial(num % 10);
    for (int i = 0; i < pd.size(); i++)
    {
        print(num / 10, pd[i] + out);
    }
}

void printKeypad(int num)
{

    print(num, "");
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string num;
        cin >> num;
        string tmp = "";
        bool f = false;
        for (int i = 0; i < num.size(); i++)
        {
            if (num[i] != '0' && num[i] != '1')
            {
                tmp += num[i];
            }

            if (i > 0 && num[i] == '1' && num[i - 1] != '1' || num[i] == '0')
            {
                f = true;
                break;
            }
        }
        if (tmp.size() == 0 || f)
        {
            continue;
        }
        int t2 = stoi(tmp);
        printKeypad(t2);
    }

    return 0;
}