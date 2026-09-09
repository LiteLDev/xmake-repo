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
    ::ll::UntypedStorage<8, 24>                                            mDimensionManager;
    ::ll::UntypedStorage<8, 24>                                            mGameplayUserManager;
    ::ll::TypedStorage<8, 24, std::vector<std::weak_ptr<ChunkViewSource>>> mChunkViewTrackers;
    // NOLINTEND

public:
    // prevent constructor by default
    ChunkViewTrackerManager();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ChunkViewTrackerManager(
        ::gsl::not_null<Bedrock::NonOwnerPointer<DimensionManager>>,
        ::gsl::not_null<Bedrock::NonOwnerPointer<GameplayUserManager>>
    );

    MCNAPI void addChunkViewTracker(std::weak_ptr<ChunkViewSource>);

    MCNAPI void onChunkReload(::Bounds const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::gsl::not_null<Bedrock::NonOwnerPointer<DimensionManager>>,
        ::gsl::not_null<Bedrock::NonOwnerPointer<GameplayUserManager>>
    );
    // NOLINTEND
};
