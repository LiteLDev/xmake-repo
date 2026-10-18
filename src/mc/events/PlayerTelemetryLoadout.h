#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/world/item/ItemStack.h"
#else // @header-generator platform
#endif // @header-generator platform

namespace Social::Events {

struct PlayerTelemetryLoadout {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 152, ::ItemStack const> headArmor;
    ::ll::TypedStorage<8, 152, ::ItemStack const> feetArmor;
    ::ll::TypedStorage<8, 152, ::ItemStack const> legsArmor;
    ::ll::TypedStorage<8, 152, ::ItemStack const> torsoArmor;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 152> mUnkd0ad4f;
    ::ll::UntypedStorage<8, 152> mUnk1f86da;
    ::ll::UntypedStorage<8, 152> mUnk1c3063;
    ::ll::UntypedStorage<8, 152> mUnkb059ba;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    PlayerTelemetryLoadout& operator=(PlayerTelemetryLoadout const&);
    PlayerTelemetryLoadout(PlayerTelemetryLoadout const&);
#endif // @header-generator platform
    PlayerTelemetryLoadout();
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~PlayerTelemetryLoadout();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
#else // @header-generator platform
#endif // @header-generator platform
};

} // namespace Social::Events
