#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class LocalConnector;
// clang-format on

class LocalConnectivitySystem {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, std::weak_ptr<LocalConnector>> mHostConnector;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~LocalConnectivitySystem();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
