#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Color.h"

struct TextDataPayload {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::string>               mText;
    ::ll::TypedStorage<1, 1, bool>                       mUseRotation;
    ::ll::TypedStorage<4, 20, std::optional<mce::Color>> mBackgroundColor;
    ::ll::TypedStorage<1, 1, bool>                       mDepthTest;
    ::ll::TypedStorage<1, 1, bool>                       mShowBackface;
    ::ll::TypedStorage<1, 1, bool>                       mShowTextBackface;
#else // @header-generator platform
    ::ll::TypedStorage<8, 32, ::std::string>                 mText;
    ::ll::TypedStorage<1, 1, bool>                           mUseRotation;
    ::ll::TypedStorage<4, 20, ::std::optional<::mce::Color>> mBackgroundColor;
    ::ll::TypedStorage<1, 1, bool>                           mDepthTest;
    ::ll::TypedStorage<1, 1, bool>                           mShowBackface;
    ::ll::TypedStorage<1, 1, bool>                           mShowTextBackface;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool operator==(::TextDataPayload const&) const;
#else // @header-generator platform
    MCAPI bool operator==(::TextDataPayload const&) const;
#endif // @header-generator platform
    // NOLINTEND
};
