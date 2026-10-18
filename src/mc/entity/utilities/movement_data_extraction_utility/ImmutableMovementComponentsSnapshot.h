#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/deps/vanilla_components/ActorTypeComponent.h"
#include "mc/entity/components/ActorUniqueIDComponent.h"
#include "mc/entity/components/RuntimeIDComponent.h"
#else // @header-generator platform
#endif // @header-generator platform

namespace MovementDataExtractionUtility {

struct ImmutableMovementComponentsSnapshot {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, std::bitset<11>>          mHasComponentBits;
    ::ll::TypedStorage<4, 4, ::ActorTypeComponent>     mActorType;
    ::ll::TypedStorage<8, 8, ::ActorUniqueIDComponent> mUniqueID;
    ::ll::TypedStorage<8, 8, ::RuntimeIDComponent>     mRuntimeID;
#else // @header-generator platform
    ::ll::UntypedStorage<4, 4> mUnk7675de;
    ::ll::UntypedStorage<4, 4> mUnk3dd121;
    ::ll::UntypedStorage<8, 8> mUnkd784a3;
    ::ll::UntypedStorage<8, 8> mUnkd1aba8;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    ImmutableMovementComponentsSnapshot& operator=(ImmutableMovementComponentsSnapshot const&);
    ImmutableMovementComponentsSnapshot(ImmutableMovementComponentsSnapshot const&);
    ImmutableMovementComponentsSnapshot();
#endif // @header-generator platform
};

} // namespace MovementDataExtractionUtility
