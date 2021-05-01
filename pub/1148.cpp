/*抱着试一试的心态 (啊 然后再自己做一遍 （等会 
*/ 
#include<bits/stdc++.h>
using namespace std;
int main()
{	int a[6],m,i,j,k,l,s,flag=0;
	cin >> a[1]>> a[2]>> a[3]>> a[4]>> a[5]>>m;
	s=a[1];
	for(i=1; i<=4; i++)
	{	if(i==1)
			s+=a[2];
		if(i==2)
			s-=a[2];
		if(i==3)
			s*=a[2];
		if(i==4)
			s/=a[2];
		for(j=1; j<=4; j++)
		{	if(j==1)
				s+=a[3];
			if(j==2)
				s-=a[3];
			if(j==3)
				s*=a[3];
			if(j==4)
				s/=a[3];
			for(k=1; k<=4; k++)
			{	if(k==1)
					s+=a[4];
				if(k==2)
					s-=a[4];
				if(k==3)
					s*=a[4];
				if(k==4)
					s/=a[4];
				for(l=1; l<=4; l++)
				{	if(l==1)
						s+=a[5];
					if(l==2)
						s-=a[5];
					if(l==3)
						s*=a[5];
					if(l==4)
						s/=a[5];
					if(s==m)
					{	flag=1;
						s=0;
						cout<<a[1];
						if(i==1)
							cout<<"+";
						if(i==2)
							cout<<"-";
						if(i==3)
							cout<<"*";
						if(i==4)
							cout<<"/";
						cout<<a[2];
						if(j==1)
							cout<<"+";
						if(j==2)
							cout<<"-";
						if(j==3)
							cout<<"*";
						if(j==4)
							cout<<"/";
						cout<<a[3];
						if(k==1)
							cout<<"+";
						if(k==2)
							cout<<"-";
						if(k==3)
							cout<<"*";
						if(k==4)
							cout<<"/";
						cout<<a[4];
						if(l==1)
							cout<<"+";
						if(l==2)
							cout<<"-";
						if(l==3)
							cout<<"*";
						if(l==4)
							cout<<"/";
						cout<<a[5]<<"="<<m<<endl;
					}
				}
			}
		}
	}
	if(flag==0)
		cout<<"no answer!";
}