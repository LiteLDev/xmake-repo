#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/pub_sub/Connector.h"

// auto generated forward declare list
// clang-format off
class Actor;
struct ScreenshotOptions;
namespace cg { class ImageBuffer; }
// clang-format on

class IPhotoManagerConnector {
public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    virtual ::Bedrock::PubSub::Connector<void (cg::ImageBuffer&, Actor*, Actor*, ScreenshotOptions&, std::function<void (cg::ImageBuffer&, ScreenshotOptions&)>)>& getPictureTakenConnector() = 0;
    // clang-format on
#else // @header-generator platform
    virtual ::Bedrock::PubSub::Connector<void(
        ::cg::ImageBuffer&,
        ::Actor*,
        ::Actor*,
        ::ScreenshotOptions&,
        ::std::function<void(::cg::ImageBuffer&, ::ScreenshotOptions&)>
    )>&
    getPictureTakenConnector() = 0;
#endif // @header-generator platform
    // NOLINTEND
};
