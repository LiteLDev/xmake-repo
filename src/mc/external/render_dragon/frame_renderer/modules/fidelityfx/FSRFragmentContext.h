#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/external/render_dragon/frame_renderer/DirectDrawContext.h"
#include "mc/external/render_dragon/frame_renderer/modules/fidelityfx/FSRContext.h"

// auto generated forward declare list
// clang-format off
namespace dragon::frameobject::components { struct MeshFilter; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
namespace dragon::framerenderer::modules::fidelityfx::fsr1 {

#if defined(LL_PLAT_A) // @header-generator platform
struct FSRFragmentContext : public ::dragon::framerenderer::modules::fidelityfx::fsr1::FSRContext {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::dragon::frameobject::components::MeshFilter const&>    mMeshFilter;
    ::ll::TypedStorage<4, 380, ::dragon::framerenderer::drawutils::DirectDrawContext> mDDContext;
    // NOLINTEND

public:
    // prevent constructor by default
    FSRFragmentContext& operator=(FSRFragmentContext const&);
    FSRFragmentContext(FSRFragmentContext const&);
    FSRFragmentContext();
};
#else // @header-generator platform
struct FSRFragmentContext {};
#endif // @header-generator platform

} // namespace dragon::framerenderer::modules::fidelityfx::fsr1
