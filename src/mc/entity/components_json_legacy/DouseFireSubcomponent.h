#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/components_json_legacy/OnHitSubcomponent.h"

// auto generated forward declare list
// clang-format off
class Actor;
class BlockPos;
class BlockSource;
#if defined(LL_PLAT_A) // @header-generator platform
class HitResult;
#else // @header-generator platform
#endif // @header-generator platform
class ProjectileComponent;
namespace Json { class Value; }
// clang-format on

class DouseFireSubcomponent : public ::OnHitSubcomponent {
public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~DouseFireSubcomponent();
#else // @header-generator platform
    virtual void readfromJSON(::Json::Value&) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void readfromJSON(::Json::Value&);
#else // @header-generator platform
    virtual void writetoJSON(::Json::Value&) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void writetoJSON(::Json::Value&) const;
#else // @header-generator platform
    virtual void doOnHitEffect(::Actor& owner, ::ProjectileComponent& component) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void doOnHitEffect(::Actor&, ::ProjectileComponent&);

    virtual char const* getName() const;
#else // @header-generator platform
    virtual char const* getName() const /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
#if defined(LL_PLAT_A) // @header-generator platform
    // member functions
#else // @header-generator platform
    // static functions
#endif // @header-generator platform
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void douseFire(::Actor&, ::BlockSource&, ::BlockPos const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI static void douseFire(::Actor& owner, ::BlockSource& region, ::BlockPos const& pos);
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $readfromJSON(::Json::Value&);
#else // @header-generator platform
    MCFOLD void $readfromJSON(::Json::Value&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $writetoJSON(::Json::Value&) const;
#else // @header-generator platform
    MCFOLD void $writetoJSON(::Json::Value&) const;
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
