#include <iostream>
using namespace std;
int main ()
{
	int c;
	cout<<"		Abdul Sami  K20ES030"<<endl;
	cout<<"Enter The Maks of student "<<endl;
	cin>>c;
	if ( c>=90){
		cout<<"Grade is 'A'";
	}
	else if ( c>=80){
		cout<<"Grade is 'B'";
	}
	else if ( c>=70){
		cout<<"Grade is 'C'";
	}
	else if(c<70){
	cout<<"'fail'";
	}
}
