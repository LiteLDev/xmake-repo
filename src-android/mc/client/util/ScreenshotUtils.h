#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/util/ScreenshotPostProcessFilter.h"
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/threading/Async.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class Actor;
class IClientInstance;
struct ScreenshotCaptureParams;
struct ScreenshotOptions;
namespace Core { class Path; }
namespace Core { template<typename T0, int T1> class BasicStackString; }
namespace cg { class ImageBuffer; }
namespace mce { struct ViewportInfo; }
namespace renderdragon { struct CompletedScreenshotImage; }
namespace renderdragon { struct PendingScreenshotImage; }
// clang-format on

struct ScreenshotUtils {
public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static bool captureScreenFromLegacyRendererAsRGB(::cg::ImageBuffer&);

    MCNAPI static bool
    captureScreenshot(::renderdragon::CompletedScreenshotImage, ::ScreenshotOptions&, ::Actor const*);

    MCNAPI static bool captureScreenshot(
        ::cg::ImageBuffer&,
        ::gsl::not_null<Bedrock::NonOwnerPointer<IClientInstance>> const&,
        ::ScreenshotOptions&,
        ::Actor const*
    );

    MCNAPI static std::optional<renderdragon::PendingScreenshotImage> captureScreenshot(::mce::ViewportInfo const&);

    MCNAPI static std::optional<renderdragon::PendingScreenshotImage>
    captureScreenshot(::mce::ViewportInfo const&, ::ScreenshotCaptureParams const&);

    MCNAPI static bool checkEncryptedChecksumFile(::Core::Path const&);

    MCNAPI static bool composeScreenshot(::cg::ImageBuffer&, ::ScreenshotOptions&, ::Actor const*);

    MCNAPI static bool createEncryptedChecksumFile(::Core::Path const&);

    MCNAPI static std::optional<cg::ImageBuffer>
    extractUncomposedScreenshot(::renderdragon::CompletedScreenshotImage, ::ScreenshotOptions const&);

    MCNAPI static ::ScreenshotPostProcessFilter getFilterFromString(std::string const&);

    MCNAPI static ::Bedrock::Threading::Async<Core::PathBuffer<std::string>>
    requestScreenshot(::gsl::not_null<Bedrock::NonOwnerPointer<IClientInstance>> const&, ::ScreenshotOptions&);

    MCNAPI static ::Core::PathBuffer<Core::BasicStackString<char, 1024>>
    setScreenshotOptionsFilePath(::ScreenshotOptions&, ::Actor const*);
    // NOLINTEND
};
