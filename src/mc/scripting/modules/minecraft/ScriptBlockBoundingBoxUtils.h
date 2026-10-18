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
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::Scripting::ClassBinding bind();
#else // @header-generator platform
    MCAPI static ::Scripting::ClassBinding bind();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::BoundingBox dilate(::BoundingBox const&, ::Vec3 const&);
#else // @header-generator platform
    MCAPI static ::BoundingBox dilate(::BoundingBox const& box, ::Vec3 const& size);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::Vec3 getCenter(::BoundingBox const&);
#else // @header-generator platform
    MCAPI static ::Vec3 getCenter(::BoundingBox const& box);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::Vec3 getSpan(::BoundingBox const&);
#else // @header-generator platform
    MCAPI static ::Vec3 getSpan(::BoundingBox const& box);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::BoundingBox translate(::BoundingBox const&, ::Vec3 const&);
#else // @header-generator platform
    MCAPI static ::BoundingBox translate(::BoundingBox const& box, ::Vec3 const& delta);
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
