//Calculate sales tax ( tax = amount * tax percentage / 100 )
#include<iostream>
using namespace std;
int main(){
int tax,amount,taxP;
cout<<"enter amouunt"<<endl;
cin>>amount;
cout<<"enter tax %"<<endl;
cin>>taxP;
tax=(amount*taxP)/100;
cout<<"tax:"<<tax<<endl;
return 0;
	
}
