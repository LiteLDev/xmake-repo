#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/legacy/ActorRuntimeID.h"
#include "mc/safety/RedactableString.h"
#include "mc/world/level/BlockPos.h"
#include "mc/world/level/block/CommandBlockMode.h"

// auto generated forward declare list
// clang-format off
class BaseCommandBlock;
class BlockSource;
class CommandBlockActor;
// clang-format on

struct CommandBlockUpdatePacketPayload {
public:
    // CommandBlockUpdatePacketPayload inner types declare
    // clang-format off
    struct EntityCommandTarget;
    struct BlockCommandData;
    // clang-format on

    // CommandBlockUpdatePacketPayload inner types define
    struct EntityCommandTarget {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, ::ActorRuntimeID> mEntityId;
        // NOLINTEND
    };

    struct BlockCommandData {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 12, ::BlockPos>        mBlockPos;
        ::ll::TypedStorage<2, 2, ::CommandBlockMode> mMode;
        ::ll::TypedStorage<1, 1, bool>               mRedstoneMode;
        ::ll::TypedStorage<1, 1, bool>               mIsConditional;
        // NOLINTEND
    };

    using TargetVariant = std::variant<
        CommandBlockUpdatePacketPayload::EntityCommandTarget,
        CommandBlockUpdatePacketPayload::BlockCommandData>;

public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<8, 24, std::variant<CommandBlockUpdatePacketPayload::EntityCommandTarget, CommandBlockUpdatePacketPayload::BlockCommandData>> mTarget;
    ::ll::TypedStorage<8, 24, std::string> mCommand;
    ::ll::TypedStorage<8, 24, std::string> mLastOutput;
    ::ll::TypedStorage<8, 56, ::Bedrock::Safety::RedactableString> mName;
    ::ll::TypedStorage<1, 1, bool> mTrackOutput;
    ::ll::TypedStorage<4, 4, int> mTickDelay;
    ::ll::TypedStorage<1, 1, bool> mExecuteOnFirstTick;
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI CommandBlockUpdatePacketPayload(::BlockSource&, ::CommandBlockActor const&);

    MCNAPI CommandBlockUpdatePacketPayload(::ActorRuntimeID, ::BaseCommandBlock const&);

    MCNAPI ::CommandBlockUpdatePacketPayload::BlockCommandData const* tryGetBlockData() const;

    MCNAPI ::CommandBlockUpdatePacketPayload::EntityCommandTarget const* tryGetEntityTarget() const;

    MCNAPI ~CommandBlockUpdatePacketPayload();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::BlockSource&, ::CommandBlockActor const&);

    MCNAPI void* $ctor(::ActorRuntimeID, ::BaseCommandBlock const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
