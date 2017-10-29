/**@file   string.c
 * @brief  C++中，string是一个类的类型，定义了一系列关于string操作的方法.包括==（逐字节对比），=（赋值），》=（逐字节对比），empty（）（若为空，返回真，否则为假）
 * @brief  size（）（string的大小）,在string的加法中，+号操作符左右两边必须有一个是string类型的
 * @author dtston-downey
 * @date   2017/10/29
 * @version  1.0.0
 * 修订说明：最初版本
 */
#include <iostream>

using namespace std;




int main(void)
{
	string str1="hello world";
	string str4="hhhhhhhuuuu";
	string str2;
	string str3;
//	while(cin>>str2!=NULL)
	{
	//	cout<<str2;
	}
	cin>>str2;

	str3=str1+str2;

	cout<<str3<<endl;
	cout<<str3.size()<<endl;
	cout<<str3.empty()<<endl;
	cout<<str3[3]<<endl;   //str3【x】可以作为左值进行赋值
	cout<<(str1==str2)<<endl;
	cout<<(str1>=str2)<<endl;
	isalnum(str3[3]);      //一组判断字符串中元素的接口
}
