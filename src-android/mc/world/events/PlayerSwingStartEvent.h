#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/WeakEntityRef.h"
#include "mc/world/actor/ActorSwingSource.h"
#include "mc/world/item/ItemStack.h"

struct PlayerSwingStartEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 24, ::WeakEntityRef>   mPlayer;
    ::ll::TypedStorage<8, 152, ::ItemStack>      mHeldItem;
    ::ll::TypedStorage<1, 1, ::ActorSwingSource> mSwingSource;
    // NOLINTEND

public:
    // prevent constructor by default
    PlayerSwingStartEvent& operator=(PlayerSwingStartEvent const&);
    PlayerSwingStartEvent();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI PlayerSwingStartEvent(::PlayerSwingStartEvent const&);

    MCNAPI ~PlayerSwingStartEvent();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::PlayerSwingStartEvent const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
