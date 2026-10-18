#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/world/events/ActorEventListener.h"
#include "mc/world/events/EventResult.h"
#include "mc/world/events/PlayerEventListener.h"

// auto generated forward declare list
// clang-format off
class Actor;
class IClientInstance;
class LocalPlayer;
class Player;
struct VanillaClientGameplayComponent;
// clang-format on

class VanillaClientGameplayEventListener : public ::ActorEventListener, public ::PlayerEventListener {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~VanillaClientGameplayEventListener();

    virtual ::EventResult onLocalPlayerDeath(::IClientInstance&, ::LocalPlayer&);

    virtual ::EventResult onPlayerStartRiding(::Player&, ::Actor&);

    virtual ::EventResult onPlayerStopRiding(::Player&, bool, bool, bool);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::EventResult $onLocalPlayerDeath(::IClientInstance&, ::LocalPlayer&);

    MCNAPI ::EventResult $onPlayerStartRiding(::Player&, ::Actor&);

    MCNAPI ::EventResult $onPlayerStopRiding(::Player&, bool, bool, bool);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
#else // @header-generator platform
class VanillaClientGameplayEventListener {};
#endif // @header-generator platform
