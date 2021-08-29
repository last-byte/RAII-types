#pragma once
#include <Windows.h>

namespace RAII
{
	class Handle
	{
	public:
		Handle(HANDLE inputHandle);
		~Handle();
		HANDLE GetHandle();

	private:
		HANDLE _internalHandle;
	};

	class Hmodule
	{
	public:
		Hmodule(HMODULE inputHmodule);
		~Hmodule();
		HMODULE GetHmodule();

	private:
		HMODULE _internalHmodule;
	};

	class Sc_Handle
	{
	public:
		Sc_Handle(SC_HANDLE inputHandle);
		~Sc_Handle();
		SC_HANDLE GetScHandle();

	private:
		SC_HANDLE _internalHandle;
	};
};