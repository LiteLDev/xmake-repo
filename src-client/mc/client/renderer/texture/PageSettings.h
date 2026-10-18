#if defined(LL_PLAT_C) || defined(LL_PLAT_A) // @header-generator platform
#if defined(LL_PLAT_A) // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Color.h"

struct PageSettings {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string>  mResourceName;
    ::ll::TypedStorage<8, 24, std::string>  mJsonKey;
    ::ll::TypedStorage<8, 24, std::string>  mFileSuffix;
    ::ll::TypedStorage<8, 24, std::string>  mDefaultTexture;
    ::ll::TypedStorage<4, 16, ::mce::Color> mDefaultColor;
    ::ll::TypedStorage<1, 1, bool>          mFadeMip;
    ::ll::TypedStorage<1, 1, bool>          mApplyTint;
    ::ll::TypedStorage<1, 1, bool>          mApplyOverlay;
    // NOLINTEND

public:
    // prevent constructor by default
    PageSettings& operator=(PageSettings const&);
    PageSettings();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~PageSettings();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
#else // @header-generator platform
#endif // @header-generator platform
#else // @header-generator platform
#endif // @header-generator platform
