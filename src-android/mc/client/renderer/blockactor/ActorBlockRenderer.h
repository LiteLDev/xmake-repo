#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class BaseActorRenderContext;
class Block;
class BlockPos;
class BlockSource;
class ChestBlockActor;
class ShulkerBoxBlockActor;
namespace dragon { struct RenderMetadata; }
// clang-format on

class ActorBlockRenderer {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, std::unique_ptr<ChestBlockActor>>      mChest;
    ::ll::TypedStorage<8, 8, std::unique_ptr<ChestBlockActor>>      mEnderChest;
    ::ll::TypedStorage<8, 8, std::unique_ptr<ShulkerBoxBlockActor>> mShulkerBox;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ActorBlockRenderer();

    MCNAPI void render(
        ::BaseActorRenderContext&,
        ::dragon::RenderMetadata const&,
        ::BlockSource&,
        ::Block const*,
        ::BlockPos const&,
        float
    );

    MCNAPI ~ActorBlockRenderer();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
