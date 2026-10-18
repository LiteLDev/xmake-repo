#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/player/PlayerPartyInfo.h"

struct PartyChangedPacketPayload {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 40, std::optional<PlayerPartyInfo>> mPartyInfo;
#else // @header-generator platform
    ::ll::TypedStorage<8, 48, ::std::optional<::PlayerPartyInfo>> mPartyInfo;
#endif // @header-generator platform
    // NOLINTEND
};
