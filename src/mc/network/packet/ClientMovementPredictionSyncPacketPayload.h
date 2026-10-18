#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/vanilla_components/ActorDataBoundingBoxComponent.h"
#include "mc/deps/vanilla_components/ActorDataFlagComponent.h"
#include "mc/deps/vanilla_components/MovementAttributesComponent.h"
#include "mc/legacy/ActorUniqueID.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated forward declare list
// clang-format off
struct ActorUniqueIDComponent;
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
struct ClientMovementPredictionSyncPacketPayload {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<8, 24>                              mActorDataFlag;
    ::ll::UntypedStorage<4, 12>                              mActorBoundingBox;
    ::ll::TypedStorage<4, 72, ::MovementAttributesComponent> mMovementAttributes;
    ::ll::TypedStorage<8, 8, ::ActorUniqueID>                mActorID;
    ::ll::TypedStorage<1, 1, bool>                           mIsFlying;
#else // @header-generator platform
    ::ll::TypedStorage<8, 24, ::ActorDataFlagComponent>        mActorDataFlag;
    ::ll::TypedStorage<4, 12, ::ActorDataBoundingBoxComponent> mActorBoundingBox;
    ::ll::TypedStorage<4, 72, ::MovementAttributesComponent>   mMovementAttributes;
    ::ll::TypedStorage<8, 8, ::ActorUniqueID>                  mActorID;
    ::ll::TypedStorage<1, 1, bool>                             mIsFlying;
#endif // @header-generator platform
    // NOLINTEND
};
