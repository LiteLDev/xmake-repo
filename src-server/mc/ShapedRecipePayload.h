#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ShapedRecipePayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk3f1492;
    ::ll::UntypedStorage<4, 4>  mUnkb88ef5;
    ::ll::UntypedStorage<4, 4>  mUnk39b9ed;
    ::ll::UntypedStorage<8, 24> mUnkf42ffa;
    ::ll::UntypedStorage<8, 24> mUnkf48353;
    ::ll::UntypedStorage<8, 16> mUnkd7187d;
    ::ll::UntypedStorage<8, 32> mUnk187833;
    ::ll::UntypedStorage<4, 4>  mUnke4b650;
    ::ll::UntypedStorage<1, 1>  mUnkc58140;
    ::ll::UntypedStorage<8, 48> mUnkdcdc4c;
    ::ll::UntypedStorage<4, 4>  mUnk886391;
    // NOLINTEND

public:
    // prevent constructor by default
    ShapedRecipePayload& operator=(ShapedRecipePayload const&);
    ShapedRecipePayload(ShapedRecipePayload const&);
    ShapedRecipePayload();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~ShapedRecipePayload();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
