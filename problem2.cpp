//Find sum/difference/product/division of two/three numbers
#include<iostream>
using namespace std;
int main(){
	char a;
	cout<<"Press - if you want to find the difference of two numbers\nPress + if you want to find the sum of two numbers\nPress X if you want to find the product of two numbers\nPress % if you want to find the division of two numbers"<<endl;
	cin>>a;
	switch (a)
	{
		case '-':
			{
			cout<<"Enter two numbers of which you want to find the difference"<<endl;
			int a,b,difference;
			cin>>a>>b;
			difference= a-b;
			cout<<difference<<endl;			
			}
			break;
			
		case '+':
			{
    		cout<<"Enter two numbers of which you want to find the sum"<<endl;
			int a,b,sum;
			cin>>a>>b;
			sum= a+b;
			cout<<sum<<endl;
			}
			break;
		case 'X':
			{
			cout<<"Enter two numbers of which you want to find the product"<<endl;
				float a,b,product;
				cin>>a>>b;
				product= a*b;
				cout<<product<<endl;
	}
			break;
		case '%':
			{
			cout<<"Enter two numbers of which you want to find the division"<<endl;
			float a,b,division;
			cin>>a>>b;
			division= a/b;
			cout<<division<<endl;
			}
			break;
			default:
			cout<<"invalid input"<<endl;	
	}

	return 0;
	
	
}
