#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ItemStackRequestCereal {

struct CraftRecipeActionData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnka79e9a;
    ::ll::UntypedStorage<1, 1> mUnk7066f2;
    // NOLINTEND

public:
    // prevent constructor by default
    CraftRecipeActionData& operator=(CraftRecipeActionData const&);
    CraftRecipeActionData(CraftRecipeActionData const&);
    CraftRecipeActionData();
};

} // namespace ItemStackRequestCereal
