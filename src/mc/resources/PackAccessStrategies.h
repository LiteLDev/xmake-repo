#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated forward declare list
// clang-format off
class PackAccessStrategy;
class PackWriteStrategy;
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform

struct PackAccessStrategies {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, std::unique_ptr<PackAccessStrategy>> mRead;
    ::ll::TypedStorage<8, 8, std::unique_ptr<PackWriteStrategy>>  mWrite;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 8> mUnk337200;
    ::ll::UntypedStorage<8, 8> mUnk94c915;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    PackAccessStrategies& operator=(PackAccessStrategies const&);
    PackAccessStrategies(PackAccessStrategies const&);
    PackAccessStrategies();

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ~PackAccessStrategies();
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCNAPI ~PackAccessStrategies();
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
