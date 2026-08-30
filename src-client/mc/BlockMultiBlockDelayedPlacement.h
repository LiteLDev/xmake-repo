#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/world/level/chunk/IRequestAction.h"

// auto generated forward declare list
// clang-format off
class Block;
class BlockChangeContext;
class BlockPos;
class BlockSource;
class CompoundTag;
class Dimension;
class IUnknownBlockTypeRegistry;
class ServerLevel;
// clang-format on

class BlockMultiBlockDelayedPlacement : public ::IRequestAction {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 12> mUnkfb572b;
    ::ll::UntypedStorage<1, 1>  mUnk1321be;
    ::ll::UntypedStorage<1, 1>  mUnk5aa25f;
    ::ll::UntypedStorage<8, 8>  mUnk35a386;
    // NOLINTEND

public:
    // prevent constructor by default
    BlockMultiBlockDelayedPlacement& operator=(BlockMultiBlockDelayedPlacement const&);
    BlockMultiBlockDelayedPlacement(BlockMultiBlockDelayedPlacement const&);
    BlockMultiBlockDelayedPlacement();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void execute(::ServerLevel&, ::Dimension& dimension) /*override*/;

    virtual void serialize(::CompoundTag& tag) /*override*/;

    virtual bool operator==(::IRequestAction const& action) const /*override*/;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static bool isValidTag(::CompoundTag const& tag);

    MCNAPI static ::std::unique_ptr<::BlockMultiBlockDelayedPlacement>
    load(::CompoundTag const& tag, ::Bedrock::NonOwnerPointer<::IUnknownBlockTypeRegistry> unknownBlockTypeRegistry);

    MCNAPI static bool tryQueueOrExecuteAction(
        ::BlockSource const&        region,
        ::Block const&              blockToPlace,
        ::BlockPos const&           pos,
        bool                        isClientSide,
        ::BlockChangeContext const& blockChangeContext
    );
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $execute(::ServerLevel&, ::Dimension& dimension);

    MCNAPI void $serialize(::CompoundTag& tag);


    // NOLINTEND
};
