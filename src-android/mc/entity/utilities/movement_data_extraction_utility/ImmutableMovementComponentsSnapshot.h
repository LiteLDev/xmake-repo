#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/vanilla_components/ActorTypeComponent.h"
#include "mc/entity/components/ActorUniqueIDComponent.h"
#include "mc/entity/components/RuntimeIDComponent.h"

namespace MovementDataExtractionUtility {

struct ImmutableMovementComponentsSnapshot {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, std::bitset<11>>          mHasComponentBits;
    ::ll::TypedStorage<4, 4, ::ActorTypeComponent>     mActorType;
    ::ll::TypedStorage<8, 8, ::ActorUniqueIDComponent> mUniqueID;
    ::ll::TypedStorage<8, 8, ::RuntimeIDComponent>     mRuntimeID;
    // NOLINTEND
};

} // namespace MovementDataExtractionUtility
