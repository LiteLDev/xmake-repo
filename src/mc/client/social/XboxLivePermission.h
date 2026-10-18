#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/social/XboxLivePrivacyValue.h"

#else // @header-generator platform
#endif // @header-generator platform
namespace Social {

#if defined(LL_PLAT_A) // @header-generator platform
struct XboxLivePermission {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::Social::XboxLivePrivacyValue> mPermission;
    ::ll::TypedStorage<1, 1, bool>                           mIsAllowed;
    // NOLINTEND
};
#else // @header-generator platform
struct XboxLivePermission {};
#endif // @header-generator platform

} // namespace Social
