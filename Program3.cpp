/* specyfikacja
Dane wejœciowe:
Liczby ca³kowite a i b jako d³ugoœci boków prostok¹ta
Wynik: pole prostok¹ta o bokach a i b
*/

#include <iostream>

using namespace std;
main()
{
	cout<<"Program obliczajacy pole prostokata\n\n";
	int a;
	int b;
	int pole;
	cout<<"Wprowadz a: ";
	cin>>a;
	cout<<"\nWprowadz b: ";
	cin>>b;
	pole = a * b;
	cout<<"\nPole prostokata: \""<<pole<<"\"";
}
