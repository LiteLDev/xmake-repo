#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/BlockPos.h"
#include "mc/world/level/CachedChunkBlockSource.h"
#include "mc/world/level/block/BlockProperty.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/world/level/pathfinder/ActorPathingData.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/world/level/pathfinder/BinaryHeap.h"
#include "mc/world/level/pathfinder/CanClimbIntoNode.h"
#include "mc/world/level/pathfinder/CanJumpIntoNode.h"
#include "mc/world/level/pathfinder/NodeType.h"
#include "mc/world/level/pathfinder/PathCompletionType.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/world/level/pathfinder/PathfinderNode.h"
#else // @header-generator platform
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
class AABB;
class Actor;
class Block;
class BlockSource;
class BreakBlocksComponent;
#if defined(LL_PLAT_A) // @header-generator platform
class IPathBlockSource;
#else // @header-generator platform
#endif // @header-generator platform
class NavigationComponent;
class Path;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
class PathfinderNode;
#endif // @header-generator platform
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
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    ::ll::TypedStorage<8, 48, ::CachedChunkBlockSource>                           mRegion;
    ::ll::TypedStorage<8, 32, ::BinaryHeap>                                       mOpenSet;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::BlockPos, ::PathfinderNode>> mNodes;
    ::ll::TypedStorage<8, 256, ::std::array<::PathfinderNode*, 32>>               mNeighbors;
    bool                                                                          mCanPassDoors      : 1;
    bool                                                                          mCanOpenDoors      : 1;
    bool                                                                          mCanOpenIronDoors  : 1;
    bool                                                                          mAvoidWater        : 1;
    bool                                                                          mAvoidDamageBlocks : 1;
    bool                                                                          mCanFloat          : 1;
    bool                                                                          mCanPathOverLava   : 1;
    bool                                                                          mCanWalkInLava     : 1;
    bool                                                                          mIsAmphibious      : 1;
    bool                                                                          mAvoidPortals      : 1;
    bool                                                                          mCanBreach         : 1;
    bool                                                                          mCanJump           : 1;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    PathFinder();

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI PathFinder(::BlockSource&, ::NavigationComponent const&);
#else // @header-generator platform
    MCNAPI PathFinder(::BlockSource& region, ::NavigationComponent const& navigation);
