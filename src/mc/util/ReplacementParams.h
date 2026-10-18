#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated forward declare list
// clang-format off
class ItemStack;
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform

namespace Util {

struct ReplacementParams {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 4, int>                           slotId;
    ::ll::TypedStorage<8, 8, std::vector<ItemStack> const&> items;
    ::ll::TypedStorage<4, 8, std::optional<int>>            count;
    ::ll::TypedStorage<1, 2, std::optional<bool>>           replaceModeKeep;
#else // @header-generator platform
    ::ll::UntypedStorage<4, 4> mUnk386168;
    ::ll::UntypedStorage<8, 8> mUnkc5544c;
    ::ll::UntypedStorage<4, 8> mUnkdc3075;
    ::ll::UntypedStorage<1, 2> mUnk14e016;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    ReplacementParams& operator=(ReplacementParams const&);
    ReplacementParams(ReplacementParams const&);
    ReplacementParams();
};

} // namespace Util
