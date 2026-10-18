#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/oreui/binding/facets/vanilla/data/ConnectionType.h"
#include "mc/client/gui/oreui/resources/AllowListPath.h"
#include "mc/client/gui/oreui/resources/AllowListProfileImage.h"
#include "mc/deps/core/platform/BuildPlatform.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"
#include "mc/legacy/ActorUniqueID.h"
#include "mc/platform/UUID.h"
#include "mc/server/commands/PlayerPermissionLevel.h"

// auto generated forward declare list
// clang-format off
class LocalPlayer;
class PlayerListEntry;
namespace Social { class User; }
// clang-format on

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/oreui/binding/facets/vanilla/data/ConnectionType.h"
#include "mc/client/gui/oreui/resources/AllowListPath.h"
#include "mc/client/gui/oreui/resources/AllowListProfileImage.h"
#include "mc/deps/core/platform/BuildPlatform.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"
#include "mc/legacy/ActorUniqueID.h"
#include "mc/platform/UUID.h"
#include "mc/server/commands/PlayerPermissionLevel.h"

// auto generated forward declare list
// clang-format off
class LocalPlayer;
class PlayerListEntry;
namespace Social { class User; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace OreUI {

#if defined(LL_PLAT_A) // @header-generator platform
struct WorldPlayerInfoBindings {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::ActorUniqueID>                      mId;
    ::ll::TypedStorage<8, 24, std::string>                         mIdString;
    ::ll::TypedStorage<8, 16, ::mce::UUID>                         mPlayerUUID;
    ::ll::TypedStorage<8, 24, std::string>                         mXUID;
    ::ll::TypedStorage<8, 24, std::string>                         mPlatformOnlineId;
    ::ll::TypedStorage<8, 24, std::string>                         mPlayerName;
    ::ll::TypedStorage<8, 112, ::OreUI::AllowListProfileImage>     mProfileImage;
    ::ll::UntypedStorage<8, 72>                                    mPlatformImage;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>     mProfileSubscription;
    ::ll::TypedStorage<1, 2, std::optional<PlayerPermissionLevel>> mPermissionLevel;
    ::ll::TypedStorage<1, 1, ::OreUI::ConnectionType>              mConnectionType;
    ::ll::TypedStorage<4, 4, ::BuildPlatform>                      mPlatform;
    ::ll::TypedStorage<1, 1, bool>                                 mIsHost;
    // NOLINTEND

public:
    // prevent constructor by default
    WorldPlayerInfoBindings& operator=(WorldPlayerInfoBindings const&);
    WorldPlayerInfoBindings(WorldPlayerInfoBindings const&);
    WorldPlayerInfoBindings();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI WorldPlayerInfoBindings(::mce::UUID const, ::PlayerListEntry const*, std::optional<PlayerPermissionLevel>);

    MCNAPI WorldPlayerInfoBindings(
        ::mce::UUID const,
        ::LocalPlayer const*,
        std::shared_ptr<Social::User>,
        std::optional<PlayerPermissionLevel>,
        bool,
        ::BuildPlatform
    );

    MCNAPI std::string const& getActiveProfileImage() const;

    MCNAPI ::OreUI::ConnectionType getConnectionType() const;

    MCNAPI bool hasAnyProfileId() const;

    MCNAPI ~WorldPlayerInfoBindings();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::mce::UUID const, ::PlayerListEntry const*, std::optional<PlayerPermissionLevel>);

    MCNAPI void* $ctor(
        ::mce::UUID const,
        ::LocalPlayer const*,
        std::shared_ptr<Social::User>,
        std::optional<PlayerPermissionLevel>,
        bool,
        ::BuildPlatform
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
struct WorldPlayerInfoBindings {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::ActorUniqueID>                          mId;
    ::ll::TypedStorage<8, 32, ::std::string>                           mIdString;
    ::ll::TypedStorage<8, 16, ::mce::UUID>                             mPlayerUUID;
    ::ll::TypedStorage<8, 32, ::std::string>                           mXUID;
    ::ll::TypedStorage<8, 32, ::std::string>                           mPlatformOnlineId;
    ::ll::TypedStorage<8, 32, ::std::string>                           mPlayerName;
    ::ll::TypedStorage<8, 144, ::OreUI::AllowListProfileImage>         mProfileImage;
    ::ll::TypedStorage<8, 96, ::OreUI::AllowListPath>                  mPlatformImage;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>         mProfileSubscription;
    ::ll::TypedStorage<1, 2, ::std::optional<::PlayerPermissionLevel>> mPermissionLevel;
    ::ll::TypedStorage<1, 1, ::OreUI::ConnectionType>                  mConnectionType;
    ::ll::TypedStorage<4, 4, ::BuildPlatform>                          mPlatform;
    ::ll::TypedStorage<1, 1, bool>                                     mIsHost;
    // NOLINTEND

public:
    // prevent constructor by default
    WorldPlayerInfoBindings();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI WorldPlayerInfoBindings(
        ::mce::UUID                              uuid,
        ::PlayerListEntry const*                 playerDetails,
        ::std::optional<::PlayerPermissionLevel> playerPermissionLevel
    );

    MCAPI WorldPlayerInfoBindings(
        ::mce::UUID                              uuid,
        ::LocalPlayer const*                     localPlayer,
        ::std::shared_ptr<::Social::User>        user,
        ::std::optional<::PlayerPermissionLevel> playerPermissionLevel,
        bool                                     isHost,
        ::BuildPlatform                          platform
    );

    MCAPI ::std::string const& getActiveProfileImage() const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::mce::UUID                              uuid,
        ::PlayerListEntry const*                 playerDetails,
        ::std::optional<::PlayerPermissionLevel> playerPermissionLevel
    );

    MCAPI void* $ctor(
        ::mce::UUID                              uuid,
        ::LocalPlayer const*                     localPlayer,
        ::std::shared_ptr<::Social::User>        user,
        ::std::optional<::PlayerPermissionLevel> playerPermissionLevel,
        bool                                     isHost,
        ::BuildPlatform                          platform
    );
    // NOLINTEND
};
#else // @header-generator platform
struct WorldPlayerInfoBindings {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace OreUI
