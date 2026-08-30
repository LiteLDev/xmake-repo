#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/resources/AllowListPath.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class DateManager;
namespace OreUI { class IResourceAllowList; }
namespace Screenshots { struct GalleryScreenshot; }
namespace Screenshots { struct LocalScreenshot; }
namespace Screenshots { struct ShowcasedScreenshot; }
// clang-format on

namespace OreUI {

struct GalleryScreenshot {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string> id;
    ::ll::UntypedStorage<8, 72>            thumbnail;
    ::ll::UntypedStorage<8, 72>            image;
    ::ll::TypedStorage<8, 24, std::string> filePath;
    ::ll::TypedStorage<8, 8, long>         captureTime;
    ::ll::TypedStorage<8, 24, std::string> captureTimeLabel;
    ::ll::TypedStorage<8, 8, long>         lastModifiedTime;
    ::ll::TypedStorage<1, 1, bool>         showcased;
    ::ll::TypedStorage<1, 1, bool>         featured;
    ::ll::TypedStorage<1, 1, bool>         loadingImage;
    // NOLINTEND

public:
    // prevent constructor by default
    GalleryScreenshot& operator=(GalleryScreenshot const&);
    GalleryScreenshot(GalleryScreenshot const&);
    GalleryScreenshot();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~GalleryScreenshot();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace OreUI
