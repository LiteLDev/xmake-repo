#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/util/ScreenshotOptions.h"
#include "mc/client/util/renderdragon/PendingScreenshotImage.h"

// auto generated forward declare list
// clang-format off
struct IGameServerShutdown;
// clang-format on

namespace OreUI {

class LeaveGameWithWorldThumbnailFlow {
public:
    // LeaveGameWithWorldThumbnailFlow inner types declare
    // clang-format off
    struct PendingScreenshot;
    // clang-format on

    // LeaveGameWithWorldThumbnailFlow inner types define
    struct PendingScreenshot {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 24>                     mImage;
        ::ll::TypedStorage<8, 208, ::ScreenshotOptions> mOptions;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::IGameServerShutdown&>      mGameServerShutdown;
    ::ll::TypedStorage<8, 32, std::optional<std::string>> mFriendsWorldToJoin;
    ::ll::UntypedStorage<8, 240>                          mPendingScreenshot;
    // NOLINTEND

public:
    // prevent constructor by default
    LeaveGameWithWorldThumbnailFlow& operator=(LeaveGameWithWorldThumbnailFlow const&);
    LeaveGameWithWorldThumbnailFlow(LeaveGameWithWorldThumbnailFlow const&);
    LeaveGameWithWorldThumbnailFlow();
};

} // namespace OreUI
