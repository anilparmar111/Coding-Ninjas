
#include <iostream>
using namespace std;

long long int mrgs(long long *arr, int lft, int md, int rt)
{
    long long int tmp[rt - lft + 1];
    int i = lft, j = md + 1, k = 0;
    long long int cnt = 0;
    while (i <= md && j <= rt)
    {
        if (arr[i] <= arr[j])
        {
            tmp[k++] = arr[i];
            i++;
        }
        else
        {
            tmp[k++] = arr[j];
            j++;
            cnt += md - i + 1;
        }
    }
    while (i <= md)
    {
        tmp[k++] = arr[i++];
    }
    while (j <= rt)
    {
        tmp[k++] = arr[j++];
    }
    for (i = 0; i < k; i++)
    {
        arr[lft++] = tmp[i];
    }
    return cnt;
}

long long merge(long long *arr, int left, int right)
{
    if (left < right)
    {
        int mid = (left + right) / 2;
        long long int ls = merge(arr, left, mid);
        long long int rs = merge(arr, mid + 1, right);
        long long int cs = mrgs(arr, left, mid, right);
        return ls + rs + cs;
    }
    else
    {
        return 0;
    }
}

long long getInversions(long long *arr, int n)
{
    //Write your code here
    long long int ans = merge(arr, 0, n - 1);
    return ans;
}

int main()
{
    int n;
    cin >> n;

    long long *arr = new long long[n];

    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i];
    }

    cout << getInversions(arr, n);

    delete arr;
}