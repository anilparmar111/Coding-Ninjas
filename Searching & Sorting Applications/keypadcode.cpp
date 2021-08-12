#include<bits/stdc++.h>
using namespace std;

vector<string> ans;
unordered_map<char,string> dict;

void fun(string tmp,string tr)
{
    // cout << tr << endl;
    if(tr=="")
    {
        ans.push_back(tmp);
    }
    else
    {
        string t2=dict[tr[0]];
        if(t2.size()==0)
        {
            fun(tmp,tr.substr(1));
        }
        else
        {
            for(int i=0;i<t2.size();i++)
            {
                fun(tmp+t2[i],tr.substr(1));
            }
        }
    }
}

int main()
{
    int t;
    cin >> t;
    dict['0']="";
    dict['1']="";
    dict['2']="abc";
    dict['3']="def";
    dict['4']="ghi";
    dict['5']="jkl";
    dict['6']="mno";
    dict['7']="pqrs";
    dict['8']="tuv";
    dict['9']="wxyz";
    while(t--)
    {
        ans.clear();
    	string str;
    	cin >> str;
        fun("",str);
        for(int i=0;i<ans.size();i++)
        {
            cout << ans[i] << endl;
        }
    }
}