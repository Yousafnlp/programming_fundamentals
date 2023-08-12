//Find square/cube of a number
#include<iostream>
using namespace std;
int main(){
	char b;
	cout<<"Press 2 if you want to find square of a number\nPress 3 if you want to find cube of a number"<<endl;
	cin>>b;
	switch (b)
	{
		case '2':
			{
					cout<<"Enter the number of which you want to find square"<<endl;
					int a;
					cin>>a;
					a = a*a;
					cout<<"The square of the number is = "<<a<<endl;
			}
			break;
		case '3':
			{
					cout<<"Enter the number of which you want to find qube"<<endl;
					int a;
					cin>>a;
					a = a*a*a;
					cout<<"The cube of the number is = "<<a<<endl;
			}
			break;
		
		default: {
		cout<<"invalid input"<<endl;
		break;
		}
	}
	
	return 0;
}
