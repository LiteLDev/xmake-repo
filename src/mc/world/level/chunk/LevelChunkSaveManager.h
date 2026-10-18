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
#if defined(LL_PLAT_A) // @header-generator platform
    struct LevelChunkQueuedSavingElement;
#else // @header-generator platform
#endif // @header-generator platform
    class CompareLevelChunkQueuedSavingElement;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    struct LevelChunkQueuedSavingElement;
#endif // @header-generator platform
    // clang-format on

    // LevelChunkSaveManager inner types define
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    class CompareLevelChunkQueuedSavingElement {};

#endif // @header-generator platform
    struct LevelChunkQueuedSavingElement {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, int>             mDist;
        ::ll::TypedStorage<8, 8, ::ChunkPos>      mPosition;
        ::ll::TypedStorage<4, 4, ::DimensionType> mDimensionId;
        // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

    public:
        // prevent constructor by default
        LevelChunkQueuedSavingElement& operator=(LevelChunkQueuedSavingElement const&);
        LevelChunkQueuedSavingElement(LevelChunkQueuedSavingElement const&);
        LevelChunkQueuedSavingElement();
#else // @header-generator platform
#endif // @header-generator platform
    };
#if defined(LL_PLAT_A) // @header-generator platform

    class CompareLevelChunkQueuedSavingElement {};
#else // @header-generator platform
#endif // @header-generator platform

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    ::ll::TypedStorage<8, 8, ::gsl::not_null<std::unique_ptr<ILevelChunkSaveManagerProxy>> const> mLevelChunkSaveManagerProxy;
    ::ll::TypedStorage<8, 32, std::priority_queue<LevelChunkSaveManager::LevelChunkQueuedSavingElement, std::vector<LevelChunkSaveManager::LevelChunkQueuedSavingElement>, LevelChunkSaveManager::CompareLevelChunkQueuedSavingElement>> mLevelChunkSaveQueue;
    ::ll::TypedStorage<1, 1, bool> mChunkSaveInProgress;
    ::ll::UntypedStorage<8, 24> mGameplayUserManager;
    ::ll::UntypedStorage<8, 24> mDimensionManager;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mOnChunkLoadedSubscription;
    // clang-format on
#else // @header-generator platform
    ::ll::TypedStorage<8, 8, ::gsl::not_null<::std::unique_ptr<::ILevelChunkSaveManagerProxy>> const>
        mLevelChunkSaveManagerProxy;
    ::ll::TypedStorage<
        8,
        32,
        ::std::priority_queue<
            ::LevelChunkSaveManager::LevelChunkQueuedSavingElement,
            ::std::vector<::LevelChunkSaveManager::LevelChunkQueuedSavingElement>,
            ::LevelChunkSaveManager::CompareLevelChunkQueuedSavingElement>>
                                                                                          mLevelChunkSaveQueue;
    ::ll::TypedStorage<1, 1, bool>                                                        mChunkSaveInProgress;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::GameplayUserManager> const> mGameplayUserManager;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::DimensionManager> const>    mDimensionManager;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>                            mOnChunkLoadedSubscription;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    LevelChunkSaveManager();

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI LevelChunkSaveManager(
        std::unique_ptr<ILevelChunkSaveManagerProxy>,
        ::gsl::not_null<Bedrock::NonOwnerPointer<GameplayUserManager>>,
        ::gsl::not_null<Bedrock::NonOwnerPointer<DimensionManager>>
#else // @header-generator platform
    MCAPI LevelChunkSaveManager(
        ::std::unique_ptr<::ILevelChunkSaveManagerProxy>     levelChunkSaverProxy,
        ::Bedrock::NotNullNonOwnerPtr<::GameplayUserManager> gameplayUserManager,
        ::Bedrock::NotNullNonOwnerPtr<::DimensionManager>    dimensionManager
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _findRandomChunkToSave();
#else // @header-generator platform
    MCAPI void _findRandomChunkToSave();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _onChunkLoaded(::ChunkSource&, ::LevelChunk&, int);
#else // @header-generator platform
    MCAPI void _onChunkLoaded(::ChunkSource& chunkSource, ::LevelChunk& levelChunk, int closestPlayerDistanceSquared);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool _shouldDoSave() const;
#else // @header-generator platform
    MCAPI bool _shouldDoSave() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool isChunkSaveInProgress();
#else // @header-generator platform
    MCAPI void registerForLevelChunkManagerEvents(::ILevelChunkEventManagerConnector& levelChunkEventManagerConnector);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void registerForLevelChunkManagerEvents(::ILevelChunkEventManagerConnector&);
#else // @header-generator platform
    MCAPI void trySaveChunks();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void startLeaveGame();

    MCNAPI void trySaveChunks();

    MCNAPI ~LevelChunkSaveManager();
#else // @header-generator platform
    MCAPI ~LevelChunkSaveManager();
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(
        std::unique_ptr<ILevelChunkSaveManagerProxy>,
        ::gsl::not_null<Bedrock::NonOwnerPointer<GameplayUserManager>>,
        ::gsl::not_null<Bedrock::NonOwnerPointer<DimensionManager>>
#else // @header-generator platform
    MCAPI void* $ctor(
        ::std::unique_ptr<::ILevelChunkSaveManagerProxy>     levelChunkSaverProxy,
        ::Bedrock::NotNullNonOwnerPtr<::GameplayUserManager> gameplayUserManager,
        ::Bedrock::NotNullNonOwnerPtr<::DimensionManager>    dimensionManager
#endif // @header-generator platform
    );
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
