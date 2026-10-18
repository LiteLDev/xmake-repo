#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated forward declare list
// clang-format off
class LocalConnector;
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform

class LocalConnectivitySystem {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 16, std::weak_ptr<LocalConnector>> mHostConnector;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 16> mUnk7eadae;
#endif // @header-generator platform
    // NOLINTEND

public:
#if defined(LL_PLAT_A) // @header-generator platform
    // member functions
    // NOLINTBEGIN
    MCNAPI ~LocalConnectivitySystem();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
#else // @header-generator platform
    // prevent constructor by default
    LocalConnectivitySystem& operator=(LocalConnectivitySystem const&);
    LocalConnectivitySystem(LocalConnectivitySystem const&);
    LocalConnectivitySystem();
#endif // @header-generator platform
};
