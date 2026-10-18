#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/social/PlayerProfileData.h"
#include "mc/client/social/PlayerProfileState.h"

#else // @header-generator platform
#endif // @header-generator platform
namespace Social {

#if defined(LL_PLAT_A) // @header-generator platform
struct PlayerProfile {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 40, ::Social::PlayerProfileState> state;
    ::ll::UntypedStorage<8, 456>                            data;
    // NOLINTEND

public:
    // prevent constructor by default
    PlayerProfile& operator=(PlayerProfile const&);
};
#else // @header-generator platform
struct PlayerProfile {};
#endif // @header-generator platform

} // namespace Social
