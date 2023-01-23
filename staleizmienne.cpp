#include <iostream>
using namespace std; 
//stale i zmienne lokalne oraz globalne
const int x = 10; //stala zadeklarowana globalnie
int main () {
	int x = 12;
	cout<<x<<endl;
	int i=0;
	for(i=0; i<=10; i++) {
		cout<<i<<" - "<<"XII LO"<<endl;
	}
	cout<<i<<endl;
}
