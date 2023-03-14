//Write all the pairs of Additive and Multiplicative Inverse over Z = 10 for (0-9) a + b = 0 mod 10

#include <iostream>

using namespace std;

int getRemainder(int num, int divisor)
{
    return (num - divisor * (num / divisor));
}
 
 
bool add(int x,int y)
{
  int result;
  int sum = x + y;
  result = getRemainder(sum,10);
  if (result==0) {
   return true;
   }
  else {
    return false;
  }
}

bool mul(int x,int y)
{
  int result;
  int mul = x * y;
  result = getRemainder(mul,10);
  if (result==1) {
   return true;
   }
  else {
    return false;
  }
}

int main()
{    cout<<"Valid Additive pairs are \n";
    for(int a = 0; a < (10/2) +1; a++){
        for(int b =0; b < 10; b++){
             if(add(a,b)){
                cout<<"( "<<a<<" , "<<b<<" )"<<endl;
             }}
       
        }
     cout<<"Valid Multiplicative pairs are \n";
     for(int a = 0; a < (10/2) +1; a++){
        for(int b =0; b < 10; b++){
             if(mul(a,b)){
                 
                 cout<<"( "<<a<<" , "<<b<<" )"<<endl;
             }}
       
        }
    }
