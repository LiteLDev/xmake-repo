#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class BaseActorRenderContext;
struct FrameRenderObject;
// clang-format on

namespace rendergraph {

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

} // namespace rendergraph
