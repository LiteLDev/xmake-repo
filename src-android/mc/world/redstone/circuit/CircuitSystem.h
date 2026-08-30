#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/redstone/circuit/CircuitSceneGraph.h"

// auto generated forward declare list
// clang-format off
class BaseCircuitComponent;
class BlockPos;
class BlockSource;
class ChunkPos;
// clang-format on

class CircuitSystem {
public:
    // CircuitSystem inner types declare
    // clang-format off
    class LevelChunkTracking;
    // clang-format on

    // CircuitSystem inner types define
    class LevelChunkTracking {};

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>                  mLockGraph;
    ::ll::TypedStorage<8, 264, ::CircuitSceneGraph> mSceneGraph;
    ::ll::UntypedStorage<8, 24>                     mAddedLevelChunk;
    ::ll::TypedStorage<1, 1, bool>                  mHasBeenEvaluated;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI CircuitSystem();

    MCNAPI ::BaseCircuitComponent* createComponent(::BlockPos const&, uchar, std::unique_ptr<BaseCircuitComponent>);

    MCNAPI void evaluate(::BlockSource*);

    MCNAPI int getStrength(::BlockPos const&);

    MCNAPI void invalidatePos(::BlockPos const&);

    MCNAPI bool isAvailableAt(::BlockPos const&);

    MCNAPI bool isConnectionAllowed(::BaseCircuitComponent&, ::BlockPos const&, uchar, bool, bool);

    MCNAPI void preSetupPoweredBlocks(::ChunkPos const&);

    MCNAPI void removeComponents(::BlockPos const&);

    MCNAPI void setStrength(::BlockPos const&, int);

    MCNAPI void updateBlocks(::BlockSource&, ::BlockPos const&);

    MCNAPI void updateDependencies(::BlockSource*);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND
};
