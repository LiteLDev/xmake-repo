#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/deps/profiler/CounterDisplayFormat.h"
#else // @header-generator platform
#endif // @header-generator platform

namespace Core::Profile {

class CounterTokenMarker {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 16, std::string_view>                     mName;
    ::ll::TypedStorage<1, 1, ::Core::Profile::CounterDisplayFormat> mDisplayFormat;
    ::ll::TypedStorage<8, 24, std::vector<char>>                    mNameCache;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 16> mUnk14794f;
    ::ll::UntypedStorage<1, 1>  mUnkde719c;
    ::ll::UntypedStorage<8, 24> mUnkfe03ff;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    CounterTokenMarker& operator=(CounterTokenMarker const&);
    CounterTokenMarker(CounterTokenMarker const&);
    CounterTokenMarker();
#endif // @header-generator platform
};

} // namespace Core::Profile
