#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/config/TypedScreenCapabilities.h"

struct EDUServersScreenCapabilities : public ::TypedScreenCapabilities<EDUServersScreenCapabilities> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool> mManageShareEnabled;
    // NOLINTEND

public:
    // prevent constructor by default
    EDUServersScreenCapabilities& operator=(EDUServersScreenCapabilities const&);
    EDUServersScreenCapabilities();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~EDUServersScreenCapabilities();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
