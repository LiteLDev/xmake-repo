#pragma once

#include "mc/_HeaderOutputPredefine.h"

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

namespace OreUI {

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

} // namespace OreUI
