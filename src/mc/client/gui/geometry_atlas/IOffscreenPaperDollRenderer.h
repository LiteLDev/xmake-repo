#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated forward declare list
// clang-format off
namespace GeometryAtlas { struct PaperdollCaptureFrame; }
namespace cg { class ImageBuffer; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace GeometryAtlas {

#if defined(LL_PLAT_A) // @header-generator platform
class IOffscreenPaperDollRenderer {};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
class IOffscreenPaperDollRenderer {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IOffscreenPaperDollRenderer() = default;

    virtual void beginCapturePaperDollImage(
        uint                                                         screenshotWidth,
        uint                                                         screenshotHeight,
        ::std::string const&                                         skinName,
        ::std::vector<::GeometryAtlas::PaperdollCaptureFrame> const& frames
    ) = 0;

    virtual bool isCaptureReady() const = 0;

    virtual ::cg::ImageBuffer retrieveCaptureAsImageBuffer() const = 0;
    // NOLINTEND
};
#else // @header-generator platform
class IOffscreenPaperDollRenderer {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace GeometryAtlas
