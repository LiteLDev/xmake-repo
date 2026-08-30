#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/game_refs/WeakRef.h"

// auto generated forward declare list
// clang-format off
class BlockSource;
// clang-format on

class ActorTickNeededComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 16> mBlockSource;
    // NOLINTEND

public:
    // prevent constructor by default
    ActorTickNeededComponent& operator=(ActorTickNeededComponent const&);
    ActorTickNeededComponent(ActorTickNeededComponent const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ActorTickNeededComponent(::ActorTickNeededComponent&&);

    MCNAPI explicit ActorTickNeededComponent(::BlockSource&);

    MCNAPI ::WeakRef<BlockSource> getBlockSource();

    MCNAPI ::ActorTickNeededComponent& operator=(::ActorTickNeededComponent&&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ActorTickNeededComponent&&);

    MCNAPI void* $ctor(::BlockSource&);
    // NOLINTEND
};
