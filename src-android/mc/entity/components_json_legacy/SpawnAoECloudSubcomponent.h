#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/comprehensive/ParticleType.h"
#include "mc/deps/core/math/Color.h"
#include "mc/entity/components_json_legacy/OnHitSubcomponent.h"
#include "mc/world/effect/EffectDuration.h"

// auto generated forward declare list
// clang-format off
class Actor;
class ProjectileComponent;
namespace Json { class Value; }
// clang-format on

class SpawnAoECloudSubcomponent : public ::OnHitSubcomponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>              mPotionId;
    ::ll::TypedStorage<4, 4, ::EffectDuration> mDuration;
    ::ll::TypedStorage<4, 4, ::ParticleType>   mParticle;
    ::ll::TypedStorage<4, 4, int>              mReapplicationDelay;
    ::ll::TypedStorage<4, 4, float>            mRadius;
    ::ll::TypedStorage<4, 4, float>            mRadiusOnUse;
    ::ll::TypedStorage<4, 16, ::mce::Color>    mParticleColor;
    ::ll::TypedStorage<1, 1, bool>             mAffectOwner;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~SpawnAoECloudSubcomponent();

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
