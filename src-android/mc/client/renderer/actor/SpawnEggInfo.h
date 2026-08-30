#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Color.h"
#include "mc/deps/core/string/HashedString.h"

struct SpawnEggInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 40, ::HashedString> mTextureName;
    ::ll::TypedStorage<4, 4, uint>            mTextureIndex;
    ::ll::TypedStorage<4, 16, ::mce::Color>   mEggBaseTint;
    ::ll::TypedStorage<4, 16, ::mce::Color>   mEggOverlayTint;
    // NOLINTEND

public:
    // prevent constructor by default
    SpawnEggInfo& operator=(SpawnEggInfo const&);
};
