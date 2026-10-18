#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/legacy/LevelEvent.h"
#include "mc/deps/shared_types/legacy/LevelSoundEvent.h"

// auto generated forward declare list
// clang-format off
class Actor;
class CompoundTag;
class DataLoadHelper;
class Vec3;
// clang-format on

class ExplodeComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>                                    mFuseLength;
    ::ll::TypedStorage<4, 4, int>                                    mInitialFuseLength;
    ::ll::TypedStorage<4, 4, float>                                  mExplosionPower;
    ::ll::TypedStorage<4, 4, float>                                  mMaxResistance;
    ::ll::TypedStorage<1, 1, bool>                                   mIsFuseLit;
    ::ll::TypedStorage<1, 1, bool>                                   mCausesFire;
    ::ll::TypedStorage<4, 4, float>                                  mDamageScaling;
    ::ll::TypedStorage<1, 1, bool>                                   mBreaksBlocks;
    ::ll::TypedStorage<1, 1, bool>                                   mTogglesBlocks;
    ::ll::TypedStorage<1, 1, bool>                                   mFireAffectedByGriefing;
    ::ll::TypedStorage<1, 1, bool>                                   mDestroyAffectedByGriefing;
    ::ll::TypedStorage<1, 1, bool>                                   mAllowUnderwater;
    ::ll::TypedStorage<1, 1, bool>                                   mRequiresTntExplodeGameRuleEnabled;
    ::ll::TypedStorage<4, 4, float>                                  mKnockbackScaling;
    ::ll::TypedStorage<2, 2, ::SharedTypes::Legacy::LevelEvent>      mParticleType;
    ::ll::TypedStorage<4, 4, ::SharedTypes::Legacy::LevelSoundEvent> mSoundEffect;
    ::ll::TypedStorage<1, 1, bool>                                   mNegatesFallDamage;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ExplodeComponent();
#else // @header-generator platform
    MCAPI void addAdditionalSaveData(::CompoundTag& tag) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void addAdditionalSaveData(::CompoundTag&) const;
#else // @header-generator platform
    MCAPI void explode(::Actor& actor, ::Vec3 const& explosionPosition);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void explode(::Actor&, ::Vec3 const&);

    MCNAPI int getFuseLength() const;

    MCNAPI int getInitialFuseLength() const;

    MCNAPI bool getIsFuseLit() const;

    MCNAPI bool getNegatesFallDamage() const;

    MCNAPI bool isFuseLit() const;

    MCNAPI void readAdditionalSaveData(::Actor&, ::CompoundTag const&, ::DataLoadHelper&);

    MCNAPI bool requiresTntExplodeGameRuleEnabled() const;

    MCNAPI void setAllowUnderwater(bool);

    MCNAPI void setFuseLength(int);

    MCNAPI void setTntExpodeGameRuleRequired();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
#else // @header-generator platform
    MCAPI void readAdditionalSaveData(::Actor& owner, ::CompoundTag const& tag, ::DataLoadHelper& dataLoadHelper);
#endif // @header-generator platform
    // NOLINTEND
};
