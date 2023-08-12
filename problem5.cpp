//Find acceleration from given velocity and time
#include<iostream>
using namespace std;
int main(){

float acceleration, time, velocity;
cout<<"please enter velocity and time\n";
cin>>velocity>>time;
acceleration=velocity/time;
cout<<acceleration<<endl;
return 0;
}
