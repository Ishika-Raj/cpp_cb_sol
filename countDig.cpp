#include <iostream>
using namespace std;

int main() {
    int dig,num,rem,cont=0;
    cin>>num;
    cin>>dig;
    while(num>0)
    {
        rem=num%10;
       if(rem==dig){

        cont+=1;
       }
       num=num/10;

    }

 cout<<cont;
    return 0;
}

