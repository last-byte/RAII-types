//RAII::ScHandle methods definitions

#include "raii.h"

namespace RAII
{
	Sc_Handle::Sc_Handle(SC_HANDLE inputHandle)
	{
		_internalHandle = inputHandle;
	}

	Sc_Handle::~Sc_Handle()
	{
		::CloseHandle(_internalHandle);
	}

	SC_HANDLE Sc_Handle::GetScHandle()
	{
		return _internalHandle;
	}
}