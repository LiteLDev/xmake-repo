#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct SmithingTransformRecipePayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk450b9b;
    ::ll::UntypedStorage<8, 24> mUnk1fe759;
    ::ll::UntypedStorage<8, 24> mUnk839903;
    ::ll::UntypedStorage<8, 24> mUnk8d135d;
    ::ll::UntypedStorage<8, 48> mUnk53223a;
    ::ll::UntypedStorage<8, 32> mUnk8b79dd;
    ::ll::UntypedStorage<4, 4>  mUnkfbccfa;
    // NOLINTEND

public:
    // prevent constructor by default
    SmithingTransformRecipePayload& operator=(SmithingTransformRecipePayload const&);
    SmithingTransformRecipePayload(SmithingTransformRecipePayload const&);
    SmithingTransformRecipePayload();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~SmithingTransformRecipePayload();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
