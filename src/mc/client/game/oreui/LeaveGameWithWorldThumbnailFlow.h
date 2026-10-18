#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_C) // @header-generator platform

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class CubemapBackgroundResources;
class ILevelListCache;
class LocalPlayer;
namespace mce { struct ViewportInfo; }
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform

namespace OreUI {

class LeaveGameWithWorldThumbnailFlow {
public:
    // LeaveGameWithWorldThumbnailFlow inner types declare
    // clang-format off
    struct PendingScreenshot;
    // clang-format on

    // LeaveGameWithWorldThumbnailFlow inner types define
#if defined(LL_PLAT_C) // @header-generator platform
    struct PendingScreenshot {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 24>  mUnkb16ba9;
        ::ll::UntypedStorage<8, 264> mUnkfad33a;
        // NOLINTEND

    public:
        // prevent constructor by default
        PendingScreenshot& operator=(PendingScreenshot const&);
        PendingScreenshot(PendingScreenshot const&);
        PendingScreenshot();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>   mUnk255d2b;
    ::ll::UntypedStorage<8, 40>  mUnkd09dee;
    ::ll::UntypedStorage<8, 296> mUnkab4db3;
    // NOLINTEND

public:
    // prevent constructor by default
    LeaveGameWithWorldThumbnailFlow& operator=(LeaveGameWithWorldThumbnailFlow const&);
    LeaveGameWithWorldThumbnailFlow(LeaveGameWithWorldThumbnailFlow const&);
    LeaveGameWithWorldThumbnailFlow();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI bool _beginLeaveGame(
        ::LocalPlayer*                                                     player,
        ::mce::ViewportInfo const&                                         viewportInfo,
        ::ILevelListCache&                                                 levelListCache,
        ::Bedrock::NotNullNonOwnerPtr<::CubemapBackgroundResources> const& cubemapBackgroundResources,
        ::std::optional<::std::string>                                     currentLevelId
    );

    MCNAPI void _finalizeLeaveGame();

    MCNAPI void requestLeaveGame(
        ::LocalPlayer*                                                     player,
        ::mce::ViewportInfo const&                                         viewportInfo,
        ::ILevelListCache&                                                 levelListCache,
        ::Bedrock::NotNullNonOwnerPtr<::CubemapBackgroundResources> const& cubemapBackgroundResources,
        ::std::optional<::std::string>                                     currentLevelId
    );

    MCNAPI void requestLeaveGameThenJoinFriendsWorld(
        ::std::string_view                                                 friendsWorldServerId,
        ::LocalPlayer*                                                     player,
        ::mce::ViewportInfo const&                                         viewportInfo,
        ::ILevelListCache&                                                 levelListCache,
        ::Bedrock::NotNullNonOwnerPtr<::CubemapBackgroundResources> const& cubemapBackgroundResources,
        ::std::optional<::std::string>                                     currentLevelId
    );

    MCNAPI void update(::LocalPlayer* player);
    // NOLINTEND
#else // @header-generator platform
    struct PendingScreenshot {};
#endif // @header-generator platform
};

} // namespace OreUI
#endif // @header-generator platform
