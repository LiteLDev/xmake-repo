#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/resources/PackSourceReport.h"

// auto generated forward declare list
// clang-format off
class Pack;
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform

struct PackStorage {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::vector<gsl::not_null<std::shared_ptr<Pack>>>> mPacks;
    ::ll::TypedStorage<8, 40, ::PackSourceReport>                                mReport;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 24> mUnk5dcf1f;
    ::ll::UntypedStorage<8, 64> mUnk9cc675;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    PackStorage& operator=(PackStorage const&);
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    PackStorage(PackStorage const&);
#endif // @header-generator platform
    PackStorage();
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI PackStorage(::PackStorage const&);

    MCNAPI ~PackStorage();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::PackStorage const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
#else // @header-generator platform
#endif // @header-generator platform
};
