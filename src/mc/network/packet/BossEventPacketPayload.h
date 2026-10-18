#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/legacy/ActorUniqueID.h"
#include "mc/safety/RedactableString.h"
#include "mc/world/actor/ai/util/BossBarColor.h"
#include "mc/world/actor/ai/util/BossBarOverlay.h"
#include "mc/world/actor/ai/util/BossEventUpdateType.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated forward declare list
// clang-format off
class RaidBossComponent;
struct BossComponent;
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
struct BossEventPacketPayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int const>                            FLAG_DARKEN;
    ::ll::TypedStorage<4, 4, int const>                            FLAG_FOG;
    ::ll::TypedStorage<8, 8, ::ActorUniqueID>                      mBossID;
    ::ll::TypedStorage<8, 8, ::ActorUniqueID>                      mPlayerID;
    ::ll::TypedStorage<1, 1, ::BossEventUpdateType>                mEventType;
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 56, ::Bedrock::Safety::RedactableString> mName;
#else // @header-generator platform
    ::ll::TypedStorage<8, 72, ::Bedrock::Safety::RedactableString> mName;
#endif // @header-generator platform
    ::ll::TypedStorage<4, 4, float>                                mHealthPercent;
    ::ll::TypedStorage<1, 1, ::BossBarColor>                       mColor;
    ::ll::TypedStorage<1, 1, ::BossBarOverlay>                     mOverlay;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI BossEventPacketPayload(::BossEventUpdateType, ::RaidBossComponent&);

    MCNAPI BossEventPacketPayload(::BossEventUpdateType, ::ActorUniqueID, ::BossComponent&);

    MCNAPI BossEventPacketPayload(::BossEventUpdateType, ::ActorUniqueID, ::ActorUniqueID);

    MCNAPI ::Bedrock::Safety::RedactableString getName() const;
#else // @header-generator platform
    MCAPI BossEventPacketPayload();
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::BossEventUpdateType, ::RaidBossComponent&);

    MCNAPI void* $ctor(::BossEventUpdateType, ::ActorUniqueID, ::BossComponent&);

    MCNAPI void* $ctor(::BossEventUpdateType, ::ActorUniqueID, ::ActorUniqueID);
#else // @header-generator platform
    MCAPI void* $ctor();
#endif // @header-generator platform
    // NOLINTEND
};
