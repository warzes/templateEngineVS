#pragma once

#if SE_PLATFORM_WINDOWS
#	include "Core/Platform/Win32PlatformDefinitions.h"
#	pragma warning( push, 1 )
#	include <Windows.h>
#	pragma warning( pop )
#endif

#include "Core/Platform/PlatformMacros.h"