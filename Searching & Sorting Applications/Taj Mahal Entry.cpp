#include <bits/stdc++.h>

using namespace std;

int go(vector<int> window, int min_index)
{
    int n = window.size();
    int pos = window.at(min_index) % n;
    int min_value = window.at(min_index);
    //cout << min_index << '\n';
    //cout << pos << '\n';

    if (pos == min_index)
    {
        return min_index;
    }

    int cycles = min_value / n;

    for (int i = pos; i < n + pos; ++i)
    {
        window.at(i % n) = window.at(i % n) - abs(i - pos) - cycles * n - min_value;
        if (window.at(i % n) <= 0)
        {
            return i % n;
        }
    }

    return 0;
}

int main(int argc, char **argv)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    //int m = n;
    int min_index = 0;
    int min_value = INT_MAX;
    int h = 0;

    std::vector<int> window;
    while (n--)
    {
        int a;
        cin >> a;
        window.push_back(a);
        if (window.at(min_index) > window.at(h))
        {
            min_index = h;
            min_value = window.at(min_index);
        }
        h++;
    }

    cout << go(window, min_index) + 1 << '\n';

    return 0;
}