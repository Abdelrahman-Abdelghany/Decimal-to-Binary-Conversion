#include <bits/stdc++.h>

using namespace std;

long long conv_bin(int n) {
    long long bin = 0;
    int rem, i = 1;

    while (n!=0) {
        rem = n % 2;
        n /= 2;
        bin += rem * i;
        i *= 10;
    }
    return bin;
}

int main() {
    long long n;
    cout<<"Enter a positive decimal number: ";
    cin>>n;
    cout<<"decimal number represented by : "<<conv_bin(n)<<" in binary";
    return 0;
}
