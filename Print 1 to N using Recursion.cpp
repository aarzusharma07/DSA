#include<iostream>
using namespace std;
int current=1;
void print(int n){	
if(current>n){
 return;	
 	
 }
cout<<(current);
current++;
print(n);
}
int main()
{
print(3);
return 0;
}



