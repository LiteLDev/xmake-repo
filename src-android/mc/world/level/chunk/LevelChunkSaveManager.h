#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"
#include "mc/world/level/ChunkPos.h"
#include "mc/world/level/dimension/DimensionType.h"

// auto generated forward declare list
// clang-format off
class ChunkSource;
class DimensionManager;
class GameplayUserManager;
class ILevelChunkEventManagerConnector;
class ILevelChunkSaveManagerProxy;
class LevelChunk;
// clang-format on

class LevelChunkSaveManager {
public:
    // LevelChunkSaveManager inner types declare
    // clang-format off
    struct LevelChunkQueuedSavingElement;
    class CompareLevelChunkQueuedSavingElement;
    // clang-format on

    // LevelChunkSaveManager inner types define
    struct LevelChunkQueuedSavingElement {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, int>             mDist;
        ::ll::TypedStorage<8, 8, ::ChunkPos>      mPosition;
        ::ll::TypedStorage<4, 4, ::DimensionType> mDimensionId;
        // NOLINTEND

    public:
        // prevent constructor by default
        LevelChunkQueuedSavingElement& operator=(LevelChunkQueuedSavingElement const&);
        LevelChunkQueuedSavingElement(LevelChunkQueuedSavingElement const&);
        LevelChunkQueuedSavingElement();
    };

    class CompareLevelChunkQueuedSavingElement {};

public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<8, 8, ::gsl::not_null<std::unique_ptr<ILevelChunkSaveManagerProxy>> const> mLevelChunkSaveManagerProxy;
    ::ll::TypedStorage<8, 32, std::priority_queue<LevelChunkSaveManager::LevelChunkQueuedSavingElement, std::vector<LevelChunkSaveManager::LevelChunkQueuedSavingElement>, LevelChunkSaveManager::CompareLevelChunkQueuedSavingElement>> mLevelChunkSaveQueue;
    ::ll::TypedStorage<1, 1, bool> mChunkSaveInProgress;
    ::ll::UntypedStorage<8, 24> mGameplayUserManager;
    ::ll::UntypedStorage<8, 24> mDimensionManager;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mOnChunkLoadedSubscription;
    // clang-format on
    // NOLINTEND

public:
    // prevent constructor by default
    LevelChunkSaveManager();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI LevelChunkSaveManager(
        std::unique_ptr<ILevelChunkSaveManagerProxy>,
        ::gsl::not_null<Bedrock::NonOwnerPointer<GameplayUserManager>>,
        ::gsl::not_null<Bedrock::NonOwnerPointer<DimensionManager>>
    );

    MCNAPI void _findRandomChunkToSave();

    MCNAPI void _onChunkLoaded(::ChunkSource&, ::LevelChunk&, int);

    MCNAPI bool _shouldDoSave() const;

    MCNAPI bool isChunkSaveInProgress();

    MCNAPI void registerForLevelChunkManagerEvents(::ILevelChunkEventManagerConnector&);

    MCNAPI void startLeaveGame();

    MCNAPI void trySaveChunks();

    MCNAPI ~LevelChunkSaveManager();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        std::unique_ptr<ILevelChunkSaveManagerProxy>,
        ::gsl::not_null<Bedrock::NonOwnerPointer<GameplayUserManager>>,
        ::gsl::not_null<Bedrock::NonOwnerPointer<DimensionManager>>
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
