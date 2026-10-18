#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/deps/profiler/CPUProfileTokenMarker.h"
#include "mc/deps/profiler/platform/CPUProfileTokenMicroProfile.h"
#include "mc/deps/profiler/platform/CPUProfileTokenTracy.h"
#else // @header-generator platform
#endif // @header-generator platform

namespace Core::Profile {

class ScopeToken {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<1, 1, ::Core::Profile::CPUProfileTokenMicroProfile> mMicroProfile;
    ::ll::TypedStorage<1, 1, ::Core::Profile::CPUProfileTokenTracy>        mTracy;
    ::ll::TypedStorage<8, 96, ::Core::Profile::CPUProfileTokenMarker>      mMarker;
#else // @header-generator platform
    ::ll::UntypedStorage<1, 1>   mUnk643c8a;
    ::ll::UntypedStorage<1, 1>   mUnk6550e1;
    ::ll::UntypedStorage<8, 104> mUnk82e230;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    ScopeToken& operator=(ScopeToken const&);
    ScopeToken(ScopeToken const&);
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    ScopeToken();
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ~ScopeToken();
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCNAPI ~ScopeToken();
#endif
#endif // @header-generator platform
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $dtor();
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCNAPI void $dtor();
#endif
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace Core::Profile
