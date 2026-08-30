#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/enchanting/Enchant.h"

class EnchantmentInstance {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1>    mEnchantType;
    ::ll::TypedStorage<4, 4, int> mLevel;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI EnchantmentInstance();

    MCNAPI int getEnchantLevel() const;

    MCNAPI ::Enchant::Type getEnchantType() const;

    MCNAPI bool operator==(::EnchantmentInstance const&) const;

    MCNAPI void setEnchantLevel(int);

    MCNAPI void setEnchantType(::Enchant::Type);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND
};
