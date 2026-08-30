#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/ChunkPos.h"
#include "mc/world/level/dimension/DimensionType.h"

// auto generated forward declare list
// clang-format off
class BlockSource;
class IGameEventListener;
// clang-format on

class GameEventDynamicRegistration {
public:
    // GameEventDynamicRegistration inner types declare
    // clang-format off
    struct RegistrationLocation;
    // clang-format on

    // GameEventDynamicRegistration inner types define
    struct RegistrationLocation {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, ::ChunkPos>      mChunkPos;
        ::ll::TypedStorage<4, 4, ::DimensionType> mDimensionId;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, std::shared_ptr<IGameEventListener>> mListener;
    ::ll::UntypedStorage<8, 80>                                    mRegistration;
    ::ll::UntypedStorage<8, 32>                                    mRegistrationLocation;
    // NOLINTEND

public:
    // prevent constructor by default
    GameEventDynamicRegistration();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit GameEventDynamicRegistration(std::shared_ptr<IGameEventListener>);

    MCNAPI void _onActorChangedChunk(::BlockSource const&, ::ChunkPos, ::DimensionType);

    MCNAPI void onActorLoadedIntoChunk(::BlockSource const&, ::ChunkPos, ::DimensionType);

    MCNAPI void onActorMovedBetweenChunks(::BlockSource const&, ::ChunkPos, ::DimensionType);

    MCNAPI void onActorRemoved();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::shared_ptr<IGameEventListener>);
    // NOLINTEND
};
