#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/deps/profiler/CounterTokenMarker.h"
#include "mc/deps/profiler/platform/CounterTokenMicroProfile.h"
#include "mc/deps/profiler/platform/CounterTokenTracy.h"
#else // @header-generator platform
#endif // @header-generator platform

namespace Core::Profile {

class CounterToken {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<1, 1, ::Core::Profile::CounterTokenMicroProfile> mMicroProfile;
    ::ll::TypedStorage<1, 1, ::Core::Profile::CounterTokenTracy>        mTracy;
    ::ll::TypedStorage<8, 48, ::Core::Profile::CounterTokenMarker>      mMarker;
#else // @header-generator platform
    ::ll::UntypedStorage<1, 1>  mUnk974942;
    ::ll::UntypedStorage<1, 1>  mUnk45b865;
    ::ll::UntypedStorage<8, 48> mUnkd6b65d;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    CounterToken& operator=(CounterToken const&);
    CounterToken(CounterToken const&);
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    CounterToken();
#endif // @header-generator platform
};

} // namespace Core::Profile
