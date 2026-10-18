#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/enchanting/Enchant.h"

class EnchantmentInstance {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    ::ll::TypedStorage<1, 1, ::Enchant::Type> mEnchantType;
    ::ll::TypedStorage<4, 4, int>             mLevel;
#endif // @header-generator platform
    // NOLINTEND
};
