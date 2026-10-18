#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/external/render_dragon/frame_object/components/MaterialFilter.h"
#include "mc/external/render_dragon/frame_object/components/MeshFilter.h"
#include "mc/external/render_dragon/frame_renderer/DirectDrawContext.h"

// auto generated forward declare list
// clang-format off
namespace dragon::materials { class Pass; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
namespace dragon::framerenderer::drawutils {

#if defined(LL_PLAT_A) // @header-generator platform
struct DrawContextBaseType {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 136, ::dragon::frameobject::components::MaterialFilter>     mMatFilter;
    ::ll::TypedStorage<8, 96, ::dragon::frameobject::components::MeshFilter>          mMesh;
    ::ll::TypedStorage<8, 8, ::dragon::materials::Pass const*>                        mMaterialPass;
    ::ll::TypedStorage<4, 380, ::dragon::framerenderer::drawutils::DirectDrawContext> mDDContext;
    ::ll::TypedStorage<8, 24, std::string>                                            mPassName;
    ::ll::TypedStorage<8, 40, std::unordered_map<std::string, std::string>>           mFlags;
    // NOLINTEND
};
#else // @header-generator platform
struct DrawContextBaseType {};
#endif // @header-generator platform

} // namespace dragon::framerenderer::drawutils
