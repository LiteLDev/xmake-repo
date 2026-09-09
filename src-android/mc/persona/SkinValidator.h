#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/image/ImageFormat.h"

// auto generated forward declare list
// clang-format off
class ResourceLocation;
namespace mce { struct Image; }
// clang-format on

namespace persona {

class SkinValidator {
public:
    // SkinValidator inner types define
    using RGBASpanPtr = uint*;

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static bool isPremiumGeometry(std::string const&);

    MCNAPI static bool isValidCapeImage(::mce::Image const&);

    MCNAPI static bool isValidImage(::mce::Image const&);

    MCNAPI static bool isValidSize(ulong);

    MCNAPI static void resizeHalfSkinData(::mce::Image&);

    MCNAPI static void validateAlpha(::mce::Image&, bool);
    // NOLINTEND
};

} // namespace persona
