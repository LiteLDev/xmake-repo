#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated forward declare list
// clang-format off
class RealmsUnknownPackSource;
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform

struct RealmsUnknownPackSources {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, std::unique_ptr<RealmsUnknownPackSource>> realmsUnknownResourcePackSource;
    ::ll::TypedStorage<8, 8, std::unique_ptr<RealmsUnknownPackSource>> realmsUnknownBehaviorPackSource;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 8> mUnkcd975c;
    ::ll::UntypedStorage<8, 8> mUnk12b143;
#endif // @header-generator platform
    // NOLINTEND

public:
#if defined(LL_PLAT_A) // @header-generator platform
    // member functions
    // NOLINTBEGIN
    MCNAPI ~RealmsUnknownPackSources();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
#else // @header-generator platform
    // prevent constructor by default
    RealmsUnknownPackSources& operator=(RealmsUnknownPackSources const&);
    RealmsUnknownPackSources(RealmsUnknownPackSources const&);
    RealmsUnknownPackSources();
#endif // @header-generator platform
};
