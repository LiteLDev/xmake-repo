#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated forward declare list
// clang-format off
class Pack;
class ResourcePack;
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform

struct RepositoryPackTuple {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 16, ::gsl::not_null<std::shared_ptr<Pack>>>         mPack;
    ::ll::TypedStorage<8, 16, ::gsl::not_null<std::shared_ptr<ResourcePack>>> mResource;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 16> mUnkd6d4d0;
    ::ll::UntypedStorage<8, 16> mUnkec28f2;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    RepositoryPackTuple& operator=(RepositoryPackTuple const&);
    RepositoryPackTuple(RepositoryPackTuple const&);
#endif // @header-generator platform
    RepositoryPackTuple();
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~RepositoryPackTuple();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
#else // @header-generator platform
#endif // @header-generator platform
};
