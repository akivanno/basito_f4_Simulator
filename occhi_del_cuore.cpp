#include "stdafx.h"
#include "iostream"
#include "Windows.h"
#include "Winuser.h"
using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	while (true)
	{
		if (GetAsyncKeyState(VK_F4))
		{
			cout << "basito" << endl;
			Sleep(100);
		}
	}
	return 0;
}

