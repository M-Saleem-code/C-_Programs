#include <iostream>
using namespace std;
int main ()
{
	int z;
	cout<<"		Abdul Sami  K20ES030"<<endl;
	cout<<"1-Coke 2-lemon juice 3-Red grape 4-Milk Shake 5- Sprite"<<endl;
	cout<<"Select your Favorite beverages from menu =";
	cin>>z;
	switch(z)	
	{	case 1:
	cout<<"Price of Coke is "<<50<<" only"; break;	
	case 2:
	cout<<"Price of Lemon Juice is "<<40<<"	only";  break;	
	case 3:
	cout<<"Price of Red Grapes is "<<80<<" only"; break;	
	case 4:
	cout<<"Price of Milk Shake is "<<60<<" only";  break;	
	case 5:
	cout<<"Price of Sprite is "<<70<<" only";	 break;
	default:
	cout << "Error! wait......"<<endl;
	cout<<"Your Money will Back Soon.";	break;
	}
		
}
