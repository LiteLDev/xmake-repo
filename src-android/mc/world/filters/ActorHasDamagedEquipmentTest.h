#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/filters/ActorHasEquipmentTest.h"

// auto generated forward declare list
// clang-format off
class ItemStack;
// clang-format on

class ActorHasDamagedEquipmentTest : public ::ActorHasEquipmentTest {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ActorHasDamagedEquipmentTest();

    virtual std::string_view getName() const;

    virtual bool _isExpectedItem(std::vector<const ItemStack*> const&) const;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI std::string_view $getName() const;

    MCNAPI bool $_isExpectedItem(std::vector<const ItemStack*> const&) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
