#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated forward declare list
// clang-format off
class IPackIOProvider;
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform

struct PackSourceOptions {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, std::unique_ptr<IPackIOProvider>> mIO;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 8> mUnkb0a517;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    PackSourceOptions& operator=(PackSourceOptions const&);
    PackSourceOptions(PackSourceOptions const&);
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI PackSourceOptions();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND
#else // @header-generator platform
    PackSourceOptions();
#endif // @header-generator platform
};
