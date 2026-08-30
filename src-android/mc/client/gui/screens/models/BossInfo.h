#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Color.h"
#include "mc/safety/RedactableString.h"

struct BossInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 56, ::Bedrock::Safety::RedactableString> mName;
    ::ll::TypedStorage<4, 4, float>                                mHealth;
    ::ll::TypedStorage<4, 16, ::mce::Color>                        mBarColor;
    // NOLINTEND

public:
    // prevent constructor by default
    BossInfo& operator=(BossInfo const&);
    BossInfo(BossInfo const&);
    BossInfo();
};
