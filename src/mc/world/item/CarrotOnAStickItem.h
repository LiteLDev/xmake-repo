#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/Item.h"

// auto generated forward declare list
// clang-format off
class Actor;
class ItemStack;
class Mob;
// clang-format on

class CarrotOnAStickItem : public ::Item {
public:
#if defined(LL_PLAT_A) // @header-generator platform
    // prevent constructor by default
    CarrotOnAStickItem();

public:
#else // @header-generator platform
#endif // @header-generator platform
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~CarrotOnAStickItem();
#else // @header-generator platform
    virtual bool isHandEquipped() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool isHandEquipped() const;
#else // @header-generator platform
    virtual bool requiresInteract() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool requiresInteract() const;
#else // @header-generator platform
    virtual int getEnchantSlot() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual int getEnchantSlot() const;
#else // @header-generator platform
    virtual int getEnchantValue() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual int getEnchantValue() const;

    virtual void hurtActor(::ItemStack&, ::Actor&, ::Mob&) const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI CarrotOnAStickItem(std::string const&, short);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::string const&, short);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    virtual void hurtActor(::ItemStack& item, ::Actor& actor, ::Mob& attacker) const /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $isHandEquipped() const;
#else // @header-generator platform
    MCFOLD bool $isHandEquipped() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $requiresInteract() const;
#else // @header-generator platform
    MCFOLD bool $requiresInteract() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI int $getEnchantSlot() const;
#else // @header-generator platform
#ifdef LL_PLAT_S
    MCAPI int $getEnchantSlot() const;
#else // LL_PLAT_C
    MCFOLD int $getEnchantSlot() const;
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI int $getEnchantValue() const;
#else // @header-generator platform
    MCFOLD int $getEnchantValue() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $hurtActor(::ItemStack&, ::Actor&, ::Mob&) const;
#else // @header-generator platform
    MCFOLD void $hurtActor(::ItemStack& item, ::Actor& actor, ::Mob& attacker) const;


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
