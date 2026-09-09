#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/inventory/network/TypedServerNetId.h"
#include "mc/world/item/enchanting/ItemEnchants.h"

struct ItemEnchantOption {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>             mCost;
    ::ll::TypedStorage<8, 80, ::ItemEnchants> mEnchants;
    ::ll::TypedStorage<8, 24, std::string>    mEnchantName;
    ::ll::UntypedStorage<4, 8>                mEnchantNetId;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::ItemEnchantOption& operator=(::ItemEnchantOption&&);

    MCNAPI bool operator==(::ItemEnchantOption const&) const;

    MCNAPI ~ItemEnchantOption();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
