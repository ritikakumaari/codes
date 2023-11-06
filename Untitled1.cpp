#include<bits/stdc++.h>

using namespace std;

int main() {
    int a, b;

    cin >> a >> b;

 
    int sum;
    int diff;
 
    a = a + b;
    b = a - b;
    a = a - b;
 
    sum = a + b;
    diff = a - b;
 
    cout << a << " " << b;
 
    return 0;
}


