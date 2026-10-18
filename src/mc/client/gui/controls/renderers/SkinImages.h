#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated forward declare list
// clang-format off
namespace mce { struct Image; }
// clang-format on

struct SkinImages {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::mce::Image const*> mSkinImage;
    ::ll::TypedStorage<8, 8, ::mce::Image const*> mCapeImage;
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated forward declare list
// clang-format off
namespace mce { struct Image; }
// clang-format on

struct SkinImages {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::mce::Image const*> mSkinImage;
    ::ll::TypedStorage<8, 8, ::mce::Image const*> mCapeImage;
    // NOLINTEND
};
#else // @header-generator platform
struct SkinImages {};
#endif // @header-generator platform
#endif // @header-generator platform
