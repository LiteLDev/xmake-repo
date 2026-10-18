#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/resources/PackSource.h"
#include "mc/resources/PackSourceOptions.h"

// auto generated forward declare list
// clang-format off
class IInPackagePacks;
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform

struct InPackagePackSourceOptions {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, ::PackSourceOptions>                                mBase;
    ::ll::TypedStorage<8, 16, ::gsl::not_null<std::shared_ptr<IInPackagePacks>>> mPacks;
    ::ll::UntypedStorage<1, 1>                                                   mPackType;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 8>  mUnke14392;
    ::ll::UntypedStorage<8, 16> mUnk935766;
    ::ll::UntypedStorage<1, 1>  mUnkd365f1;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    InPackagePackSourceOptions& operator=(InPackagePackSourceOptions const&);
    InPackagePackSourceOptions(InPackagePackSourceOptions const&);
    InPackagePackSourceOptions();
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~InPackagePackSourceOptions();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
#else // @header-generator platform
#endif // @header-generator platform
};
