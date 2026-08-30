#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/UniqueOwnerPointer.h"
#include "mc/deps/game_refs/WeakRef.h"
#include "mc/world/level/dimension/DimensionDefinitionGroup.h"

// auto generated forward declare list
// clang-format off
class EntityContext;
class LevelData;
namespace VoxelShapes { class VoxelShapeRegistry; }
// clang-format on

struct ClientCreateLevelArguments {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>                                             mIsServerAuthSoundEnabled;
    ::ll::TypedStorage<1, 1, bool>                                             mServerEnabledClientSideGeneration;
    ::ll::UntypedStorage<1, 6>                                                 mBlockNetworkIdsAreHashes;
    ::ll::UntypedStorage<1, 24>                                                mLevelEntity;
    ::ll::TypedStorage<8, 24, ::DimensionDefinitionGroup>                      mDimensionDefinitionGroup;
    ::ll::UntypedStorage<8, 16>                                                mLevelData;
    ::ll::TypedStorage<8, 8, std::unique_ptr<VoxelShapes::VoxelShapeRegistry>> mShapeRegistry;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~ClientCreateLevelArguments();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
