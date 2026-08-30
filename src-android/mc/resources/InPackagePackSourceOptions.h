#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/resources/PackSource.h"
#include "mc/resources/PackSourceOptions.h"

// auto generated forward declare list
// clang-format off
class IInPackagePacks;
// clang-format on

struct InPackagePackSourceOptions {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::PackSourceOptions>                                mBase;
    ::ll::TypedStorage<8, 16, ::gsl::not_null<std::shared_ptr<IInPackagePacks>>> mPacks;
    ::ll::UntypedStorage<1, 1>                                                   mPackType;
    // NOLINTEND

public:
    // prevent constructor by default
    InPackagePackSourceOptions& operator=(InPackagePackSourceOptions const&);
    InPackagePackSourceOptions(InPackagePackSourceOptions const&);
    InPackagePackSourceOptions();

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
};
