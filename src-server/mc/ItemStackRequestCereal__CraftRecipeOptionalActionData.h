#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ItemStackRequestCereal {

struct CraftRecipeOptionalActionData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk40d076;
    ::ll::UntypedStorage<4, 4> mUnkc130c0;
    // NOLINTEND

public:
    // prevent constructor by default
    CraftRecipeOptionalActionData& operator=(CraftRecipeOptionalActionData const&);
    CraftRecipeOptionalActionData(CraftRecipeOptionalActionData const&);
    CraftRecipeOptionalActionData();
};

} // namespace ItemStackRequestCereal
