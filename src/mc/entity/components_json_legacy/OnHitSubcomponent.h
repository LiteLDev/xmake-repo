#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Actor;
class ProjectileComponent;
namespace Json { class Value; }
// clang-format on

class OnHitSubcomponent {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~OnHitSubcomponent() = default;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void readfromJSON(::Json::Value&) = 0;
#else // @header-generator platform
    virtual void readfromJSON(::Json::Value& component) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void writetoJSON(::Json::Value&) const = 0;
#else // @header-generator platform
    virtual void writetoJSON(::Json::Value& component) const = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void doOnHitEffect(::Actor&, ::ProjectileComponent&) = 0;
#else // @header-generator platform
    virtual void doOnHitEffect(::Actor& owner, ::ProjectileComponent& component) = 0;
#endif // @header-generator platform

    virtual char const* getName() const;
    // NOLINTEND

public:
#if defined(LL_PLAT_A) // @header-generator platform
    // member functions
#else // @header-generator platform
    // static functions
#endif // @header-generator platform
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool _canAttack(::Actor*, ::Actor*) const;
#else // @header-generator platform
    MCAPI static bool _canAttack(::Actor* projectileOwnerActor, ::Actor* hitActor);
#endif // @header-generator platform
    // NOLINTEND
};
