#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct EDUDiscoveryDialogCallbacks {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 48> mToIpEntry;
    ::ll::UntypedStorage<8, 48> mToJoincodeEntry;
    // NOLINTEND

public:
    // prevent constructor by default
    EDUDiscoveryDialogCallbacks& operator=(EDUDiscoveryDialogCallbacks const&);
    EDUDiscoveryDialogCallbacks(EDUDiscoveryDialogCallbacks const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~EDUDiscoveryDialogCallbacks();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
