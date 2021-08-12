#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> weights(n);
    for(int i=0;i<n;i++)
    {
        cin >> weights[i];
    }
    priority_queue<int> pq;
    int sz = weights.size();
    for(int i=0;i<sz;i++)
    {
        pq.push(weights[i]);
    }
    while(pq.size()>1)
    {
        int t1=pq.top();
        pq.pop();
        int t2=pq.top();
        pq.pop();
        if(t1!=t2)
        {
            pq.push(abs(t1-t2));
        }
    }
    if(pq.size()==0)
    {
        cout << 0 << endl;
        return 0;
    }
    cout << pq.top() << endl;
    return pq.top();
}