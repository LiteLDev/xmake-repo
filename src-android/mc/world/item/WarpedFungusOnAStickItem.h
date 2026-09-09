#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/components/ComponentItem.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

class WarpedFungusOnAStickItem : public ::ComponentItem {
public:
    // prevent constructor by default
    WarpedFungusOnAStickItem();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~WarpedFungusOnAStickItem();

    virtual bool isHandEquipped() const;

    virtual bool requiresInteract() const;

    virtual int getEnchantSlot() const;

    virtual int getEnchantValue() const;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $isHandEquipped() const;

    MCNAPI bool $requiresInteract() const;

    MCNAPI int $getEnchantSlot() const;

    MCNAPI int $getEnchantValue() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
