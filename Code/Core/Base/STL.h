#pragma once

#if SE_EASTL_ENABLED
namespace eastl{}
#else
namespace std{}
#endif

namespace stl
{
#if SE_EASTL_ENABLED
	using namespace eastl;
#else
	using namespace std;
#endif
}