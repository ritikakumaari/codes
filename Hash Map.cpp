#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

int main(){
	int T;
	cin >> T;
	
	while(T--){
		int Q;
		cin >> Q;
		
		vector<char> arrayList;
		unordered_map<char, int> frequency;
		
		while (Q--) {
			char operation, element;
			cin >> operation >> element;
			
			if (operation == 'i') {
				arrayList.push_back(element);
				
				frequency[element]++;	
			} else if (operation == 'f') {
				cout << frequency[element] << endl;
			}
			
		}
	}
	return 0;
}
