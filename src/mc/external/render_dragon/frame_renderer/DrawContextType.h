#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/external/render_dragon/frame_object/components/Transform.h"
#include "mc/external/render_dragon/frame_renderer/DrawContextBaseType.h"

#else // @header-generator platform
#endif // @header-generator platform
namespace dragon::framerenderer::drawutils {

#if defined(LL_PLAT_A) // @header-generator platform
struct DrawContextType : public ::dragon::framerenderer::drawutils::DrawContextBaseType {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 72, ::dragon::frameobject::components::Transform> mTr;
    // NOLINTEND
};
#else // @header-generator platform
struct DrawContextType {};
#endif // @header-generator platform

} // namespace dragon::framerenderer::drawutils
