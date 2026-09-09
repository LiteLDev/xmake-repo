#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class BoundingBox;
class Vec3;
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptBlockBoundingBoxUtils {
public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding bind();

    MCNAPI static ::BoundingBox dilate(::BoundingBox const&, ::Vec3 const&);

    MCNAPI static ::Vec3 getCenter(::BoundingBox const&);

    MCNAPI static ::Vec3 getSpan(::BoundingBox const&);

    MCNAPI static ::BoundingBox translate(::BoundingBox const&, ::Vec3 const&);
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
