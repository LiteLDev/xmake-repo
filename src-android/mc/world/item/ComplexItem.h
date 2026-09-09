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
    // prevent constructor by default
    ComplexItem();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ComplexItem();

    virtual bool isComplex() const;

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
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $isComplex() const;

    MCNAPI std::unique_ptr<Packet> $getUpdatePacket(::ItemStack const&, ::Level&, ::Actor&) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
