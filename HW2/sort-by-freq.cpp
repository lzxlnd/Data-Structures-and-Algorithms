/*简单线性表排序问题*/
#include <iostream>
using namespace std;
#include "LinearList.h"
int main()
{
	cout << "请输入表中元素个数:" << endl;
	int n = 0;
	cin >> n;
	LinearList<int>IntegerLList(n);
	int x=0,y=0;
	cout << "请输入表中元素:" << endl;
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
/*{LinearList<int> IntegerLList(10); //声明最多有10个int型数据元素的顺序表对象    
	int x,y;    //依次插入100、200、300、400，显示当前表的相关信息    
	IntegerLList.Insert(1,100);    
	IntegerLList.Insert(2,200);   
	IntegerLList.Insert(3,300);    
	IntegerLList.Insert(4,400);    
	cout<<"当前表的长度为："<<IntegerLList.GetLength()<<endl;    
	cout<<"当前表的元素为：\n"<<IntegerLList<<endl;
	//读取并输出表中第3个元素的值，判断元素在表中的位置    
	if (IntegerLList.GetData(3,x))        
		cout<<"表中第个元素为："<<x<<endl;    
	x=100;    cout<<"元素在表中的位置为："<<IntegerLList.Find(x)<<endl;    
	//将100修改为150，删除200和400后，显示当前表的相关信息    
	x=150;
	IntegerLList.ModifyData(1,x);
	IntegerLList.DeleteByIndex(2,x);
	x=400;
	IntegerLList.DeleteByKey(x,y);
	cout<<"当前表的长度为："<<IntegerLList.GetLength()<<endl;
	cout << "当前表的元素为：\n";//<<IntegerLList<<endl;
	return 0;}*/