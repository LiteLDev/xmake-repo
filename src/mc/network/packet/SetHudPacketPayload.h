#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/HudElement.h"
#include "mc/util/HudVisibility.h"

struct SetHudPacketPayload {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::vector<HudElement>> mHudElement;
    ::ll::TypedStorage<4, 4, ::HudVisibility>          mHudVisible;
#else // @header-generator platform
    ::ll::TypedStorage<8, 24, ::std::vector<::HudElement>> mHudElement;
    ::ll::TypedStorage<4, 4, ::HudVisibility>              mHudVisible;
#endif // @header-generator platform
    // NOLINTEND
};
