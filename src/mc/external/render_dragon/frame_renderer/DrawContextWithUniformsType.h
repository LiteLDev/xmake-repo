#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/external/render_dragon/frame_renderer/DrawContextType.h"
#include "mc/external/render_dragon/materials/MaterialUniformOverrides.h"

#else // @header-generator platform
#endif // @header-generator platform
namespace dragon::framerenderer::drawutils {

#if defined(LL_PLAT_A) // @header-generator platform
struct DrawContextWithUniformsType : public ::dragon::framerenderer::drawutils::DrawContextType {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 56, ::dragon::materials::MaterialUniformOverrides> mUniformOverrides;
    // NOLINTEND
};
#else // @header-generator platform
struct DrawContextWithUniformsType {};
#endif // @header-generator platform

} // namespace dragon::framerenderer::drawutils
