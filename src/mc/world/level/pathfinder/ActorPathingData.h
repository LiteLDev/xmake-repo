#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

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
#else // @header-generator platform
#endif // @header-generator platform

struct ActorPathingData {
public:
    // ActorPathingData inner types declare
    // clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
    struct MinMaxHeightCacheEntry;
#else // @header-generator platform
#endif // @header-generator platform
    struct HomeRestrictionInfo;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    struct MinMaxHeightCacheEntry;
#endif // @header-generator platform
    // clang-format on

    // ActorPathingData inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    struct MinMaxHeightCacheEntry {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, float> mHeightBelow;
        ::ll::TypedStorage<4, 4, float> mHeightAbove;
        // NOLINTEND
    };

#else // @header-generator platform
#endif // @header-generator platform
    struct HomeRestrictionInfo {
    public:
        // member variables
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::TypedStorage<4, 12, ::BlockPos> mHomePos;
        ::ll::TypedStorage<4, 4, float>       mRestrictionRadiusSqr;
#else // @header-generator platform
        ::ll::UntypedStorage<4, 12> mUnk4a556d;
        ::ll::UntypedStorage<4, 4>  mUnk8baac2;
#endif // @header-generator platform
        // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

    public:
        // prevent constructor by default
        HomeRestrictionInfo& operator=(HomeRestrictionInfo const&);
        HomeRestrictionInfo(HomeRestrictionInfo const&);
        HomeRestrictionInfo();
    };

    struct MinMaxHeightCacheEntry {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<4, 4> mUnk1f384a;
        ::ll::UntypedStorage<4, 4> mUnk6da71e;
        // NOLINTEND

    public:
        // prevent constructor by default
        MinMaxHeightCacheEntry& operator=(MinMaxHeightCacheEntry const&);
        MinMaxHeightCacheEntry(MinMaxHeightCacheEntry const&);
        MinMaxHeightCacheEntry();
#endif // @header-generator platform
    };

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    ::ll::UntypedStorage<4, 24> mUnk843bf4;
    ::ll::UntypedStorage<4, 8>  mUnk320b89;
    ::ll::UntypedStorage<4, 12> mUnk302bce;
    ::ll::UntypedStorage<4, 4>  mUnkee6a22;
    ::ll::UntypedStorage<1, 1>  mUnkdcacf9;
    ::ll::UntypedStorage<1, 1>  mUnkda42e3;
    ::ll::UntypedStorage<1, 1>  mUnke22ddd;
    ::ll::UntypedStorage<8, 8>  mUnkd3973f;
    ::ll::UntypedStorage<8, 8>  mUnkfd1d50;
    ::ll::UntypedStorage<8, 8>  mUnk278ebc;
    ::ll::UntypedStorage<8, 64> mUnk17e30a;
    ::ll::UntypedStorage<8, 64> mUnka40f0c;
    ::ll::UntypedStorage<8, 64> mUnk6b1ac2;
    ::ll::UntypedStorage<8, 8>  mUnk44c127;
    ::ll::UntypedStorage<1, 1>  mUnkb75952;
    ::ll::UntypedStorage<1, 1>  mUnk343a22;
    ::ll::UntypedStorage<1, 1>  mUnk8feccb;
    ::ll::UntypedStorage<1, 1>  mUnka4f5ae;
    ::ll::UntypedStorage<1, 1>  mUnke6b511;
    ::ll::UntypedStorage<1, 1>  mUnkd05c2a;
    ::ll::UntypedStorage<1, 1>  mUnk60cd79;
    ::ll::UntypedStorage<1, 1>  mUnkf32335;
    ::ll::UntypedStorage<4, 4>  mUnkea93b3;
    ::ll::UntypedStorage<8, 8>  mUnk98397f;
    ::ll::UntypedStorage<8, 64> mUnkc31c85;
    ::ll::UntypedStorage<4, 20> mUnked9575;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    ActorPathingData& operator=(ActorPathingData const&);
    ActorPathingData(ActorPathingData const&);
    ActorPathingData();
#endif // @header-generator platform

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
