#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/deps/core/profiler/LoadTimeData.h"
#else // @header-generator platform
#endif // @header-generator platform

namespace Core {

class ScopedLoadTimeSection {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, double>                mStartTime;
    ::ll::TypedStorage<8, 40, ::Core::LoadTimeData> mProfileData;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 8>  mUnk8f5ef2;
    ::ll::UntypedStorage<8, 48> mUnk517b73;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    ScopedLoadTimeSection& operator=(ScopedLoadTimeSection const&);
    ScopedLoadTimeSection(ScopedLoadTimeSection const&);
#endif // @header-generator platform
    ScopedLoadTimeSection();
};

} // namespace Core
