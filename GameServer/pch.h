#pragma once

#define WIN32_LEAN_AND_MEAN	// ���� ������ �ʴ� ������ Windows ������� �����մϴ�.

#ifdef _DEBUG // ��ó���� �ܰ迡�� �����
#pragma comment(lib, "Debug\\ServerCore.lib")
#else
#pragma comment(lib, "Release\\ServerCore.lib")
#endif

#include "CorePch.h"