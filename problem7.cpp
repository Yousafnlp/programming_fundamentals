//Calculate marks percentage ( marks percentage = marks obtained / total * 100 

#include<iostream>
using namespace std;
int main(){
float marks_percentage, marks_obtained, total;
cout<<"enter the obtained marks and total marks"<<endl;
cin>>marks_obtained>>total;
marks_percentage = (marks_obtained / total)*100;
cout<<marks_percentage<<endl;
return 0;
}
