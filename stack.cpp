#include <iostream>
#include <cstdio>
#include <cmath>
#include <cstring>
#include <algorithm>
#include <stack>
#include <queue>
#include <windows.h>
using namespace std;
stack<double>q;
double n;
string s;
int main()
{
	cout<<"栈操作指示器 1.0"<<endl;
	cout<<endl;
    cout<<"输入help获取帮助"<<endl;
    cout<<endl;
    while(1)
	{
		cout<<"Stack->";
		cin>>s;
		if(s=="cls")
		{
			system("cls");
			continue;
		}
		if(s=="help")
		{
			cout<<endl;
			cout<<"若需获取命令帮助，请输入help命令"<<endl;
			cout<<"push       数据入栈"<<endl;
			cout<<"pop        栈顶数据出栈"<<endl;
			cout<<"top        返回栈顶数据"<<endl;
			cout<<"size       返回栈中元素数量"<<endl;
			cout<<"cls        清除屏幕"<<endl; 
			cout<<"help       提供栈命令的帮助信息"<<endl; 
			cout<<"exit       退出程序"<<endl; 
			cout<<endl;
			continue;
		}
		if(s=="push")
		{
			cout<<"请输入数值：";
			cin>>n;
			q.push(n);
			cout<<"入栈成功，数值为 "<<n <<endl;
			continue;
		}
		if(s=="top")
		{
			if(q.empty())
			{
				cout<<"Error:操作的栈为空"<<endl;
				continue; 
			}
			cout<<"栈顶数据为 "<<q.top()<<endl;
			continue;
		}
		if(s=="pop")
		{
			if(q.empty())
			{
				cout<<"Error:操作的栈为空"<<endl;
				continue; 
			}
			cout<<"出栈成功，数值为 "<<q.top()<<endl;
			q.pop();
			continue; 
		}
		if(s=="size")
		{
			cout<<"栈中元素数量为 "<<q.size()<<endl;
			continue;
		}
		if(s=="exit")
		{
			cout<<"已退出"<<endl;
			system("pause"); 
			return 0;	
		}
		cout<<"Error:命令无效"<<endl; 
	}
	return 0; 
}
