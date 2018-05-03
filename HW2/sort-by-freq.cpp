/*�����Ա���������*/
#include <iostream>
using namespace std;
#include "LinearList.h"
int main()
{
	cout << "���������Ԫ�ظ���:" << endl;
	int n = 0;
	cin >> n;
	LinearList<int>IntegerLList(n);
	int x=0,y=0;
	cout << "���������Ԫ��:" << endl;
	for (int i=0; i<n;i++)
	{
		cin >> x;
		IntegerLList.Insert(i+1, x);
	}
	int*f = new int[n];
	for (int j = 0; j < IntegerLList.GetLength(); j++)
	{
		IntegerLList.GetData(j+1, x);
		f [j]= IntegerLList.Frequency(x);
		IntegerLList.DeleteByKey(x);
		IntegerLList.Insert(j+1, x);
		for (int k = j; k > 0; k--)
		{
			if (f[k] > f[k - 1])
			{
				int a = f[k];
				f[k] = f[k - 1];
				f[k - 1] = a;
				IntegerLList.GetData(k, y);
				IntegerLList.ModifyData(k, x);
				IntegerLList.ModifyData(k + 1, y);
			}
			else
				break;
		}
	}
	cout <<endl<< IntegerLList << endl;
	return 0;
}
/*{LinearList<int> IntegerLList(10); //���������10��int������Ԫ�ص�˳������    
	int x,y;    //���β���100��200��300��400����ʾ��ǰ��������Ϣ    
	IntegerLList.Insert(1,100);    
	IntegerLList.Insert(2,200);   
	IntegerLList.Insert(3,300);    
	IntegerLList.Insert(4,400);    
	cout<<"��ǰ��ĳ���Ϊ��"<<IntegerLList.GetLength()<<endl;    
	cout<<"��ǰ���Ԫ��Ϊ��\n"<<IntegerLList<<endl;
	//��ȡ��������е�3��Ԫ�ص�ֵ���ж�Ԫ���ڱ��е�λ��    
	if (IntegerLList.GetData(3,x))        
		cout<<"���еڸ�Ԫ��Ϊ��"<<x<<endl;    
	x=100;    cout<<"Ԫ���ڱ��е�λ��Ϊ��"<<IntegerLList.Find(x)<<endl;    
	//��100�޸�Ϊ150��ɾ��200��400����ʾ��ǰ��������Ϣ    
	x=150;
	IntegerLList.ModifyData(1,x);
	IntegerLList.DeleteByIndex(2,x);
	x=400;
	IntegerLList.DeleteByKey(x,y);
	cout<<"��ǰ��ĳ���Ϊ��"<<IntegerLList.GetLength()<<endl;
	cout << "��ǰ���Ԫ��Ϊ��\n";//<<IntegerLList<<endl;
	return 0;}*/