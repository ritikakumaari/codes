#include<bits/stdc++.h>

using namespace std;

int main() 
{
	int i, n , sum =0;
	float avg;
	cout << " input 10 number\n ";
	for ( i = 1; i<= 10; i++){
		cin >> i;
		sum += i;
	}
	avg = sum/10.0;
	cout << " sum "  << sum;
	cout << "average"   << avg;
}
