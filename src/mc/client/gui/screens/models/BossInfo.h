#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core/math/Color.h"
#include "mc/safety/RedactableString.h"

struct BossInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 72, ::Bedrock::Safety::RedactableString> mName;
    ::ll::TypedStorage<4, 4, float>                                mHealth;
    ::ll::TypedStorage<4, 16, ::mce::Color>                        mBarColor;
    // NOLINTEND
};
#else // @header-generator platform
struct BossInfo {};
#endif // @header-generator platform
#endif // @header-generator platform
