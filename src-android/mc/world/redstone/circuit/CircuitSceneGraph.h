#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/BlockPos.h"
#include "mc/world/redstone/circuit/ChunkCircuitComponentList.h"
#include "mc/world/redstone/circuit/components/CircuitComponentList.h"
#include "mc/world/redstone/circuit/components/CircuitComponentType.h"

// auto generated forward declare list
// clang-format off
class BaseCircuitComponent;
class BlockSource;
class ChunkPos;
// clang-format on

class CircuitSceneGraph {
public:
    // CircuitSceneGraph inner types declare
    // clang-format off
    class PendingEntry;
    // clang-format on

    // CircuitSceneGraph inner types define
    class PendingEntry {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, ::BaseCircuitComponent*>               mRawComponentPtr;
        ::ll::TypedStorage<8, 8, std::unique_ptr<BaseCircuitComponent>> mComponent;
        ::ll::TypedStorage<4, 12, ::BlockPos>                           mPos;
        // NOLINTEND

    public:
        // prevent constructor by default
        PendingEntry& operator=(PendingEntry const&);
        PendingEntry(PendingEntry const&);
        PendingEntry();
    };

    using ComponentMap = std::unordered_map<BlockPos, std::unique_ptr<BaseCircuitComponent>>;

    using ComponentsPerChunkMap = std::unordered_map<BlockPos, ChunkCircuitComponentList>;

    using ComponentsPerPosMap = std::unordered_map<BlockPos, CircuitComponentList>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 40, std::unordered_map<BlockPos, std::unique_ptr<BaseCircuitComponent>>> mAllComponents;
    ::ll::TypedStorage<8, 40, std::unordered_map<BlockPos, ChunkCircuitComponentList>>       mActiveComponentsPerChunk;
    ::ll::TypedStorage<8, 40, std::unordered_map<BlockPos, CircuitComponentList>>            mPowerAssociationMap;
    ::ll::TypedStorage<8, 40, std::unordered_map<BlockPos, CircuitSceneGraph::PendingEntry>> mPendingAdds;
    ::ll::TypedStorage<8, 40, std::unordered_map<BlockPos, CircuitSceneGraph::PendingEntry>> mPendingUpdates;
    ::ll::TypedStorage<8, 40, std::unordered_map<BlockPos, std::vector<BlockPos>>>           mComponentsToReEvaluate;
    ::ll::TypedStorage<8, 24, std::vector<CircuitSceneGraph::PendingEntry>>                  mPendingRemoves;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void add(::BlockPos const&, std::unique_ptr<BaseCircuitComponent>);

    MCNAPI ::BaseCircuitComponent* getBaseComponent(::BlockPos const&);

    MCNAPI ::BaseCircuitComponent* getComponent(::BlockPos const&, ::CircuitComponentType);

    MCNAPI ::BaseCircuitComponent* getFromPendingAdd(::BlockPos const&, ::CircuitComponentType);

    MCNAPI void invalidatePos(::BlockPos const&);

    MCNAPI void preSetupPoweredBlocks(::ChunkPos const&);

    MCNAPI void processPendingAdds();

    MCNAPI void processPendingUpdates(::BlockSource*);

    MCNAPI void remove(::BlockPos const&, ::BaseCircuitComponent*);

    MCNAPI void removeComponent(::BlockPos const&);

    MCNAPI void update(::BlockSource*);

    MCNAPI ~CircuitSceneGraph();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
