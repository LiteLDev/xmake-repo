#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/deps/profiler/LogMessageTokenMarker.h"
#else // @header-generator platform
#endif // @header-generator platform

namespace Core::Profile {

class LogMessageToken {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 32, ::Core::Profile::LogMessageTokenMarker> mMarker;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 32> mUnkf44afc;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    LogMessageToken& operator=(LogMessageToken const&);
    LogMessageToken(LogMessageToken const&);
    LogMessageToken();
#endif // @header-generator platform
};

} // namespace Core::Profile
