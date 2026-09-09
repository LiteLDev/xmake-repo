#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/config/TypedScreenCapabilities.h"

struct EDUWorldsScreenCapabilities : public ::TypedScreenCapabilities<EDUWorldsScreenCapabilities> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool> mLocalWorldManagementEnabled;
    ::ll::TypedStorage<1, 1, bool> mManageShareEnabled;
    // NOLINTEND

public:
    // prevent constructor by default
    EDUWorldsScreenCapabilities& operator=(EDUWorldsScreenCapabilities const&);
    EDUWorldsScreenCapabilities();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~EDUWorldsScreenCapabilities();
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
