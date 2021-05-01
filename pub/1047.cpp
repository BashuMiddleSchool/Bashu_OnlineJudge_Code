
#include <iostream>
using namespace std;
int main()
{
    int k,n;
    double s=0;
    cin>>k;
    for(n=1;;n++)
    {
        s+=1.0/n;
        if(s>k)
        {
            cout<<n-1<<endl;
            break;
        }
    }
    return 0;
} 