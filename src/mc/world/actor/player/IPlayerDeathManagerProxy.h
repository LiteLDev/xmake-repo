#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Actor;
struct ActorUniqueID;
// clang-format on

class IPlayerDeathManagerProxy {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IPlayerDeathManagerProxy() = default;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Actor* fetchActor(::ActorUniqueID) const = 0;
#else // @header-generator platform
    virtual ::Actor* fetchActor(::ActorUniqueID actorUniqueID) const = 0;
#endif // @header-generator platform

    virtual bool shouldShowDeathMessages() const = 0;

    virtual void onWorldOwnerHasDied() = 0;
    // NOLINTEND
};
