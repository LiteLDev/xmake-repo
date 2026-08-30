#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/resources/PackSourceReport.h"

// auto generated forward declare list
// clang-format off
class Pack;
// clang-format on

struct PackSourceLoadResult {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 40, ::PackSourceReport>                                mReport;
    ::ll::TypedStorage<8, 24, std::vector<gsl::not_null<std::shared_ptr<Pack>>>> mPacks;
    // NOLINTEND

public:
    // prevent constructor by default
    PackSourceLoadResult& operator=(PackSourceLoadResult const&);

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
