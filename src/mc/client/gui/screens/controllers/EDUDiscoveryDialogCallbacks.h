#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
struct EDUDiscoveryDialogCallbacks {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 64, ::std::function<void()>> mToIpEntry;
    ::ll::TypedStorage<8, 64, ::std::function<void()>> mToJoincodeEntry;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~EDUDiscoveryDialogCallbacks();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
#else // @header-generator platform
struct EDUDiscoveryDialogCallbacks {};
#endif // @header-generator platform
#endif // @header-generator platform
