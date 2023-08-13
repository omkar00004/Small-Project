#include<iostream>
#include<vector>

using namespace std;

int main(){
     
    vector<int> vector1{};
    vector<int> vector2{};
    
    vector<int>new_vec1{10,20};
    
    vector1.push_back(new_vec1.at(0));
    vector1.push_back(new_vec1.at(1));
    
    cout<<vector1.at(0)<<endl;
    cout<<vector1.at(1)<<endl;
     
    cout<<"The size of vector1 is : "<<vector1.size()<<endl;
    
    vector<int>new_vec2{100,200};
    
    vector2.push_back(new_vec2.at(0));
    vector2.push_back(new_vec2.at(1));
    
    cout<<"The size of vector2 is : "<<vector2.size()<<endl;
    
    vector<vector<int>> vector_2d;
    vector_2d.push_back(vector1);
    vector_2d.push_back(vector2);
    
    cout<<vector_2d[0][0]<<endl;
    cout<<vector_2d[0][1] <<endl;
    cout<<vector_2d[1][0] <<endl;
    cout<<vector_2d[1][1] <<endl;
    
    vector1.at(0)=1000;
    cout<<"after change : "<<endl;
        cout<<vector_2d[0][0]<<endl;
    cout<<vector_2d[0][1] <<endl;
    cout<<vector_2d[1][0] <<endl;
    cout<<vector_2d[1][1] <<endl;
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    return 0;
}