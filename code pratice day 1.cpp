/*#include<iostream>
#include<math.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	
	int i = 0, ans = 0;
	while(n != 0){
		int digit = n %10;
		
		if( digit == 1) {
			ans = ans +pow(2, 1);
		}
		n = n/10;
		i++;
	}
	cout << ans << endl;
}*/

#include<iostream>
using namespace std;
/*
int main(){
	int num = 2;
	cout << endl;
	switch (num){
		case 1: cout << "First" << endl;
		        break;
		
		case 2: cout << "Second " << endl;
		        break;
		default: cout << "It is default case" << endl;       
	}
	
	
	
}*/

int main(){
	char ch = '1';
	cout << endl;
	switch (ch){
		case 1: cout << "First" << endl;
		        break;
		
		case '1': cout << "character second" << endl;
		        break;
		default: cout << "It is default case" << endl;       
	}
	
	
	
}


