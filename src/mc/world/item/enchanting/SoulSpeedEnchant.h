#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/enchanting/Enchant.h"

// auto generated forward declare list
// clang-format off
class Actor;
namespace mce { class UUID; }
// clang-format on

class SoulSpeedEnchant : public ::Enchant {
public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~SoulSpeedEnchant();
#else // @header-generator platform
    virtual int getMinCost(int level) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual int getMinCost(int) const;
#else // @header-generator platform
    virtual int getMaxCost(int level) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual int getMaxCost(int) const;
#else // @header-generator platform
    virtual int getMaxLevel() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual int getMaxLevel() const;
#else // @header-generator platform
    virtual bool isTreasureOnly() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool isTreasureOnly() const;

    virtual bool isDiscoverable() const;
#else // @header-generator platform
    virtual bool isDiscoverable() const /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static int getLevel(::Actor const&);

    MCNAPI static float getSpeedBoost(int const);

    MCNAPI static bool shouldSpawnParticles(::Actor const&);
#else // @header-generator platform
    MCAPI static int getLevel(::Actor const& entity);
#endif // @header-generator platform
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::mce::UUID const& SOUL_SPEED_BOOST_UUID();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI static ::mce::UUID const& SOUL_SPEED_BOOST_UUID();
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI int $getMinCost(int) const;
#else // @header-generator platform
    MCFOLD int $getMinCost(int level) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI int $getMaxCost(int) const;
#else // @header-generator platform
    MCFOLD int $getMaxCost(int level) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI int $getMaxLevel() const;
#else // @header-generator platform
    MCFOLD int $getMaxLevel() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $isTreasureOnly() const;
#else // @header-generator platform
    MCFOLD bool $isTreasureOnly() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $isDiscoverable() const;
    // NOLINTEND
#else // @header-generator platform
    MCFOLD bool $isDiscoverable() const;
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
