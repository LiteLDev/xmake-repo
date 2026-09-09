#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/social/edu_discovery/ButtonAction.h"
#include "mc/client/social/edu_discovery/LocKey.h"

namespace EDUDiscovery {

struct Button {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 48, ::EDUDiscovery::LocKey>      mText;
    ::ll::TypedStorage<1, 1, ::EDUDiscovery::ButtonAction> mAction;
    // NOLINTEND
};

} // namespace EDUDiscovery
