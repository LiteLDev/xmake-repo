#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/components_json_legacy/OnHitSubcomponent.h"

// auto generated forward declare list
// clang-format off
class Actor;
#if defined(LL_PLAT_A) // @header-generator platform
class BaseGameVersion;
class HitResult;
class MobEffect;
class MobEffectInstance;
class Potion;
#else // @header-generator platform
#endif // @header-generator platform
class ProjectileComponent;
namespace Json { class Value; }
// clang-format on

class SplashPotionEffectSubcomponent : public ::OnHitSubcomponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int> mPotionEffect;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual void readfromJSON(::Json::Value&);
#else // @header-generator platform
    virtual void readfromJSON(::Json::Value& component) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void writetoJSON(::Json::Value&) const;
#else // @header-generator platform
    virtual void writetoJSON(::Json::Value&) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void doOnHitEffect(::Actor&, ::ProjectileComponent&);
#else // @header-generator platform
    virtual void doOnHitEffect(::Actor& owner, ::ProjectileComponent& component) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual char const* getName() const;
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
    // NOLINTEND
};
