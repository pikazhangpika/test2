#include<iostream>
using namespace std;
int main()
{
	float a,b,result;
	char c;
	cout<<"������һ����������ʽ��";
	cin>>a>>c>>b; 
	switch(c)
	{
		case'+':result=a+b;break;
		case'-':result=a-b;break;
		case'*':result=a*b;break;
		case'/':
		if(b==0)
		cout<<"��ʽ��ĸΪ��";
		result=a/b;break;
		default :cout<<"����������ʽ";break; 
	 }
	 cout<<"���Ϊ��"<<result<<endl;
	 return 0;
}