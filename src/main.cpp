/*
 * main.cpp
 *
 *  Created on: 2016年9月6日
 *      Author: chengfuju@shijingvr.com
 */


#ifdef WIN32
#include <windows.h>
#endif
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <iostream>
#include <exception>

using namespace std;

double fuc(double x, double y)                        //定义函数
		{
	if (y == 0) {
		throw y;                                    //除数为0，抛出异常
	}
	return x / y;                                    //否则返回两个数的商
}

int main() {
	double res;

	try                                            //定义异常
	{
		res = fuc(2, 3);
		cout << "The result of x/y is : " << res << endl;

		printf("The result of x/y is :%f  \n",res);

		res = fuc(4, 0);                                //出现异常
	} catch (...){ //捕获并处理异常
		//cerr << "error of dividing zero.\n";
		printf("error of dividing zero.\n");
		exit(1);                                    //异常退出程序
	}
	return 0;
}
