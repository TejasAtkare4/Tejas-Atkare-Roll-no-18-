#include<iostream>
#include<string>
using namespace std;

class patient{
    public:
        string date , name;
        int totalbill;
};

int main(){
    patient a ;
    cout<<"Enter name : ",cin>>a.name;
    cout<<"Enter date : ",cin>>a.date;
    cout<<"Total bill : ",cin>>a.totalbill;
    cout<<a.name<<endl<<a.date<<endl<<a.totalbill;
}