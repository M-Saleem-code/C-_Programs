#include <iostream>
using namespace std;
int main ()
{
	int a,b,c;
	cout<<"		Abdul Sami K20ES030"<<endl;
	cout<<"Enter the  prices " <<endl;
	cout<<"value of a=";
	cin>>a;
	cout<<"value of b=";
	cin>>b;
	cout<<"value of c=";
	cin>>c;
	if(a>b){
		cout<<"Second Price is Cheaper "<<endl;
	}
	else 
	if(b>c){
		cout<<"Third Price is Cheaper "<<endl;
	}
	else
	{
		cout <<"First price is Cheaper "<<endl;
	}
	return  0;
}
