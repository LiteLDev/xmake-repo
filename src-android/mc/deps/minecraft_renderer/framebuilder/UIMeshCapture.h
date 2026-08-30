#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/render_dragon/frame_renderer/FrameExplicitTarget.h"
#include "mc/external/render_dragon/resources/ServerResourcePointer.h"

// auto generated forward declare list
// clang-format off
namespace dragon { class ResolvedImageResource; }
// clang-format on

namespace mce::framebuilder::gamecomponents {

struct UIMeshCapture {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24>                                             mTargetImage;
    ::ll::TypedStorage<8, 48, ::dragon::framerenderer::FrameExplicitTarget> mRenderTarget;
    // NOLINTEND
};

} // namespace mce::framebuilder::gamecomponents
