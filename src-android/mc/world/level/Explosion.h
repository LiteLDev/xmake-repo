#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec3.h"
#include "mc/deps/shared_types/legacy/LevelEvent.h"
#include "mc/deps/shared_types/legacy/LevelSoundEvent.h"
#include "mc/legacy/ActorUniqueID.h"
#include "mc/world/level/BlockPos.h"

// auto generated forward declare list
// clang-format off
class Actor;
class Block;
class BlockSource;
class IRandom;
class ItemStack;
struct ResourceDropsContext;
// clang-format on

class Explosion {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 12, ::Vec3>                                mPos;
    ::ll::TypedStorage<4, 4, float>                                  mRadius;
    ::ll::TypedStorage<8, 40, std::unordered_set<BlockPos>>          mAffectedBlocks;
    ::ll::TypedStorage<1, 1, bool>                                   mFire;
    ::ll::TypedStorage<1, 1, bool>                                   mBreaking;
    ::ll::TypedStorage<1, 1, bool>                                   mAllowUnderwater;
    ::ll::TypedStorage<1, 1, bool>                                   mCanToggleBlocks;
    ::ll::TypedStorage<4, 4, float>                                  mDamageScaling;
    ::ll::TypedStorage<1, 1, bool>                                   mIgnoreBlockExplosionResistance;
    ::ll::TypedStorage<2, 2, ::SharedTypes::Legacy::LevelEvent>      mParticleType;
    ::ll::TypedStorage<4, 4, ::SharedTypes::Legacy::LevelSoundEvent> mSoundExplosionType;
    ::ll::TypedStorage<8, 8, ::ActorUniqueID>                        mSourceID;
    ::ll::TypedStorage<8, 8, ::BlockSource&>                         mRegion;
    ::ll::TypedStorage<4, 4, float>                                  mMaxResistance;
    ::ll::TypedStorage<1, 2, std::optional<bool>>                    mInWaterOverride;
    ::ll::TypedStorage<4, 8, std::optional<int>>                     mTotalDamageOverride;
    ::ll::TypedStorage<4, 4, float>                                  mKnockbackScaling;
    // NOLINTEND

public:
    // prevent constructor by default
    Explosion& operator=(Explosion const&);
    Explosion(Explosion const&);
    Explosion();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI bool explode(::IRandom&);

    MCNAPI void overrideInWater(bool);

    MCNAPI void setAllowUnderwater(bool);

    MCNAPI void setBreaking(bool);

    MCNAPI void setCanToggleBlocks(bool);

    MCNAPI void setDamageScaling(float);

    MCNAPI void setExplosionParticleType(::SharedTypes::Legacy::LevelEvent);

    MCNAPI void setExplosionSound(::SharedTypes::Legacy::LevelSoundEvent);

    MCNAPI void setFire(bool);

    MCNAPI void setIgnoreBlockResistance(bool);

    MCNAPI void setKnockbackScaling(float);

    MCNAPI void setMaxResistance(float);

    MCNAPI ~Explosion();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void _spawnExtraResourcesAndMergeItemDropsForBlock(
        ::BlockSource&,
        ::BlockPos const&,
        ::Block const&,
        ::IRandom&,
        ::ResourceDropsContext const&,
        std::vector<std::pair<ItemStack, BlockPos>>&
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
