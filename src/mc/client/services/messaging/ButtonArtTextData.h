#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core/math/Color.h"

struct ButtonArtTextData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 16, ::mce::Color> mDefaultTextColor;
    ::ll::TypedStorage<4, 16, ::mce::Color> mHoverTextColor;
    ::ll::TypedStorage<4, 16, ::mce::Color> mBannerTextColor;
    ::ll::TypedStorage<8, 24, std::string>  mBannerText;
    // NOLINTEND

public:
    // prevent constructor by default
    ButtonArtTextData();
};
#else // @header-generator platform
struct ButtonArtTextData {};
#endif // @header-generator platform
