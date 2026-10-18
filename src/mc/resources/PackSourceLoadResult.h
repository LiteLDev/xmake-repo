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

struct PackSourceLoadResult {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 40, ::PackSourceReport>                                mReport;
    ::ll::TypedStorage<8, 24, std::vector<gsl::not_null<std::shared_ptr<Pack>>>> mPacks;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 64> mUnk305d64;
    ::ll::UntypedStorage<8, 24> mUnk718822;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    PackSourceLoadResult& operator=(PackSourceLoadResult const&);
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    PackSourceLoadResult(PackSourceLoadResult const&);
    PackSourceLoadResult();
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~PackSourceLoadResult();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
