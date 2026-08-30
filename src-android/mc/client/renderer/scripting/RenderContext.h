#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class BaseActorRenderContext;
// clang-format on

namespace Scripting::RenderHelper {

struct RenderContext {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 12, ::glm::vec<3, float, (glm::qualifier)0> const> cameraPos;
    ::ll::TypedStorage<4, 12, ::glm::vec<3, float, (glm::qualifier)0> const> cameraDir;
    ::ll::TypedStorage<4, 4, float const>                                    frameTime;
    ::ll::TypedStorage<4, 4, int const>                                      subClientId;
    ::ll::TypedStorage<8, 8, ::BaseActorRenderContext&>                      renderContext;
    ::ll::TypedStorage<4, 4, float const>                                    maxRenderDistance;
    // NOLINTEND

public:
    // prevent constructor by default
    RenderContext& operator=(RenderContext const&);
    RenderContext(RenderContext const&);
    RenderContext();
};

} // namespace Scripting::RenderHelper
