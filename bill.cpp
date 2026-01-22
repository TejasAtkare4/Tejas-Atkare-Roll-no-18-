#include<iostream>
#include<string>
using namespace std;

struct  bill{
    int billno ;
    string customerName , particulars ;
    float amount , GST , FinalBill ;
};

int main(){
    bill b1 ;
    cout<<"\n\n\n    BILL \n\n\n " ;
    cout<<"Enter bill no = " , cin>>b1.billno ;
    cout<<"Enter customer name = " , cin>>b1.customerName ;
    cout<<"Particulars = ", cin>>b1.particulars ;
    cout<<"Enter amount = ", cin>>b1.amount ;
    cout<<"Enter GST = " , cin>>b1.GST;
    b1.FinalBill = b1.amount + b1.GST*b1.amount/100 ;
    cout<<"Final Bill = "<<b1.FinalBill ;

}