#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ShapelessRecipePayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk8cb7de;
    ::ll::UntypedStorage<8, 24> mUnkd626ed;
    ::ll::UntypedStorage<8, 24> mUnk181312;
    ::ll::UntypedStorage<8, 16> mUnk5a0c79;
    ::ll::UntypedStorage<8, 32> mUnk720164;
    ::ll::UntypedStorage<4, 4>  mUnk6b623d;
    ::ll::UntypedStorage<8, 48> mUnkbfc368;
    ::ll::UntypedStorage<4, 4>  mUnkc4377b;
    // NOLINTEND

public:
    // prevent constructor by default
    ShapelessRecipePayload& operator=(ShapelessRecipePayload const&);
    ShapelessRecipePayload(ShapelessRecipePayload const&);
    ShapelessRecipePayload();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~ShapelessRecipePayload();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
