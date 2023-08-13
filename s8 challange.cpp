#include<iostream>

using namespace std;

int main(){
    
    int amount{};
    int dollar_rate{100};
    int quarter_rate{25};
    int dime_rate{10};
    int nickel_rate{5};
    int penny_rate{1};
    
    cout<<"Enter an amount in cents : ";
    cin>>amount;
    int dollar=(amount/dollar_rate);
    int balance=amount-(dollar*dollar_rate);
    cout<<dollar<<endl;
    
    int quarter=balance/quarter_rate;
    int balance_2=balance-(quarter*quarter_rate);
    cout<<quarter<<endl;
    
    int dime=balance_2/dime_rate;
    int balance_3=balance_2-(dime*dime_rate);
    cout<<dime<<endl;
    
    int nickel=balance_3/nickel_rate;
    int balnce_4=balance_3-(nickel*nickel_rate);
    cout<<nickel<<endl;
    
    cout<<balnce_4<<endl;
    
    
    
    
    
    
    
    
    
    
    
    
    return 0;
}