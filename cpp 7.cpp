#include<bits/stdc++.h>

using namespace std;

int main(){
	
	int x,y,z;
		cin >> x >> y >> z;
	
	if( x>= y && x>= z){
		cout << "is largest number " << x;
	}
		else if( y>= x && y>= z){
			cout << " is largest number" << y;
		}
			else{
				cout << " is largest number" << z;
			}
		
	
}
