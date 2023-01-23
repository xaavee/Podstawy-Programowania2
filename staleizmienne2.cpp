#include <iostream>
using namespace std; 
/*tablice jako argumenty funkcji*/
void pisz(int a[]) {
	a[0]++;
	cout<<"a[0] w funkcji = "<<a[0]<<endl;
}
int main () {
int a[5] = {4,5,6,7,8};
pisz(a);
cout<<a[0]<<endl;
cout<<*(a+4);
}
