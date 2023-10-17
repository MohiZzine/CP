#include <bits/stdc++.h>

using namespace std;

string show_binary(int u)
{
    string binary = "";
    while(u > 1)
    {
        if((u % 2) == 0)
        {
            binary += "0";
        }
        else
        {
            binary += "1";
        }
        u = u >> 1;
    }
    binary += "1";
    reverse(binary.begin(), binary.end());
    return binary;
}

int main() {
    int n;
    while(scanf("%d", &n), n) {
        cout << "The parity of " << show_binary(n) << " is " << __builtin_popcount(n) << " (mod 2).\n";
    }
    return 0;
}