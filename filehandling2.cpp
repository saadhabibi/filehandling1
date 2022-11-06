#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    int cles;
    char name[20];
    char fname[20];
    char add[30];
    ofstream fo;
    fo.open("stude.txt" ,ios::app);
    char ans = 'y';
    while(ans =='y' || ans =='y')
    {
    cout<<"enter student name: ";
    cin>>name;
    cout<<"enter class: ";
    cin>>cles;
    cout<<"enter father name: ";
    cin>>fname;
    cout<<"enter the address: ";
    cin>>add;
    fo<<name<<"\n"<<cles<<"\n"<<fname<<"\n"<<add<<"\n";
   cout<<"want to enter more detail n/y ";
    cin>>ans;
    }
     fo.close();
    return 0; 
   

}