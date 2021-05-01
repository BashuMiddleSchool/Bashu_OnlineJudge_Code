/*本题算法分析
	总面积一定
	只需要浪费最小
	6*6 不会浪费
	5*5+1*1 别无选择
	4*4 先尝试2*2，如果用完则用1*1
*/ 
#include<iostream>
using namespace std;
int main() {
	int a,b,c,d,e,f;
	cin>>a>>b>>c>>d>>e>>f;//输入盒子数量 
	int empty1,empty2,m;
	int emp2[3]= {5,3,1};//当3*3的物品未装满1箱时,2*2空位的剩余
	m=d+e+f+c/4;
	if(c%4) m++;
	empty2=5*d+emp2[c%4-1];//先 
	if(b>empty2)m+=(b-empty2+8)/9;
	empty1=36*m-36*f-25*e-16*d-9*c-4*b;//剩余
	if(a>empty1)m+=(a-empty1+35)/36;
	cout<<m;
}