#include<iostream>
#include<algorithm>
using namespace std;
struct cj
{
	int number;
	int chinese;
	int math;
	int english;
	int total;
};
cj student[301];
bool compare (cj x,cj y)
{
	
	if(x.total!=y.total)return x.total>y.total;
	if(x.total==y.total&&x.chinese!=y.chinese)return x.chinese>y.chinese;
	else return x.number<y.number;
}
int main()
{
	int n;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		student[i].number=i;
		cin>>student[i].chinese>>student[i].math>>student[i].english;
		student[i].total=student[i].chinese+student[i].math+student[i].english;
	}
	sort(student+1,student+n+1,compare);
	for(int i=1;i<=5;i++)
	cout<<student[i].number<<" "<<student[i].total<<endl;
	return 0;
}