// w3challs_c76.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"


int _tmain(int argc, _TCHAR* argv[])
{
	unsigned char aW3challsProtec[] = "W3challs Protection system";
	unsigned char aPleaseEnterYou[] = "Please enter your password :";
	unsigned char byte[10] = "";

	byte[0] = aW3challsProtec[13] - 3;
	byte[1] = aPleaseEnterYou[14] - 6;
	byte[2] = aW3challsProtec[0] - 12;
	byte[3] = aPleaseEnterYou[1] + 5;
	byte[4] = aW3challsProtec[13] - 9 + 3;
    byte[5] = aPleaseEnterYou[14] - 9 + 6;
    byte[6] = aW3challsProtec[1] + 9 - 8;
    byte[7] = aPleaseEnterYou[1] - 9 + 4;
    byte[8] = 9 + aW3challsProtec[4] + 9 + 7;

	printf("%s",byte);
	getchar();

	return 0;
}

