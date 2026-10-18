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
#if defined(LL_PLAT_A) // @header-generator platform
    struct EntityCommandTarget;
#else // @header-generator platform
#endif // @header-generator platform
    struct BlockCommandData;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    struct EntityCommandTarget;
#endif // @header-generator platform
    // clang-format on

    // CommandBlockUpdatePacketPayload inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    struct EntityCommandTarget {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, ::ActorRuntimeID> mEntityId;
        // NOLINTEND
    };

#else // @header-generator platform
#endif // @header-generator platform
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

#if defined(LL_PLAT_A) // @header-generator platform
    using TargetVariant = std::variant<
        CommandBlockUpdatePacketPayload::EntityCommandTarget,
        CommandBlockUpdatePacketPayload::BlockCommandData>;
#else // @header-generator platform
    struct EntityCommandTarget {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, ::ActorRuntimeID> mEntityId;
        // NOLINTEND
    };

    using TargetVariant = ::std::variant<
        ::CommandBlockUpdatePacketPayload::EntityCommandTarget,
        ::CommandBlockUpdatePacketPayload::BlockCommandData>;
#endif // @header-generator platform

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    ::ll::TypedStorage<8, 24, std::variant<CommandBlockUpdatePacketPayload::EntityCommandTarget, CommandBlockUpdatePacketPayload::BlockCommandData>> mTarget;
    ::ll::TypedStorage<8, 24, std::string> mCommand;
    ::ll::TypedStorage<8, 24, std::string> mLastOutput;
    ::ll::TypedStorage<8, 56, ::Bedrock::Safety::RedactableString> mName;
    ::ll::TypedStorage<1, 1, bool> mTrackOutput;
    ::ll::TypedStorage<4, 4, int> mTickDelay;
    ::ll::TypedStorage<1, 1, bool> mExecuteOnFirstTick;
    // clang-format on
#else // @header-generator platform
    ::ll::TypedStorage<
        8,
        24,
        ::std::variant<
            ::CommandBlockUpdatePacketPayload::EntityCommandTarget,
            ::CommandBlockUpdatePacketPayload::BlockCommandData>>
                                                                   mTarget;
    ::ll::TypedStorage<8, 32, ::std::string>                       mCommand;
    ::ll::TypedStorage<8, 32, ::std::string>                       mLastOutput;
    ::ll::TypedStorage<8, 72, ::Bedrock::Safety::RedactableString> mName;
    ::ll::TypedStorage<1, 1, bool>                                 mTrackOutput;
    ::ll::TypedStorage<4, 4, int>                                  mTickDelay;
    ::ll::TypedStorage<1, 1, bool>                                 mExecuteOnFirstTick;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    CommandBlockUpdatePacketPayload& operator=(CommandBlockUpdatePacketPayload const&);
    CommandBlockUpdatePacketPayload();
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI CommandBlockUpdatePacketPayload(::BlockSource&, ::CommandBlockActor const&);
#else // @header-generator platform
    MCAPI CommandBlockUpdatePacketPayload(::CommandBlockUpdatePacketPayload const&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI CommandBlockUpdatePacketPayload(::ActorRuntimeID, ::BaseCommandBlock const&);
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI CommandBlockUpdatePacketPayload(::ActorRuntimeID entityId, ::BaseCommandBlock const& baseCmdBlock);

    MCAPI CommandBlockUpdatePacketPayload(::BlockSource& region, ::CommandBlockActor const& cmdBlock);
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::CommandBlockUpdatePacketPayload::BlockCommandData const* tryGetBlockData() const;

    MCNAPI ::CommandBlockUpdatePacketPayload::EntityCommandTarget const* tryGetEntityTarget() const;

    MCNAPI ~CommandBlockUpdatePacketPayload();
#else // @header-generator platform
    MCAPI ~CommandBlockUpdatePacketPayload();
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::BlockSource&, ::CommandBlockActor const&);
#else // @header-generator platform
    MCAPI void* $ctor(::CommandBlockUpdatePacketPayload const&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::ActorRuntimeID, ::BaseCommandBlock const&);
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI void* $ctor(::ActorRuntimeID entityId, ::BaseCommandBlock const& baseCmdBlock);

    MCAPI void* $ctor(::BlockSource& region, ::CommandBlockActor const& cmdBlock);
#endif
#endif // @header-generator platform
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI void $dtor();
#endif // @header-generator platform
    // NOLINTEND
};
