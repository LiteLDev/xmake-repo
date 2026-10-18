#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/image/Image.h"

struct SkinImage : public ::mce::Image {
public:
#if defined(LL_PLAT_A) // @header-generator platform
    // prevent constructor by default
    SkinImage& operator=(SkinImage const&);
    SkinImage(SkinImage const&);

public:
#else // @header-generator platform
#endif // @header-generator platform
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool operator==(::SkinImage const&) const;
#else // @header-generator platform
    MCAPI bool operator==(::SkinImage const& rhs) const;
#endif // @header-generator platform
    // NOLINTEND
};
