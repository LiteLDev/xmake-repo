#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class ItemStack;
// clang-format on

namespace Util {

struct ReplacementParams {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>                           slotId;
    ::ll::TypedStorage<8, 8, std::vector<ItemStack> const&> items;
    ::ll::TypedStorage<4, 8, std::optional<int>>            count;
    ::ll::TypedStorage<1, 2, std::optional<bool>>           replaceModeKeep;
    // NOLINTEND

public:
    // prevent constructor by default
    ReplacementParams& operator=(ReplacementParams const&);
    ReplacementParams(ReplacementParams const&);
    ReplacementParams();
};

} // namespace Util
