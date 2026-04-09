#include<iostream>
using namespace std;
int current=1,sum=0;

void sums(int n){	
if(current>n){
 return;	
 	
 }
sum =current + sum;
current++;
sums(n);
}
int main()
{
sums(3);
cout<<sum;
return 0;
}



