/* specyfikacja
Dane wej�ciowe:
Liczby ca�kowite a i b jako d�ugo�ci bok�w prostok�ta
Wynik: pole prostok�ta o bokach a i b
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
