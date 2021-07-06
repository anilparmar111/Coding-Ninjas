//https://www.codechef.com/LTIME64A/problems/CHEFRES

#include<bits/stdc++.h>
using namespace std;


int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n,m;
        cin >> n >> m;
        int start,end;
        vector<pair<int,int>> vect;
        while(n--)
        {
            cin >> start >> end;
            vect.push_back(make_pair(start,end));
        }
        int tmp;
        sort(vect.begin(),vect.end());
        while(m--)
        {
            cin >> tmp;
            int lb=lower_bound(vect.begin(),vect.end(),make_pair(tmp,0))-vect.begin();
            if(lb==0)
            {
                cout << vect[0].first-tmp << endl;
                continue;
            }
            int ans=-1;
            if(tmp<vect[lb-1].second)
            {
                ans=0;
            }
            else if(lb<vect.size())
            {
                ans= vect[lb].first-tmp;
            }
            cout << ans << endl;
        }
    }
}