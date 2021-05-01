#include<bits/stdc++.h>
using namespace std;

int main()
{
	int a,b,y1,y2,m,d,ans=0;
    cin>>a>>b;
    y1=a/10000;y2=b/10000;
    for(int i=y1;i<=y2;i++)
    {
        m=(i%10)*10+(i/10)%10;
        d=(i/100)%10*10+i/1000;
        if(m==2)                
        {
            if(i%4==0&&d<=29)
            ans++;
            else if(d<=28)
            ans++;
        }
        else if((m==1||m==3||m==5||m==7||m==8||m==10||m==12)&&d<=31)
        ans++;
        else if((m==4||m==6||m==9||m==11)&&d<=30)
        ans++;
    }
    cout<<ans<<endl;
    return 0;
}