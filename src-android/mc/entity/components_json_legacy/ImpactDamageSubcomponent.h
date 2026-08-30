#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/components_json_legacy/OnHitSubcomponent.h"
#include "mc/util/FloatRange.h"
#include "mc/world/actor/ActorType.h"

// auto generated forward declare list
// clang-format off
class Actor;
class ProjectileComponent;
namespace Json { class Value; }
// clang-format on

class ImpactDamageSubcomponent : public ::OnHitSubcomponent {
public:
    // ImpactDamageSubcomponent inner types define
    enum class DifficultyRandomization : uchar {
        None           = 0,
        Additive       = 1,
        Multiplicative = 2,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 8, ::FloatRange>                                        mProjectileDamage;
    ::ll::TypedStorage<4, 4, ::ActorType>                                         mFilter;
    ::ll::TypedStorage<1, 1, bool>                                                mCatchFire;
    ::ll::TypedStorage<1, 1, bool>                                                mChanneling;
    ::ll::TypedStorage<1, 1, bool>                                                mKnockback;
    ::ll::TypedStorage<1, 1, ::ImpactDamageSubcomponent::DifficultyRandomization> mDifficultyRandomization;
    ::ll::TypedStorage<1, 1, bool>                                                mCeilPreCriticalDamage;
    ::ll::TypedStorage<1, 1, bool>                                                mDestroyOnHit;
    ::ll::TypedStorage<1, 1, bool>                                                mRegisterLastHurtRequiresDamage;
    ::ll::TypedStorage<1, 1, bool>                                                mDestroyOnHitRequiresDamage;
    ::ll::TypedStorage<1, 1, bool>                                                mApplyKnockbackToBlockingTargets;
    ::ll::TypedStorage<4, 4, int>                                                 mMaxCriticalDamage;
    ::ll::TypedStorage<4, 4, int>                                                 mMinCriticalDamage;
    ::ll::TypedStorage<4, 4, float>                                               mPowerMultiplier;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ImpactDamageSubcomponent();

    virtual void readfromJSON(::Json::Value&);

    virtual void writetoJSON(::Json::Value&) const;

    virtual void doOnHitEffect(::Actor&, ::ProjectileComponent&);

    virtual char const* getName() const;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $readfromJSON(::Json::Value&);

    MCNAPI void $writetoJSON(::Json::Value&) const;

    MCNAPI void $doOnHitEffect(::Actor&, ::ProjectileComponent&);

    MCNAPI char const* $getName() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
