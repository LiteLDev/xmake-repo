#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#include "mc/world/level/BlockPos.h"
#endif // @header-generator platform

// auto generated inclusion list
#include "mc/world/level/BlockPos.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/world/redstone/circuit/ChunkCircuitComponentList.h"
#include "mc/world/redstone/circuit/components/CircuitComponentList.h"
#include "mc/world/redstone/circuit/components/CircuitComponentType.h"
#else // @header-generator platform
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
class BaseCircuitComponent;
class BlockSource;
class ChunkPos;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
class CircuitComponentList;
struct ChunkCircuitComponentList;
#endif // @header-generator platform
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
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::TypedStorage<8, 8, ::BaseCircuitComponent*>               mRawComponentPtr;
        ::ll::TypedStorage<8, 8, std::unique_ptr<BaseCircuitComponent>> mComponent;
        ::ll::TypedStorage<4, 12, ::BlockPos>                           mPos;
#else // @header-generator platform
        ::ll::TypedStorage<8, 8, ::BaseCircuitComponent*>                   mRawComponentPtr;
        ::ll::TypedStorage<8, 8, ::std::unique_ptr<::BaseCircuitComponent>> mComponent;
        ::ll::TypedStorage<4, 12, ::BlockPos>                               mPos;
#endif // @header-generator platform
        // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

    public:
        // prevent constructor by default
        PendingEntry& operator=(PendingEntry const&);
        PendingEntry(PendingEntry const&);
        PendingEntry();
#else // @header-generator platform
#endif // @header-generator platform
    };

#if defined(LL_PLAT_A) // @header-generator platform
    using ComponentMap = std::unordered_map<BlockPos, std::unique_ptr<BaseCircuitComponent>>;
#else // @header-generator platform
    using ComponentMap = ::std::unordered_map<::BlockPos, ::std::unique_ptr<::BaseCircuitComponent>>;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    using ComponentsPerChunkMap = std::unordered_map<BlockPos, ChunkCircuitComponentList>;
#else // @header-generator platform
    using ComponentsPerChunkMap = ::std::unordered_map<::BlockPos, ::ChunkCircuitComponentList>;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    using ComponentsPerPosMap = std::unordered_map<BlockPos, CircuitComponentList>;
#else // @header-generator platform
    using ComponentsPerPosMap = ::std::unordered_map<::BlockPos, ::CircuitComponentList>;
#endif // @header-generator platform

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 40, std::unordered_map<BlockPos, std::unique_ptr<BaseCircuitComponent>>> mAllComponents;
    ::ll::TypedStorage<8, 40, std::unordered_map<BlockPos, ChunkCircuitComponentList>>       mActiveComponentsPerChunk;
    ::ll::TypedStorage<8, 40, std::unordered_map<BlockPos, CircuitComponentList>>            mPowerAssociationMap;
    ::ll::TypedStorage<8, 40, std::unordered_map<BlockPos, CircuitSceneGraph::PendingEntry>> mPendingAdds;
    ::ll::TypedStorage<8, 40, std::unordered_map<BlockPos, CircuitSceneGraph::PendingEntry>> mPendingUpdates;
    ::ll::TypedStorage<8, 40, std::unordered_map<BlockPos, std::vector<BlockPos>>>           mComponentsToReEvaluate;
    ::ll::TypedStorage<8, 24, std::vector<CircuitSceneGraph::PendingEntry>>                  mPendingRemoves;
#else // @header-generator platform
    ComponentMap                                                        mAllComponents;
    ComponentsPerChunkMap                                               mActiveComponentsPerChunk;
    ComponentsPerPosMap                                                 mPowerAssociationMap;
    ::std::unordered_map<::BlockPos, ::CircuitSceneGraph::PendingEntry> mPendingAdds;
    ::std::unordered_map<::BlockPos, ::CircuitSceneGraph::PendingEntry> mPendingUpdates;
    ::std::unordered_map<::BlockPos, ::std::vector<::BlockPos>>         mComponentsToReEvaluate;
    ::std::vector<::CircuitSceneGraph::PendingEntry>                    mPendingRemoves;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void add(::BlockPos const&, std::unique_ptr<BaseCircuitComponent>);
#else // @header-generator platform
    MCAPI CircuitSceneGraph();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::BaseCircuitComponent* getBaseComponent(::BlockPos const&);
#else // @header-generator platform
    MCAPI void add(::BlockPos const& pos, ::std::unique_ptr<::BaseCircuitComponent> component);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::BaseCircuitComponent* getComponent(::BlockPos const&, ::CircuitComponentType);
#else // @header-generator platform
    MCAPI void invalidatePos(::BlockPos const& pos);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::BaseCircuitComponent* getFromPendingAdd(::BlockPos const&, ::CircuitComponentType);
#else // @header-generator platform
    MCAPI void preSetupPoweredBlocks(::ChunkPos const& chunkPos);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void invalidatePos(::BlockPos const&);
#else // @header-generator platform
    MCAPI void remove(::BlockPos const& pos, ::BaseCircuitComponent* component);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void preSetupPoweredBlocks(::ChunkPos const&);
#else // @header-generator platform
    MCAPI void update(::BlockSource* region);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void processPendingAdds();
#else // @header-generator platform
    MCAPI ~CircuitSceneGraph();
    // NOLINTEND
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void processPendingUpdates(::BlockSource*);

    MCNAPI void remove(::BlockPos const&, ::BaseCircuitComponent*);

    MCNAPI void removeComponent(::BlockPos const&);

    MCNAPI void update(::BlockSource*);

    MCNAPI ~CircuitSceneGraph();
#else // @header-generator platform
public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();
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
