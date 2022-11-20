#include<iostream>
using namespace std;
int main()
{
    try
    {
        for(int i=0;i<6;i++)
        {
            if(i==2)
            {
                throw(i);
            }
            cout<<i<<" ";
        }
    }
    catch(int i)
    {
        cout<<"Catch "<<endl;
    }

    
// condition 2


    for(int j=0;j<10;j++)
    {
        try
        {
            
            if(j==2)
            {
                
                throw(j);
            }
             cout<<j<<" ";
            
        }
        catch(int j)
        {
            cout<<"Catch j"<<endl;
        }
        
        
    }
    
    return 0;
}





/*

    try{
for(){

}catch(){
}

for(){
try{
}catch()
{
}
}
*/