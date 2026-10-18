#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/deps/cereal/schema/dynamic/DynamicValue.h"
#else // @header-generator platform
#endif // @header-generator platform

namespace Bedrock::Profiling::Control {

struct ProfilerControlResult {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<1, 1, bool>                                 mSuccess;
    ::ll::TypedStorage<4, 4, int>                                  mOriginatingRequestSeq;
    ::ll::TypedStorage<8, 24, std::string>                         mResponseMessage;
    ::ll::TypedStorage<8, 56, std::optional<cereal::DynamicValue>> mArgs;
#else // @header-generator platform
    ::ll::UntypedStorage<1, 1>  mUnk855340;
    ::ll::UntypedStorage<4, 4>  mUnk12fb42;
    ::ll::UntypedStorage<8, 32> mUnkc4c336;
    ::ll::UntypedStorage<8, 80> mUnkce4471;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    ProfilerControlResult& operator=(ProfilerControlResult const&);
    ProfilerControlResult(ProfilerControlResult const&);
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    ProfilerControlResult();
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ~ProfilerControlResult();
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCNAPI ~ProfilerControlResult();
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

} // namespace Bedrock::Profiling::Control
