//.Find the value of F (centripetal force) for given values of mass ‘m’, velocity ‘v’ and radius ‘r’ (where F = mv2 / r)
#include<iostream>
using namespace std;
int main(){
	float f,m,v,r;
	cout<<"enter the value of m"<<endl;
	cin>>m;
	cout<<"enter the value of v"<<endl;
	cin>>v;
	cout<<"enter the value of r"<<endl;
	cin>>r;
	f = (m*v*v )/ r;
	cout<<f<<endl;
	
	return 0;
	
}
