#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace SharedTypes::v1_20_50 {

struct EnchantableItemComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<2, 2, short>        mEnchantValue;
    ::ll::TypedStorage<8, 24, std::string> mEnchantSlot;
    // NOLINTEND
};

} // namespace SharedTypes::v1_20_50
