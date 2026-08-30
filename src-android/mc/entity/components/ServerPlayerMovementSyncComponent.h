#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/vanilla_components/ActorDataBoundingBoxComponent.h"
#include "mc/deps/vanilla_components/ActorDataFlagComponent.h"
#include "mc/deps/vanilla_components/MovementAttributesComponent.h"
#include "mc/legacy/ActorUniqueID.h"

struct ServerPlayerMovementSyncComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::ActorUniqueID>                mActorID;
    ::ll::UntypedStorage<8, 24>                              mActorDataFlag;
    ::ll::UntypedStorage<4, 12>                              mActorDataBoundingBox;
    ::ll::TypedStorage<4, 72, ::MovementAttributesComponent> mMovementAttributes;
    ::ll::TypedStorage<1, 1, bool>                           mIsFlying;
    // NOLINTEND
};
