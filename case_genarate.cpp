#include <iostream>
#include <algorithm>
#include <random>
#include <bits/stdc++.h>
using namespace std;

mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());
int my_rand(int l, int r)
{
    return uniform_int_distribution<int>(l, r)(rng);
}
int vis[233];

int main()
{
    freopen("input.txt", "w+", stdout);
    const int fill_size = 10;
    const int min = 1;   // min random number
    const int max = 100; // max random number

    int n = my_rand(1, 100);
    cout << n << endl;
}