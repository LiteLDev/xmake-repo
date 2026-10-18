#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/external/render_dragon/frame_renderer/FrameExplicitTarget.h"
#include "mc/external/render_dragon/resources/ServerResourcePointer.h"

// auto generated forward declare list
// clang-format off
namespace dragon { class ResolvedImageResource; }
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform

namespace mce::framebuilder::gamecomponents {

struct ScreenshotCapture {
public:
    // ScreenshotCapture inner types define
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    enum class ScreenshotColorSpace : int {};
#endif // @header-generator platform
};

} // namespace mce::framebuilder::gamecomponents
