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
    virtual ~SoulSpeedEnchant();

    virtual int getMinCost(int) const;

    virtual int getMaxCost(int) const;

    virtual int getMaxLevel() const;

    virtual bool isTreasureOnly() const;

    virtual bool isDiscoverable() const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static int getLevel(::Actor const&);

    MCNAPI static float getSpeedBoost(int const);

    MCNAPI static bool shouldSpawnParticles(::Actor const&);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::mce::UUID const& SOUL_SPEED_BOOST_UUID();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI int $getMinCost(int) const;

    MCNAPI int $getMaxCost(int) const;

    MCNAPI int $getMaxLevel() const;

    MCNAPI bool $isTreasureOnly() const;

    MCNAPI bool $isDiscoverable() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
