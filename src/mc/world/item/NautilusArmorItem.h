#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/Item.h"

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
class Actor;
#else // @header-generator platform
#endif // @header-generator platform
class BlockSource;
class Container;
#if defined(LL_PLAT_A) // @header-generator platform
class ItemStack;
#else // @header-generator platform
#endif // @header-generator platform
class Vec3;
// clang-format on

class NautilusArmorItem : public ::Item {
public:
    // NautilusArmorItem inner types define
    enum class Tier : int {
#if defined(LL_PLAT_A) // @header-generator platform
        NONE      = 0,
        COPPER    = 1,
        IRON      = 2,
        GOLD      = 3,
        DIAMOND   = 4,
        NETHERITE = 5,
        COUNT     = 6,
#else // @header-generator platform
        None      = 0,
        Copper    = 1,
        Iron      = 2,
        Gold      = 3,
        Diamond   = 4,
        Netherite = 5,
        Count     = 6,
#endif // @header-generator platform
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::NautilusArmorItem::Tier> mTier;
    // NOLINTEND

public:
#if defined(LL_PLAT_A) // @header-generator platform
    // prevent constructor by default
    NautilusArmorItem();

public:
#else // @header-generator platform
#endif // @header-generator platform
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~NautilusArmorItem();
#else // @header-generator platform
    virtual bool isBodyArmor() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool isBodyArmor() const;
#else // @header-generator platform
    virtual int getArmorValue() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual int getArmorValue() const;
#else // @header-generator platform
    virtual int getToughnessValue() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual int getToughnessValue() const;
#else // @header-generator platform
    virtual float getKnockbackResistanceValue() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual float getKnockbackResistanceValue() const;

    virtual bool dispense(::BlockSource&, ::Container&, int, ::Vec3 const&, uchar) const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI NautilusArmorItem(std::string const&, int, ::NautilusArmorItem::Tier);

    MCNAPI ::NautilusArmorItem::Tier getTier() const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::string const&, int, ::NautilusArmorItem::Tier);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    virtual bool dispense(::BlockSource& region, ::Container& container, int slot, ::Vec3 const& pos, uchar) const
        /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $isBodyArmor() const;
#else // @header-generator platform
    MCFOLD bool $isBodyArmor() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI int $getArmorValue() const;
#else // @header-generator platform
    MCAPI int $getArmorValue() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI int $getToughnessValue() const;
#else // @header-generator platform
    MCAPI int $getToughnessValue() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI float $getKnockbackResistanceValue() const;
#else // @header-generator platform
    MCAPI float $getKnockbackResistanceValue() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $dispense(::BlockSource&, ::Container&, int, ::Vec3 const&, uchar) const;
#else // @header-generator platform
    MCFOLD bool $dispense(::BlockSource& region, ::Container& container, int slot, ::Vec3 const& pos, uchar) const;


#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void** $vftable();
#else // @header-generator platform
    MCAPI static void** $vftable();
#endif // @header-generator platform
    // NOLINTEND
};
