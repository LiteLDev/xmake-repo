#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Vec3;
namespace mce { class Color; }
// clang-format on

namespace Scripting::RenderHelper {

struct Vertex {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float> mX;
    ::ll::TypedStorage<4, 4, float> mY;
    ::ll::TypedStorage<4, 4, float> mZ;
    ::ll::TypedStorage<4, 4, uint>  mAbgrColor;
    // NOLINTEND
};

} // namespace Scripting::RenderHelper
