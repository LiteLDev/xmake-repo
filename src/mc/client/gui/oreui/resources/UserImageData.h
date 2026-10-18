#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated forward declare list
// clang-format off
namespace Gameface { struct UserImageDataImpl; }
// clang-format on
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform

// auto generated forward declare list
// clang-format off
namespace Gameface { struct UserImageDataImpl; }
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform

namespace Gameface {

class UserImageData {
public:
    // UserImageData inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    enum ImageOrigin : uint {
        TopLeft    = 0,
        BottomLeft = 1,
        Default    = 2,
    };
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
    enum class ImageOrigin : int {
        TopLeft    = 0,
        BottomLeft = 1,
        Default    = 2,
    };
#else // @header-generator platform
    enum class ImageOrigin : int {};
#endif // @header-generator platform
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    enum TextureFilteringMode : uint {
        FilterPoint  = 0,
        FilterLinear = 1,
    };
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
    enum class TextureFilteringMode : int {
        FilterPoint  = 0,
        FilterLinear = 1,
    };
#else // @header-generator platform
    enum class TextureFilteringMode : int {};
#endif // @header-generator platform
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    enum AlphaPremultiplicationMode : uint {
        Premultiplied    = 0,
        NonPremultiplied = 1,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::gsl::not_null<std::unique_ptr<Gameface::UserImageDataImpl>>> mImpl;
    // NOLINTEND
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
    enum class AlphaPremultiplicationMode : int {
        Premultiplied    = 0,
        NonPremultiplied = 1,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::gsl::not_null<::std::unique_ptr<::Gameface::UserImageDataImpl>>> mImpl;
    // NOLINTEND
#else // @header-generator platform
    enum class AlphaPremultiplicationMode : int {};
#endif // @header-generator platform
#endif // @header-generator platform
};

} // namespace Gameface
