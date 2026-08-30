#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec2.h"
#include "mc/deps/core/math/Vec3.h"
#include "mc/legacy/ActorUniqueID.h"
#include "mc/world/level/BlockPos.h"
#include "mc/world/phys/AABB.h"

// auto generated forward declare list
// clang-format off
class Block;
class BlockDescriptor;
class BlockType;
class BreakBlocksComponent;
struct BreakBlocksDescription;
struct PreferredPathDescription;
// clang-format on

struct ActorPathingData {
public:
    // ActorPathingData inner types declare
    // clang-format off
    struct MinMaxHeightCacheEntry;
    struct HomeRestrictionInfo;
    // clang-format on

    // ActorPathingData inner types define
    struct MinMaxHeightCacheEntry {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, float> mHeightBelow;
        ::ll::TypedStorage<4, 4, float> mHeightAbove;
        // NOLINTEND
    };

    struct HomeRestrictionInfo {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 12, ::BlockPos> mHomePos;
        ::ll::TypedStorage<4, 4, float>       mRestrictionRadiusSqr;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<4, 24, ::AABB> mAABB;
    ::ll::TypedStorage<4, 8, ::Vec2> mAABBDim;
    ::ll::TypedStorage<4, 12, ::Vec3> mPosition;
    ::ll::TypedStorage<4, 4, float> mRadiusCeiling;
    ::ll::TypedStorage<1, 1, bool> mCanUseFreeStartNodeCheck;
    ::ll::TypedStorage<1, 1, bool> mIsInWater;
    ::ll::TypedStorage<1, 1, bool> mIsInLava;
    ::ll::TypedStorage<8, 8, ::BreakBlocksComponent const*> mBreakBlocks;
    ::ll::TypedStorage<8, 8, ::BreakBlocksDescription const*> mBreakBlocksDescription;
    ::ll::TypedStorage<8, 8, ::ActorUniqueID> mUniqueID;
    ::ll::UntypedStorage<8, 48> mCheckIsPathable;
    ::ll::UntypedStorage<8, 48> mBlockCausesDamageToActor;
    ::ll::UntypedStorage<8, 48> mCanBeAscendedByJumping;
    ::ll::TypedStorage<8, 8, std::vector<BlockDescriptor> const*> mBlocksToAvoid;
    ::ll::TypedStorage<1, 1, bool> mEntityIsSwimmer;
    ::ll::TypedStorage<1, 1, bool> mEntityIsFlyer;
    ::ll::TypedStorage<1, 1, bool> mEntityIsFireImmune;
    ::ll::TypedStorage<1, 1, bool> mEntityIsOnHotBlock;
    ::ll::TypedStorage<1, 1, bool> mEntityIsWalker;
    ::ll::TypedStorage<1, 1, bool> mEntityIsDoorOpener;
    ::ll::TypedStorage<1, 1, bool> mEntityIsDoorBreaker;
    ::ll::TypedStorage<1, 1, bool> mAllowBlockBreaking;
    ::ll::TypedStorage<4, 4, float> mMaxJumpHeight;
    ::ll::TypedStorage<8, 8, ::PreferredPathDescription const*> mPathPrefs;
    ::ll::TypedStorage<8, 40, std::unordered_map<BlockPos, ActorPathingData::MinMaxHeightCacheEntry>> mMinMaxHeightBlockCache;
    ::ll::TypedStorage<4, 20, std::optional<ActorPathingData::HomeRestrictionInfo>> mHomeRestrictionInfo;
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~ActorPathingData();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
