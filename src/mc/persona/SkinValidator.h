#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core/image/ImageFormat.h"

#else // @header-generator platform
#endif // @header-generator platform
// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
class ResourceLocation;
#else // @header-generator platform
#endif // @header-generator platform
namespace mce { struct Image; }
// clang-format on

namespace persona {

class SkinValidator {
public:
#if defined(LL_PLAT_A) // @header-generator platform
    // SkinValidator inner types define
    using RGBASpanPtr = uint*;

public:
#else // @header-generator platform
#endif // @header-generator platform
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static bool isPremiumGeometry(std::string const&);

    MCNAPI static bool isValidCapeImage(::mce::Image const&);

    MCNAPI static bool isValidImage(::mce::Image const&);

    MCNAPI static bool isValidSize(ulong);

    MCNAPI static void resizeHalfSkinData(::mce::Image&);

    MCNAPI static void validateAlpha(::mce::Image&, bool);
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCNAPI static void _validateAlpha(
        ::mce::Image& image,
        uint          x0,
        uint          y0,
        uint          x1,
        uint          y1,
        float         percentTransparentAllowed,
        bool          allowAlpha
    );

    MCNAPI static bool isValidImage(::mce::Image const& image);

    MCNAPI static void resizeHalfSkinData(::mce::Image& image);

    MCNAPI static void validateAlpha(::mce::Image& image, bool isPremium);
#endif
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace persona
