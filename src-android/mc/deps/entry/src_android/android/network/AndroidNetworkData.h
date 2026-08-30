#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct AndroidNetworkData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool> isEthernetConnected;
    ::ll::TypedStorage<1, 1, bool> isWifiConnected;
    ::ll::TypedStorage<1, 1, bool> isOtherConnected;
    // NOLINTEND
};
