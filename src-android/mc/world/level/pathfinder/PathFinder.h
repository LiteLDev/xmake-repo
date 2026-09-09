#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/BlockPos.h"
#include "mc/world/level/CachedChunkBlockSource.h"
#include "mc/world/level/block/BlockProperty.h"
#include "mc/world/level/pathfinder/ActorPathingData.h"
#include "mc/world/level/pathfinder/BinaryHeap.h"
#include "mc/world/level/pathfinder/CanClimbIntoNode.h"
#include "mc/world/level/pathfinder/CanJumpIntoNode.h"
#include "mc/world/level/pathfinder/NodeType.h"
#include "mc/world/level/pathfinder/PathCompletionType.h"
#include "mc/world/level/pathfinder/PathfinderNode.h"

// auto generated forward declare list
// clang-format off
class AABB;
class Actor;
class Block;
class BlockSource;
class BreakBlocksComponent;
class IPathBlockSource;
class NavigationComponent;
class Path;
class Vec3;
struct ActorPathingData;
struct ActorUniqueID;
struct PreferredPathDescription;
// clang-format on

class PathFinder {
public:
    // PathFinder inner types define
    enum class ExtractionPurpose : uchar {
        Pathing = 0,
        IsFree  = 1,
    };

    enum class NeighborDiagonalType : int {
        Default = 0,
        Liquid  = 1,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 48, ::CachedChunkBlockSource>                     mRegion;
    ::ll::TypedStorage<8, 32, ::BinaryHeap>                                 mOpenSet;
    ::ll::TypedStorage<8, 40, std::unordered_map<BlockPos, PathfinderNode>> mNodes;
    ::ll::TypedStorage<8, 256, std::array<PathfinderNode*, 32>>             mNeighbors;
    bool                                                                    mCanPassDoors      : 1;
    bool                                                                    mCanOpenDoors      : 1;
    bool                                                                    mCanOpenIronDoors  : 1;
    bool                                                                    mAvoidWater        : 1;
    bool                                                                    mAvoidDamageBlocks : 1;
    bool                                                                    mCanFloat          : 1;
    bool                                                                    mCanPathOverLava   : 1;
    bool                                                                    mCanWalkInLava     : 1;
    bool                                                                    mIsAmphibious      : 1;
    bool                                                                    mAvoidPortals      : 1;
    bool                                                                    mCanBreach         : 1;
    bool                                                                    mCanJump           : 1;
    // NOLINTEND

public:
    // prevent constructor by default
    PathFinder();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI PathFinder(::BlockSource&, ::NavigationComponent const&);

    MCNAPI bool _checkBlockAndNeighborsProperty(
        ::ActorPathingData const&,
        ::BlockPos const&,
        ::Block const&,
        ::BlockProperty,
        int,
        ::BreakBlocksComponent const*,
        std::function<bool(const Block&, const BlockPos&)>
    );

    MCNAPI bool _checkForDamagingBlock(
        ::ActorPathingData const&,
        ::BlockPos const&,
        ::Block const&,
        int,
        ::BreakBlocksComponent const*
    );

    MCNAPI ::NodeType
    _classifyDoorNode(::ActorPathingData const&, ::Block const&, ::BlockPos const&, ::BlockPos const&);

    MCNAPI ::NodeType _classifyNode(
        ::ActorPathingData const&,
        ::BlockPos const&,
        ::Block const&,
        ::BlockPos const&,
        ::CanJumpIntoNode,
        ::CanClimbIntoNode
    );

    MCNAPI bool _findNearestPathableNeighbor(::BlockPos&, ::ActorPathingData const&, ::BlockPos const&);

    MCNAPI std::unique_ptr<Path> _findPath(::ActorPathingData const&, float, float, float, float);

    MCNAPI std::unique_ptr<Path>
           _findPath(::ActorPathingData const&, ::PathfinderNode*, ::PathfinderNode*, ::PathfinderNode const&, float);

    MCNAPI ::AABB _getAABBForHeightComputation(::BlockPos const&, ::Block const&) const;

    MCNAPI float _getHeightAboveBlock(::BlockPos const&, float const) const;

    MCNAPI float _getHeightBelowBlock(::BlockPos const&, float const) const;

    MCNAPI ::PathfinderNode* _getNode(::BlockPos const&, ::NodeType);

    MCNAPI ::PathfinderNode* _getNode(
        ::ActorPathingData const&,
        ::BlockPos const&,
        ::BlockPos const&,
        ::PathfinderNode const&,
        float,
        ::CanClimbIntoNode
    );

    MCNAPI std::optional<NodeType>
           _getPartialBlockNodeType(::BlockPos const&, ::BlockPos const&, ::ActorPathingData const&);

    MCNAPI float _getPathfindingMalus(::ActorPathingData const&, ::NodeType, ::BlockPos const&);

    MCNAPI ::PathfinderNode* _getWaterNode(::ActorPathingData const&, ::BlockPos const&, ::BlockPos const&);

    MCNAPI bool _isBlockWater(::BlockPos const&) const;

    MCNAPI ::NodeType _isFreeStartNode(::ActorPathingData const&, ::AABB const&, ::BlockPos const&, ::BlockPos const&);

    MCNAPI bool _isNeighborPotentiallyValid(::PathfinderNode const&, ::PathfinderNode const&, ::BlockPos const&, uint);

    MCNAPI std::unique_ptr<Path> findPath(::Actor&, ::Actor const&, float);

    MCNAPI std::unique_ptr<Path> findPath(::Actor&, int, int, int, float);

    MCNAPI ::NodeType
    isFree(::Actor&, ::BlockPos const&, ::BlockPos const&, ::BlockPos const&, ::CanJumpIntoNode, ::CanClimbIntoNode);

    MCNAPI ::NodeType isFree(
        ::ActorPathingData const&,
        ::BlockPos const&,
        ::BlockPos const&,
        ::BlockPos const&,
        ::CanJumpIntoNode,
        ::CanClimbIntoNode
    );

    MCNAPI ~PathFinder();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::ActorPathingData extractPathingData(::Actor&, ::PathFinder::ExtractionPurpose, std::optional<Vec3>);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::PreferredPathDescription const& DEFAULT_DESC();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::BlockSource&, ::NavigationComponent const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
