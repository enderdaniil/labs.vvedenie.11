#include <iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"Vvedite A and B"<<endl;
    cin>>a>>b;
    while (a!=b)
    {
        if (a>b)
        {
            a=a%b;
        }
        else
        {
            b=b%a;
        }
    }
    cout<<"НОД="<<a<<endl;
   return 0;
}
