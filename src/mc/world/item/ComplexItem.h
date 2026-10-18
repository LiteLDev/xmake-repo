#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/Item.h"

// auto generated forward declare list
// clang-format off
class Actor;
class ItemStack;
class Level;
class Packet;
// clang-format on

class ComplexItem : public ::Item {
public:
#if defined(LL_PLAT_A) // @header-generator platform
    // prevent constructor by default
    ComplexItem();

public:
#else // @header-generator platform
#endif // @header-generator platform
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~ComplexItem();
#else // @header-generator platform
    virtual ~ComplexItem() /*override*/ = default;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool isComplex() const;
#else // @header-generator platform
    virtual bool isComplex() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::unique_ptr<Packet> getUpdatePacket(::ItemStack const&, ::Level&, ::Actor&) const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ComplexItem(std::string const&, int);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::string const&, int);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    virtual ::std::unique_ptr<::Packet> getUpdatePacket(::ItemStack const& item, ::Level& level, ::Actor& player) const;
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $isComplex() const;
#else // @header-generator platform
    MCFOLD bool $isComplex() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::unique_ptr<Packet> $getUpdatePacket(::ItemStack const&, ::Level&, ::Actor&) const;
    // NOLINTEND
#else // @header-generator platform
    MCFOLD ::std::unique_ptr<::Packet> $getUpdatePacket(::ItemStack const& item, ::Level& level, ::Actor& player) const;
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
