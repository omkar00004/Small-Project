#include<iostream>

using namespace std;

int main(){

int small_num_of_rooms(0);
int large_num_of_rooms(0);
double small_price_per_room(25);
double large_price_per_room(35);
double cost(0);
double tax(0.06);
double total(0);
int expiry(30);//days


cout<<"frank carpet cleaning services\n";
cout<<"\nHow many small rooms do you like to get cleaned : ";
cin>>small_num_of_rooms;
cout<<"\nHow many large rooms do you like to get cleaned : ";
cin>>large_num_of_rooms;


cout<<"\nEstimate for carpet cleaning services \n";
cout<<"\n Small Numbers of Rooms: " <<small_num_of_rooms <<endl;
cout<<"\nLarge Numbers of Rooms: " <<large_num_of_rooms <<endl;

cout<<"\nPrice per Small Room : " <<small_price_per_room <<endl;
cout<<"\nPrice per Large Room: " <<large_price_per_room <<endl;

cout<<"\nCost : "<<((small_price_per_room*small_num_of_rooms)+(large_price_per_room*large_num_of_rooms))<<endl;
 
 cout<<"\nTax : "<<(tax*((small_price_per_room*small_num_of_rooms)+(large_price_per_room*large_num_of_rooms)))<<endl;
   cout<<"====================================================================\n";
   cout<<"\nTotal Estimate : " << ((small_price_per_room*small_num_of_rooms)+(large_price_per_room*large_num_of_rooms))+(tax*((small_price_per_room*small_num_of_rooms)+(large_price_per_room*large_num_of_rooms)))<<endl;
   cout<<"\nThis estimate is valid for : "<<expiry <<endl;
   
 
 






}