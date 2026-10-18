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
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 16, std::shared_ptr<IGameEventListener>> mListener;
    ::ll::UntypedStorage<8, 80>                                    mRegistration;
    ::ll::UntypedStorage<8, 32>                                    mRegistrationLocation;
#else // @header-generator platform
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::IGameEventListener>>                       mListener;
    ::ll::TypedStorage<8, 80, ::std::optional<::gsl::final_action<::std::function<void()>>>> mRegistration;
    ::ll::TypedStorage<8, 24, ::std::optional<::GameEventDynamicRegistration::RegistrationLocation>>
        mRegistrationLocation;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    GameEventDynamicRegistration();

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI explicit GameEventDynamicRegistration(std::shared_ptr<IGameEventListener>);
#else // @header-generator platform
    MCAPI explicit GameEventDynamicRegistration(::std::shared_ptr<::IGameEventListener> listener);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _onActorChangedChunk(::BlockSource const&, ::ChunkPos, ::DimensionType);
#else // @header-generator platform
    MCAPI void _onActorChangedChunk(::BlockSource const& region, ::ChunkPos toChunkPos, ::DimensionType toDimensionId);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void onActorLoadedIntoChunk(::BlockSource const&, ::ChunkPos, ::DimensionType);

    MCNAPI void onActorMovedBetweenChunks(::BlockSource const&, ::ChunkPos, ::DimensionType);

    MCNAPI void onActorRemoved();
#else // @header-generator platform
    MCAPI void onActorRemoved();
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(std::shared_ptr<IGameEventListener>);
#else // @header-generator platform
    MCAPI void* $ctor(::std::shared_ptr<::IGameEventListener> listener);
#endif // @header-generator platform
    // NOLINTEND
};