#endif // @header-generator platform

    MCNAPI bool _checkBlockAndNeighborsProperty(
#if defined(LL_PLAT_A) // @header-generator platform
        ::ActorPathingData const&,
        ::BlockPos const&,
        ::Block const&,
        ::BlockProperty,
        int,
        ::BreakBlocksComponent const*,
        std::function<bool(const Block&, const BlockPos&)>
#else // @header-generator platform
        ::ActorPathingData const&                                data,
        ::BlockPos const&                                        pos,
        ::Block const&                                           block,
        ::BlockProperty                                          testProperty,
        int                                                      radius,
        ::BreakBlocksComponent const*                            breakBlocksComponent,
        ::std::function<bool(::Block const&, ::BlockPos const&)> extraCondition
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool _checkForDamagingBlock(
        ::ActorPathingData const&,
        ::BlockPos const&,
        ::Block const&,
        int,
        ::BreakBlocksComponent const*
#else // @header-generator platform
    MCNAPI ::NodeType _classifyDoorNode(
        ::ActorPathingData const& data,
        ::Block const&            testBlock,
        ::BlockPos const&         testPos,
        ::BlockPos const&         lastPathPos
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::NodeType
    _classifyDoorNode(::ActorPathingData const&, ::Block const&, ::BlockPos const&, ::BlockPos const&);

#else // @header-generator platform
#endif // @header-generator platform
    MCNAPI ::NodeType _classifyNode(
#if defined(LL_PLAT_A) // @header-generator platform
        ::ActorPathingData const&,
        ::BlockPos const&,
        ::Block const&,
        ::BlockPos const&,
        ::CanJumpIntoNode,
        ::CanClimbIntoNode
#else // @header-generator platform
        ::ActorPathingData const& data,
        ::BlockPos const&         lastPathPos,
        ::Block const&            testBlock,
        ::BlockPos const&         testPos,
        ::CanJumpIntoNode         jumpIntoNode,
        ::CanClimbIntoNode        climbIntoNode
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool _findNearestPathableNeighbor(::BlockPos&, ::ActorPathingData const&, ::BlockPos const&);
#else // @header-generator platform
    MCNAPI bool
    _findNearestPathableNeighbor(::BlockPos& outPos, ::ActorPathingData const& data, ::BlockPos const& testPos);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::unique_ptr<Path> _findPath(::ActorPathingData const&, float, float, float, float);
#else // @header-generator platform
    MCNAPI ::std::unique_ptr<::Path>
    _findPath(::ActorPathingData const& actorData, float xt, float yt, float zt, float maxDist);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    MCNAPI ::std::unique_ptr<::Path> _findPath(
        ::ActorPathingData const& data,
        ::PathfinderNode*         from,
        ::PathfinderNode*         to,
        ::PathfinderNode const&   size,
        float                     maxDist
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::optional<NodeType>
           _getPartialBlockNodeType(::BlockPos const&, ::BlockPos const&, ::ActorPathingData const&);
#else // @header-generator platform
    MCNAPI ::AABB _getAABBForHeightComputation(::BlockPos const& pos, ::Block const& block) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI float _getPathfindingMalus(::ActorPathingData const&, ::NodeType, ::BlockPos const&);
#else // @header-generator platform
    MCNAPI float _getHeightAboveBlock(::BlockPos const& blockPos, float const mobHeight) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::PathfinderNode* _getWaterNode(::ActorPathingData const&, ::BlockPos const&, ::BlockPos const&);
#else // @header-generator platform
    MCNAPI float _getHeightBelowBlock(::BlockPos const& blockPos, float const mobHeight) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool _isBlockWater(::BlockPos const&) const;
#else // @header-generator platform
    MCNAPI ::PathfinderNode* _getNode(::BlockPos const& pos, ::NodeType nodeType);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::NodeType _isFreeStartNode(::ActorPathingData const&, ::AABB const&, ::BlockPos const&, ::BlockPos const&);
#else // @header-generator platform
    MCNAPI ::PathfinderNode* _getNode(
        ::ActorPathingData const& data,
        ::BlockPos const&         fromPos,
        ::BlockPos const&         blockPos,
        ::PathfinderNode const&   size,
        float                     jumpHeight,
        ::CanClimbIntoNode        climbIntoNode
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool _isNeighborPotentiallyValid(::PathfinderNode const&, ::PathfinderNode const&, ::BlockPos const&, uint);
#else // @header-generator platform
    MCNAPI ::std::optional<::NodeType> _getPartialBlockNodeType(
        ::BlockPos const&         currentBlockPos,
        ::BlockPos const&         lastBlockPos,
        ::ActorPathingData const& data
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::unique_ptr<Path> findPath(::Actor&, ::Actor const&, float);
#else // @header-generator platform
    MCNAPI float _getPathfindingMalus(::ActorPathingData const& data, ::NodeType nodeType, ::BlockPos const& blockPos);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::unique_ptr<Path> findPath(::Actor&, int, int, int, float);
#else // @header-generator platform
    MCNAPI ::PathfinderNode*
    _getWaterNode(::ActorPathingData const& data, ::BlockPos const& lastPos, ::BlockPos const& blockPos);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::NodeType
    isFree(::Actor&, ::BlockPos const&, ::BlockPos const&, ::BlockPos const&, ::CanJumpIntoNode, ::CanClimbIntoNode);
#else // @header-generator platform
    MCNAPI ::NodeType _isFreeStartNode(
        ::ActorPathingData const& data,
        ::AABB const&             entityAABB,
        ::BlockPos const&         testPos,
        ::BlockPos const&         size
    );

    MCNAPI bool _isNeighborPotentiallyValid(
        ::PathfinderNode const& node,
        ::PathfinderNode const& target,
        ::BlockPos const&       offset,
        uint                    maxDistSqr
    );

    MCNAPI ::std::unique_ptr<::Path>
    _reconstructPath(::PathfinderNode* to, ::PathCompletionType const completionType, ::ActorUniqueID const actorId);

    MCNAPI ::std::unique_ptr<::Path> findPath(::Actor& from, ::Actor const& to, float maxDist);
#endif // @header-generator platform

    MCNAPI ::NodeType isFree(
#if defined(LL_PLAT_A) // @header-generator platform
        ::ActorPathingData const&,
        ::BlockPos const&,
        ::BlockPos const&,
        ::BlockPos const&,
        ::CanJumpIntoNode,
        ::CanClimbIntoNode
#else // @header-generator platform
        ::ActorPathingData const& data,
        ::BlockPos const&         lastPathPos,
        ::BlockPos const&         testPos,
        ::BlockPos const&         size,
        ::CanJumpIntoNode         jumpIntoNode,
        ::CanClimbIntoNode        climbIntoNode
#endif // @header-generator platform
    );

    MCNAPI ~PathFinder();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::ActorPathingData extractPathingData(::Actor&, ::PathFinder::ExtractionPurpose, std::optional<Vec3>);
#else // @header-generator platform
    MCNAPI static ::ActorPathingData extractPathingData(
        ::Actor&                        mutableActor,
        ::PathFinder::ExtractionPurpose purpose,
        ::std::optional<::Vec3>         targetPos
    );
#endif // @header-generator platform
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::PreferredPathDescription const& DEFAULT_DESC();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::BlockSource&, ::NavigationComponent const&);
#else // @header-generator platform
    MCNAPI void* $ctor(::BlockSource& region, ::NavigationComponent const& navigation);
#endif // @header-generator platform
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
