#include <iostream>
using namespace std;
int main() {
	string txt;
	cout<<"Wpisz wyraz"<<endl;
	getline(cin, txt);
	char ch = txt[0];

	int len = txt.size();
//	cout<<len;
	if(len%2 == 1) {
		
		if(ch == 80)
		 {
			cout<<"Pierwsza litera to P";
		} else {
			cout<<"Pierwsza litera to nie P";
		}
	} else {
		cout<<"nie";
	}
	
}
