#include "pch.h"
#include "ClientPacketHandler.h"

/************************
*  ClientPacketHandler	*
************************/

PacketHandlerFunc GPacketHandler[UINT16_MAX];

// ���� ������ �۾��ڰ� ����

bool Handle_INVALID(PacketSessionRef& session, BYTE* buffer, int32 len)
{
	PacketHeader* header = reinterpret_cast<PacketHeader*>(buffer);
	// TODO : Log
	return false;
}

bool Handle_C_TEST(PacketSessionRef& session, Protocol::C_TEST& pkt)
{
	// TODO

	return true;
}
