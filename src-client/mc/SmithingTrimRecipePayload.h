#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct SmithingTrimRecipePayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnke22e0c;
    ::ll::UntypedStorage<8, 24> mUnk30de0a;
    ::ll::UntypedStorage<8, 24> mUnk4b90b6;
    ::ll::UntypedStorage<8, 24> mUnka405a9;
    ::ll::UntypedStorage<8, 32> mUnk97562e;
    ::ll::UntypedStorage<4, 4>  mUnk319f7f;
    // NOLINTEND

public:
    // prevent constructor by default
    SmithingTrimRecipePayload& operator=(SmithingTrimRecipePayload const&);
    SmithingTrimRecipePayload(SmithingTrimRecipePayload const&);
    SmithingTrimRecipePayload();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~SmithingTrimRecipePayload();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
