#include <iostream>
using namespace std;
/* Specyfikacja:
Dane wej�ciowe: 
Wprowadzone z klawiatury liczby rzeczywiste a i b
Wynik:
Wy�wietlona wi�ksza z liczb a i b
*/
main() {
cout<<"--------------------------------";
	int a,b;
	cout<<"\nPodaj liczbe a :";
	cin>>a;
	cout<<"\nPodaj liczbe b :";
	cin>>b;
	if( a > b ) {
		cout<<"\nLiczba \""<<a<<"\" jest wieksza od \""<<b<<"\"";
	} if (a < b) {
		cout<<"\nLiczba \""<<b<<"\" jest wieksza od \""<<a<<"\"";
	} if (a == b) {
		cout<<"\nLiczba \""<<a<<"\" jest rowna \""<<b<<"\"";
	}
}
