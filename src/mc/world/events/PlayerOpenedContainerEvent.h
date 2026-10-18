#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/WeakEntityRef.h"
#include "mc/deps/shared_types/legacy/ContainerType.h"
#include "mc/legacy/ActorUniqueID.h"
#include "mc/world/level/BlockPos.h"

struct PlayerOpenedContainerEvent {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<1, 24, ::WeakEntityRef>                       mPlayer;
    ::ll::TypedStorage<1, 1, ::SharedTypes::Legacy::ContainerType>   mContainerType;
    ::ll::TypedStorage<8, 24, std::variant<BlockPos, ActorUniqueID>> mOwner;
#else // @header-generator platform
    ::ll::TypedStorage<8, 24, ::WeakEntityRef>                             mPlayer;
    ::ll::TypedStorage<1, 1, ::SharedTypes::Legacy::ContainerType>         mContainerType;
    ::ll::TypedStorage<8, 24, ::std::variant<::BlockPos, ::ActorUniqueID>> mOwner;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    PlayerOpenedContainerEvent& operator=(PlayerOpenedContainerEvent const&);
    PlayerOpenedContainerEvent();
#else // @header-generator platform
#endif // @header-generator platform
};
