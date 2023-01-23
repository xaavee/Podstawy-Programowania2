/*#include<iostream>
using namespace std; 
int maks(int a, int b)
{
	return a+b;
}
double maks(double a,double b, double c)
{
	return a+b+c;
}
int maks(int a,int b,int c)
{
	return a+b+c;
}
	main()
	{
	cout<<maks(8,11)<<endl;
	cout<<maks(7,9,11)<<endl;
	cout<<maks(8,7,4)<<endl;
}
*/
/*#include<iostream>
using namespace std;

void zmienna(int &a,int &b)
{
	int pom;
}


main()
{
	int a=8;
	int b=10;
	cout<<"wartosc a="<<a<<endl;
	cout<<"wartosc b="<<b<<endl;
		cout<<"wartosc a="<<a<<endl;
	cout<<"wartosc b="<<b<<endl;
}
*/









/*#include<iostream>
using namespace std;
main()
{
	int a=8;
	int &b=a;
	
	cout<<"wartosc a="<<a<<endl;
	cout<<"adres a="<<&a<<endl;
	cout<<"wartosc b="<<b<<endl;
	cout<<"wartosc b="<<&b<<endl;
	b=30;
	cout<<"wartosc a="<<a<<endl;
	cout<<"adres a="<<&a<<endl;
	cout<<"wartosc b="<<b<<endl;
	cout<<"wartosc b="<<&b<<endl;
} 
*/






/*#include<iostream>
using namespace std;

void test1(int x)
{
x+=100;
cout<<"wartosc w funkcji="<<x<<endl;
}
void test2(int &x)
{
x+=200;
cout<<"wartosc w funkcji="<<x<<endl;
}
main()
{
	int a;
	cout<<"a= ";
	cin>>a;
	cout<<"wartosc a="<<a<<endl;
	cout<<"adres a="<<&a<<endl;
	test1(a);
	cout<<"a="<<a<<endl;
	test2(a);
	cout<<"a="<<a<<endl;	
}*/
/*#include<iostream>
using namespace std;

int dodaj(int a,int b)
{
	return a+b;
}
int dodaj(int a)
{
	return a;
}
main()
{
cout<<dodaj(4,5)<<endl;
}*/







#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	
	double liczba;
	cout<<"podaj liczbe=";
	cin>>liczba;
	double pierwiastek =sqrt(liczba);
	cout<<"pierwiastek kwadratowy"<<pierwiastek<<endl;
	int potega;
	cout<<"potega =";
	cin>>potega;
	double wynik =pow(liczba,potega);
	cout<<"liczba="<<liczba<<"do potegi"<<potega<<"= "<<wynik;
	cout<<"podaj liczbe=";
	cin>>liczba;
	cout<<abs(liczba);
}


