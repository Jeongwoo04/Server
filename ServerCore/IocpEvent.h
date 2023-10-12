#pragma once

class Session;

enum class EventType : uint8
{
	Connect,
	Disconnect,
	Accept,
	//PreRecv, 0 byte recv
	Recv,
	Send
};

/********************
*	  IocpEvent		*
********************/

// virtual X 맨 처음 offset 메모리가 OVERLAPPED와 관련된 메모리가 아닌 다른것으로 채워질 수 있음
class IocpEvent : public OVERLAPPED
{
public:
	IocpEvent(EventType type);

	void			Init();

public:
	EventType		eventType;
	IocpObjectRef	owner;
};

/********************
*	ConnectEvent	*
********************/

class ConnectEvent : public IocpEvent
{
public:
	ConnectEvent() : IocpEvent(EventType::Connect) { }
};

/********************
*  DisconnectEvent	*
********************/

class DisconnectEvent : public IocpEvent
{
public:
	DisconnectEvent() : IocpEvent(EventType::Disconnect) { }
};

/********************
*	 AcceptEvent	*
********************/

class AcceptEvent : public IocpEvent
{
public:
	AcceptEvent() : IocpEvent(EventType::Accept) { }

public:
	SessionRef session = nullptr;
};

/********************
*	  RecvEvent 	*
********************/

class RecvEvent : public IocpEvent
{
public:
	RecvEvent() : IocpEvent(EventType::Recv) { }
};

/********************
*	  SendEvent 	*
********************/

class SendEvent : public IocpEvent
{
public:
	SendEvent() : IocpEvent(EventType::Send) { }

	Vector<SendBufferRef> sendBuffers;
};