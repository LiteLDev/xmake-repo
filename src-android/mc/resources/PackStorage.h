#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/resources/PackSourceReport.h"

// auto generated forward declare list
// clang-format off
class Pack;
// clang-format on

struct PackStorage {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::vector<gsl::not_null<std::shared_ptr<Pack>>>> mPacks;
    ::ll::TypedStorage<8, 40, ::PackSourceReport>                                mReport;
    // NOLINTEND

public:
    // prevent constructor by default
    PackStorage& operator=(PackStorage const&);
    PackStorage();

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
};
