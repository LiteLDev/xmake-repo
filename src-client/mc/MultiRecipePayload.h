#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct MultiRecipePayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk4541ea;
    ::ll::UntypedStorage<4, 4>  mUnk8f07d9;
    // NOLINTEND

public:
    // prevent constructor by default
    MultiRecipePayload& operator=(MultiRecipePayload const&);
    MultiRecipePayload(MultiRecipePayload const&);
    MultiRecipePayload();
};
