#include<iostream>
using namespace std;
int count=0;
void print(string name,int n){

    if(count==n){
        return;
    }
    cout<<name;
    count++;
    print(name ,n);
    
}
int main()
{
    print("ashish",3);
   
    return 0;
}



