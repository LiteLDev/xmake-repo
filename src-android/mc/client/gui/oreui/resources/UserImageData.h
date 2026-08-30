#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Gameface { struct UserImageDataImpl; }
// clang-format on

namespace Gameface {

class UserImageData {
public:
    // UserImageData inner types define
    enum ImageOrigin : uint {
        TopLeft    = 0,
        BottomLeft = 1,
        Default    = 2,
    };

    enum TextureFilteringMode : uint {
        FilterPoint  = 0,
        FilterLinear = 1,
    };

    enum AlphaPremultiplicationMode : uint {
        Premultiplied    = 0,
        NonPremultiplied = 1,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::gsl::not_null<std::unique_ptr<Gameface::UserImageDataImpl>>> mImpl;
    // NOLINTEND
};

} // namespace Gameface
