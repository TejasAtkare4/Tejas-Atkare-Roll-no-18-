#include<iostream>
#include<string>
using namespace std ;
class car{
    public :
    string model , brand  ;
    float mileage ;
};

int main(){
    car c1;
    cout<<"Enter car brand = ",cin>>c1.brand ;
    cout<<"Enter car model = ",cin>>c1.model;
    cout<<"Enter mileage = ",cin>>c1.mileage ;
}