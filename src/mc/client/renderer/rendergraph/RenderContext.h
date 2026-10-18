#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated forward declare list
// clang-format off
class BaseActorRenderContext;
struct FrameRenderObject;
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
namespace rendergraph {

#if defined(LL_PLAT_A) // @header-generator platform
class RenderContext {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::BaseActorRenderContext&>  mEntityContext;
    ::ll::TypedStorage<8, 8, ::FrameRenderObject const&> mFrameRenderObject;
    // NOLINTEND

public:
    // prevent constructor by default
    RenderContext& operator=(RenderContext const&);
    RenderContext(RenderContext const&);
    RenderContext();
};
#else // @header-generator platform
class RenderContext {};
#endif // @header-generator platform

} // namespace rendergraph
