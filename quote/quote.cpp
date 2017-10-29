
/**@file   quote.c
 * @brief  C++中引用的概念，引用相当于一个别名，可以对对象/各种类型的引用，引用相当于一个别名，跟对象绑定，当改变引用值的时候，同时会改变被绑定的对象。
 * @brief  在swap函数中，传递的参数为引用，形参即为实参的引用，所以改变形参也可以起到改变实参的作用，实现交换
 * @author dtston-downey
 * @date   2017/10/28
 * @version  1.0.0
 * 修订说明：最初版本
 */
#include <iostream>

using namespace std;



void swap(int &x,int &y)
{
	int temp;
	temp=x;
	x=y;
	y=temp;
}


int main(void)
{
	int val1=1;
	int &val2=val1;
	int val3=5,val4=6;
	cout<<"hello world!!\r\n";

	cout<<val1;
	cout<<val2;

	val2=3;
	cout<<val1;
	cout<<val2;
	cout<<"\r\n";



	cout<<val3;
	cout<<val4;
	swap(val3,val4);
	cout<<val3;
	cout<<val4;

	cout<<"\r\n";
}
