#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/game_refs/EnableGetWeakRef.h"
#include "mc/deps/game_refs/WeakRef.h"

class EcsEventDispatcher : public ::std::enable_shared_from_this<EcsEventDispatcher>,
                           public ::EnableGetWeakRef<EcsEventDispatcher> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 56, ::entt::basic_dispatcher<std::allocator<void>>> mDispatcher;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void update();
    // NOLINTEND
};
