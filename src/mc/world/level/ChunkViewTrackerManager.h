#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class ChunkViewSource;
class DimensionManager;
class GameplayUserManager;
struct Bounds;
// clang-format on

class ChunkViewTrackerManager {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<8, 24>                                            mDimensionManager;
    ::ll::UntypedStorage<8, 24>                                            mGameplayUserManager;
    ::ll::TypedStorage<8, 24, std::vector<std::weak_ptr<ChunkViewSource>>> mChunkViewTrackers;
#else // @header-generator platform
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::DimensionManager> const>    mDimensionManager;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::GameplayUserManager> const> mGameplayUserManager;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::weak_ptr<::ChunkViewSource>>>          mChunkViewTrackers;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    ChunkViewTrackerManager();

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ChunkViewTrackerManager(
        ::gsl::not_null<Bedrock::NonOwnerPointer<DimensionManager>>,
        ::gsl::not_null<Bedrock::NonOwnerPointer<GameplayUserManager>>
#else // @header-generator platform
    MCAPI ChunkViewTrackerManager(
        ::Bedrock::NotNullNonOwnerPtr<::DimensionManager>    dimensionManager,
        ::Bedrock::NotNullNonOwnerPtr<::GameplayUserManager> gameplayUserManager
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void addChunkViewTracker(std::weak_ptr<ChunkViewSource>);
#else // @header-generator platform
    MCAPI void addChunkViewTracker(::std::weak_ptr<::ChunkViewSource> chunkViewSource);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void onChunkReload(::Bounds const&);
#else // @header-generator platform
    MCAPI void onChunkReload(::Bounds const& bound);
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(
        ::gsl::not_null<Bedrock::NonOwnerPointer<DimensionManager>>,
        ::gsl::not_null<Bedrock::NonOwnerPointer<GameplayUserManager>>
#else // @header-generator platform
    MCAPI void* $ctor(
        ::Bedrock::NotNullNonOwnerPtr<::DimensionManager>    dimensionManager,
        ::Bedrock::NotNullNonOwnerPtr<::GameplayUserManager> gameplayUserManager
#endif // @header-generator platform
    );
    // NOLINTEND
};
