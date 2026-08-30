#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/social/XboxLivePrivacyValue.h"

namespace Social {

struct XboxLivePermission {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::Social::XboxLivePrivacyValue> mPermission;
    ::ll::TypedStorage<1, 1, bool>                           mIsAllowed;
    // NOLINTEND
};

} // namespace Social
