#pragma once

// Client나 GameServer에서 참조할 것들

#include "Types.h"
#include "CoreGlobal.h"
#include "CoreTLS.h"
#include "CoreMacro.h"
#include "Container.h"

#include <windows.h>
#include <iostream>
using namespace std;

#include <WinSock2.h>
#include <MSWSock.h>
#include <WS2tcpip.h>
#pragma comment(lib, "ws2_32.lib")

#include "Lock.h"
#include "ObjectPool.h"
#include "TypeCast.h"
#include "Memory.h"
#include "SendBuffer.h"
#include "Session.h"
#include "JobQueue.h"
#include "ConsoleLog.h"