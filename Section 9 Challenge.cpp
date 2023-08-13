/*program should Display a menu options to the users as follows*/
#include<iostream>
#include<vector>

using namespace std;
int main(){
    char data{};
    vector<int> data_1{};
        int number_add{};
    do{
        cout<<" P - print a Number  "<<endl;
        cout<<" A - Add a Number  "<<endl;
        cout<<" M - Display the mean of Numbers  "<<endl;
        cout<<" S - Display the smallest Number  "<<endl;
        cout<<" L - Display thr largest Number  "<<endl;
        
        cout<<"Enter your choice : ";
        cin>>data;
    switch(data){
        case 'p':
        case 'P':
        if(data_1.size()==0){
            cout<<"[ ]"<<endl;
        }else{
        cout<<"size : "<<data_1.size()<<endl;
        for(auto val:data_1){
            cout<<val<<endl;
        }
        }
        break;
        case 'a':
        case 'A':
        do{
        cout<<"What number to add : ";
        cin>>number_add;
        data_1.push_back(number_add);
        cout<<number_add<<" added "<<endl;
        }while(number_add=0);
        break;
        
        case 'm':
        case 'M':
        if(data_1.size()==0)
        cout<<"Unable to calculate Mean - No data"<<endl;
        else{
            int total{};
            for(auto num: data_1)
            total+=num;
            cout<<"The mean is : "<<static_cast<double>(total)/data_1.size()<<endl;
        }
        
        case 's' :
        case 'S' :
        if(data_1.size()==0)
        cout<<"Unable to determine the smallest - List is empty"<<endl;
        else{
            int smallest = data_1.at(0);
            for(auto num :data_1)
                if(num<smallest)
                smallest=num;
                cout<<"The smallest Number is : "<<smallest<<endl;
        }
        break;
        case 'l' : 
        case 'L':
        if(data_1.size()==0)
        cout<<"Unable to determine the Largest - List is empty"<<endl;
        else{
            int largest = data_1.at(0);
            for(auto num :data_1)
                if(num>largest)
                largest=num;
                cout<<"The largest number is : "<<largest<<endl;
        }
       break;

        case 'q':
        case 'Q':
        cout<<"Quit"<<endl;
        break;
        
        default:
        cout<<"Unknown selection,please try again"<<endl;
        
    }} while(data!='q' && data!='Q');
    return 0;
}