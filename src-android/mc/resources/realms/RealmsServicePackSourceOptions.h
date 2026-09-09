#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/resources/PackSource.h"
#include "mc/resources/PackSourceOptions.h"

// auto generated forward declare list
// clang-format off
class Pack;
// clang-format on

namespace Realms {

struct RealmsServicePackSourceOptions {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::PackSourceOptions>                                mBase;
    ::ll::TypedStorage<8, 8, long>                                               mRealmId;
    ::ll::UntypedStorage<1, 1>                                                   mType;
    ::ll::TypedStorage<8, 24, std::vector<gsl::not_null<std::shared_ptr<Pack>>>> mAppliedContent;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~RealmsServicePackSourceOptions();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Realms
