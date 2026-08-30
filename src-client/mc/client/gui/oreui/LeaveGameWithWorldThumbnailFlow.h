#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/util/ScreenshotOptions.h"
#include "mc/client/util/renderdragon/PendingScreenshotImage.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class CubemapBackgroundResources;
class ILevelListCache;
class LocalPlayer;
struct IGameServerShutdown;
namespace mce { struct ViewportInfo; }
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
        ::ll::TypedStorage<8, 24, ::renderdragon::PendingScreenshotImage> mImage;
        ::ll::TypedStorage<8, 264, ::ScreenshotOptions>                   mOptions;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::IGameServerShutdown&>          mGameServerShutdown;
    ::ll::TypedStorage<8, 40, ::std::optional<::std::string>> mFriendsWorldToJoin;
    ::ll::TypedStorage<8, 296, ::std::optional<::OreUI::LeaveGameWithWorldThumbnailFlow::PendingScreenshot>>
        mPendingScreenshot;
    // NOLINTEND

public:
    // prevent constructor by default
    LeaveGameWithWorldThumbnailFlow& operator=(LeaveGameWithWorldThumbnailFlow const&);
    LeaveGameWithWorldThumbnailFlow(LeaveGameWithWorldThumbnailFlow const&);
    LeaveGameWithWorldThumbnailFlow();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI bool _beginLeaveGame(
        ::LocalPlayer*                                                     player,
        ::mce::ViewportInfo const&                                         viewportInfo,
        ::ILevelListCache&                                                 levelListCache,
        ::Bedrock::NotNullNonOwnerPtr<::CubemapBackgroundResources> const& cubemapBackgroundResources,
        ::std::optional<::std::string>                                     currentLevelId
    );

    MCAPI void _finalizeLeaveGame();

    MCAPI void requestLeaveGame(
        ::LocalPlayer*                                                     player,
        ::mce::ViewportInfo const&                                         viewportInfo,
        ::ILevelListCache&                                                 levelListCache,
        ::Bedrock::NotNullNonOwnerPtr<::CubemapBackgroundResources> const& cubemapBackgroundResources,
        ::std::optional<::std::string>                                     currentLevelId
    );

    MCAPI void requestLeaveGameThenJoinFriendsWorld(
        ::std::string_view                                                 friendsWorldServerId,
        ::LocalPlayer*                                                     player,
        ::mce::ViewportInfo const&                                         viewportInfo,
        ::ILevelListCache&                                                 levelListCache,
        ::Bedrock::NotNullNonOwnerPtr<::CubemapBackgroundResources> const& cubemapBackgroundResources,
        ::std::optional<::std::string>                                     currentLevelId
    );

    MCAPI void update(::LocalPlayer* player);
    // NOLINTEND
};

} // namespace OreUI
