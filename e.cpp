#include <iostream>
using namespace std;
//napisac funkcje ktora przyjmuje jako parametry 2 liczby calkowite i zwraca wieksza roznice liczb np. 3 -1 to 4 lub -4 czyli zwroci 4

int roznica(int a, int b) 
{

	
	if(a-b > b-a) {
		cout<<a-b;
	} else {
		cout<<b-a;
	}
}
int main() {
	roznica(3,4);
}
