#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ItemStackRequestCereal {

struct CraftRecipeAutoActionData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>  mUnkedacb0;
    ::ll::UntypedStorage<1, 1>  mUnkc8a545;
    ::ll::UntypedStorage<8, 24> mUnkb74ee3;
    // NOLINTEND

public:
    // prevent constructor by default
    CraftRecipeAutoActionData& operator=(CraftRecipeAutoActionData const&);
    CraftRecipeAutoActionData(CraftRecipeAutoActionData const&);
    CraftRecipeAutoActionData();
};

} // namespace ItemStackRequestCereal
