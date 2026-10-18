#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/components_json_legacy/OnHitSubcomponent.h"
#include "mc/world/actor/ActorDefinitionTrigger.h"

// auto generated forward declare list
// clang-format off
class Actor;
class ProjectileComponent;
namespace Json { class Value; }
// clang-format on

class ActorDefinitionEventSubcomponent : public ::OnHitSubcomponent {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<1, 1, bool>                      mAffectShooter;
    ::ll::TypedStorage<1, 1, bool>                      mAffectProjectile;
    ::ll::TypedStorage<1, 1, bool>                      mAffectTarget;
    ::ll::TypedStorage<1, 1, bool>                      mAffectSplashArea;
    ::ll::TypedStorage<4, 4, float>                     mSplashArea;
    ::ll::TypedStorage<8, 96, ::ActorDefinitionTrigger> mTrigger;
#else // @header-generator platform
    ::ll::TypedStorage<1, 1, bool>                       mAffectShooter;
    ::ll::TypedStorage<1, 1, bool>                       mAffectProjectile;
    ::ll::TypedStorage<1, 1, bool>                       mAffectTarget;
    ::ll::TypedStorage<1, 1, bool>                       mAffectSplashArea;
    ::ll::TypedStorage<4, 4, float>                      mSplashArea;
    ::ll::TypedStorage<8, 104, ::ActorDefinitionTrigger> mTrigger;
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~ActorDefinitionEventSubcomponent();
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
    virtual void doOnHitEffect(::Actor& owner, ::ProjectileComponent&) /*override*/;
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
    MCAPI void $doOnHitEffect(::Actor& owner, ::ProjectileComponent&);
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
