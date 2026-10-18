#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/redstone/circuit/CircuitSceneGraph.h"

// auto generated forward declare list
// clang-format off
class BaseCircuitComponent;
class BlockPos;
class BlockSource;
#if defined(LL_PLAT_A) // @header-generator platform
class ChunkPos;
#else // @header-generator platform
#endif // @header-generator platform
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
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<1, 1, bool>                  mLockGraph;
    ::ll::TypedStorage<8, 264, ::CircuitSceneGraph> mSceneGraph;
    ::ll::UntypedStorage<8, 24>                     mAddedLevelChunk;
    ::ll::TypedStorage<1, 1, bool>                  mHasBeenEvaluated;
#else // @header-generator platform
    ::ll::TypedStorage<1, 1, bool>                                                mLockGraph;
    ::ll::TypedStorage<8, 408, ::CircuitSceneGraph>                               mSceneGraph;
    ::ll::TypedStorage<8, 24, ::std::vector<::CircuitSystem::LevelChunkTracking>> mAddedLevelChunk;
    ::ll::TypedStorage<1, 1, bool>                                                mHasBeenEvaluated;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI CircuitSystem();
#else // @header-generator platform
    MCAPI ::BaseCircuitComponent*
    createComponent(::BlockPos const& pos, uchar direction, ::std::unique_ptr<::BaseCircuitComponent> newComponent);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::BaseCircuitComponent* createComponent(::BlockPos const&, uchar, std::unique_ptr<BaseCircuitComponent>);
#else // @header-generator platform
    MCAPI void evaluate(::BlockSource* region);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void evaluate(::BlockSource*);
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI void evaluateComponents(bool bOnlyProducers);
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI int getStrength(::BlockPos const&);
#else // @header-generator platform
    MCAPI bool isConnectionAllowed(
        ::BaseCircuitComponent& component,
        ::BlockPos const&       componentPos,
        uchar                   connectionDirection,
        bool                    directlyPowered,
        bool                    speculativeConnection
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void invalidatePos(::BlockPos const&);
#else // @header-generator platform
    MCAPI void setStrength(::BlockPos const& pos, int strength);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    MCAPI void updateBlocks(::BlockSource& region, ::BlockPos const& chunkPos);
#endif // @header-generator platform
    // NOLINTEND
};
