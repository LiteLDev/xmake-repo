#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/social/edu_discovery/ButtonAction.h"
#include "mc/client/social/edu_discovery/LocKey.h"

#else // @header-generator platform
#endif // @header-generator platform
namespace EDUDiscovery {

#if defined(LL_PLAT_A) // @header-generator platform
struct Button {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 48, ::EDUDiscovery::LocKey>      mText;
    ::ll::TypedStorage<1, 1, ::EDUDiscovery::ButtonAction> mAction;
    // NOLINTEND
};
#else // @header-generator platform
struct Button {};
#endif // @header-generator platform

} // namespace EDUDiscovery
