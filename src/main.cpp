/*
 * main.cpp
 *
 *  Created on: 2016��9��6��
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

double fuc(double x, double y)                        //���庯��
		{
	if (y == 0) {
		throw y;                                    //����Ϊ0���׳��쳣
	}
	return x / y;                                    //���򷵻�����������
}

int main() {
	double res;

	try                                            //�����쳣
	{
		res = fuc(2, 3);
		cout << "The result of x/y is : " << res << endl;

		printf("The result of x/y is :%f  \n",res);

		res = fuc(4, 0);                                //�����쳣
	} catch (...){ //���񲢴����쳣
		//cerr << "error of dividing zero.\n";
		printf("error of dividing zero.\n");
		exit(1);                                    //�쳣�˳�����
	}
	return 0;
}
