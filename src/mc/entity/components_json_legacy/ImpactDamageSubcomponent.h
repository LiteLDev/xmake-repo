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
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~ImpactDamageSubcomponent();
#else // @header-generator platform
    virtual void readfromJSON(::Json::Value& component) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void readfromJSON(::Json::Value&);
#else // @header-generator platform
    virtual void writetoJSON(::Json::Value& component) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void writetoJSON(::Json::Value&) const;
#else // @header-generator platform
    virtual void doOnHitEffect(::Actor& owner, ::ProjectileComponent& component) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void doOnHitEffect(::Actor&, ::ProjectileComponent&);

    virtual char const* getName() const;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    virtual char const* getName() const /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $readfromJSON(::Json::Value&);
#else // @header-generator platform
    MCAPI void $readfromJSON(::Json::Value& component);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $writetoJSON(::Json::Value&) const;
#else // @header-generator platform
    MCAPI void $writetoJSON(::Json::Value& component) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $doOnHitEffect(::Actor&, ::ProjectileComponent&);
#else // @header-generator platform
    MCAPI void $doOnHitEffect(::Actor& owner, ::ProjectileComponent& component);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI char const* $getName() const;
    // NOLINTEND
#else // @header-generator platform
    MCAPI char const* $getName() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
#else // @header-generator platform

#endif // @header-generator platform
    // NOLINTEND
};
