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

struct ScreenshotCapture {
public:
    // ScreenshotCapture inner types define
    enum class ScreenshotColorSpace : int {
        SDR = 0,
        HDR = 1,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24>                                             mTargetImage;
    ::ll::TypedStorage<8, 48, ::dragon::framerenderer::FrameExplicitTarget> mRenderTarget;
    ::ll::TypedStorage<4, 4, ::mce::framebuilder::gamecomponents::ScreenshotCapture::ScreenshotColorSpace> mColorSpace;
    ::ll::TypedStorage<1, 1, bool>                                                                         mShowUI;
    // NOLINTEND
};

} // namespace mce::framebuilder::gamecomponents
