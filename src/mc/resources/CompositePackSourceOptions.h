#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/resources/PackSourceOptions.h"

// auto generated forward declare list
// clang-format off
class PackSource;
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform

struct CompositePackSourceOptions {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, ::PackSourceOptions>       mBase;
    ::ll::TypedStorage<8, 24, std::vector<PackSource*>> mPackSources;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 8>  mUnk224253;
    ::ll::UntypedStorage<8, 24> mUnkb7af4e;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    CompositePackSourceOptions& operator=(CompositePackSourceOptions const&);
    CompositePackSourceOptions(CompositePackSourceOptions const&);
    CompositePackSourceOptions();

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ~CompositePackSourceOptions();
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCNAPI ~CompositePackSourceOptions();
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
