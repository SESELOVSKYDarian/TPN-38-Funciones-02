#include <iostream>
#include <string>
using namespace std;
bool EsMultiploDe17 (int a);
int main ()
{
	int n;
	string msg = "NO ES MULTIPLO";
	cout<<"Ingrese un numero: ";
	cin>>n;
	if (EsMultiploDe17(n))
	{
		msg="ES MULTIPLO";
	}
	cout<<msg<<endl;
	return 0;	
}
bool EsMultiploDe17 (int a)
{
	bool flag=false;
	if (a%17==0)
	{
		flag=true;
	}
	return flag;
}