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
	cout<<"ջ����ָʾ�� 1.0"<<endl;
	cout<<endl;
    cout<<"����help��ȡ����"<<endl;
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
			cout<<"�����ȡ���������������help����"<<endl;
			cout<<"push       ������ջ"<<endl;
			cout<<"pop        ջ�����ݳ�ջ"<<endl;
			cout<<"top        ����ջ������"<<endl;
			cout<<"size       ����ջ��Ԫ������"<<endl;
			cout<<"cls        �����Ļ"<<endl; 
			cout<<"help       �ṩջ����İ�����Ϣ"<<endl; 
			cout<<"exit       �˳�����"<<endl; 
			cout<<endl;
			continue;
		}
		if(s=="push")
		{
			cout<<"��������ֵ��";
			cin>>n;
			q.push(n);
			cout<<"��ջ�ɹ�����ֵΪ "<<n <<endl;
			continue;
		}
		if(s=="top")
		{
			if(q.empty())
			{
				cout<<"Error:������ջΪ��"<<endl;
				continue; 
			}
			cout<<"ջ������Ϊ "<<q.top()<<endl;
			continue;
		}
		if(s=="pop")
		{
			if(q.empty())
			{
				cout<<"Error:������ջΪ��"<<endl;
				continue; 
			}
			cout<<"��ջ�ɹ�����ֵΪ "<<q.top()<<endl;
			q.pop();
			continue; 
		}
		if(s=="size")
		{
			cout<<"ջ��Ԫ������Ϊ "<<q.size()<<endl;
			continue;
		}
		if(s=="exit")
		{
			cout<<"���˳�"<<endl;
			system("pause"); 
			return 0;	
		}
		cout<<"Error:������Ч"<<endl; 
	}
	return 0; 
}
