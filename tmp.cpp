#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,x;
    cin >> n >> x;
    vector<int> vect(n);
    unordered_map<int,int> ump;
    int ans=0;
    for(int i=0;i<n;i++)
    {
        cin >> vect[i];
        vect[i]=vect[i]%x;
        ump[vect[i]]+=1;
    }
}