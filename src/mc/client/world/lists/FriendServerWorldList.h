#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/network/ServerID.h"
#include "mc/client/world/NetworkWorldInfo.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::PubSub { class Subscription; }
namespace Realms { struct RealmId; }
namespace Social { class MultiplayerGameInfo; }
namespace Social { class MultiplayerServiceManager; }
// clang-format on

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/network/ServerID.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
struct NetworkWorldInfo;
namespace Bedrock::PubSub { class Subscription; }
namespace Realms { struct RealmId; }
namespace Social { class MultiplayerServiceManager; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace World {

#if defined(LL_PLAT_A) // @header-generator platform
class FriendServerWorldList {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 48>                                                        mGetMultiplayerServiceManager;
    ::ll::UntypedStorage<8, 48>                                                        mIsRealmJoinable;
    ::ll::UntypedStorage<8, 48>                                                        mIsEditorModeEnabled;
    ::ll::TypedStorage<8, 40, std::unordered_map<Network::ServerID, NetworkWorldInfo>> mServerList;
    ::ll::TypedStorage<8, 8, double>                                                   mLastUpdateMs;
    ::ll::TypedStorage<1, 1, bool>                                                     mIsInTrialmode;
    ::ll::UntypedStorage<1, 15>                                                        mIsDirty;
    // NOLINTEND

public:
    // prevent constructor by default
    FriendServerWorldList();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI FriendServerWorldList(
        std::function<gsl::not_null<Bedrock::NonOwnerPointer<Social::MultiplayerServiceManager>>()>,
        std::function<bool(Realms::RealmId)>,
        std::function<bool()>
    );

    MCNAPI void _refreshWorlds();

    MCNAPI std::optional<Realms::RealmId> getRealmIdByUserId(std::string const&) const;

    MCNAPI std::optional<Network::ServerID> getServerIdByUserId(std::string const&) const;

    MCNAPI ::NetworkWorldInfo const* getWorld(::Network::ServerID const&) const;

    MCNAPI std::unordered_map<Network::ServerID, NetworkWorldInfo> const& getWorlds() const;

    MCNAPI void onTrialModeChanged(bool);

    MCNAPI ::Bedrock::PubSub::Subscription subscribeToBuildGameList();

    MCNAPI void update();

    MCNAPI void userControlledUpdateGameList();

    MCNAPI ~FriendServerWorldList();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        std::function<gsl::not_null<Bedrock::NonOwnerPointer<Social::MultiplayerServiceManager>>()>,
        std::function<bool(Realms::RealmId)>,
        std::function<bool()>
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
class FriendServerWorldList {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 64, ::std::function<::Bedrock::NotNullNonOwnerPtr<::Social::MultiplayerServiceManager>()>>
                                                                        mGetMultiplayerServiceManager;
    ::ll::TypedStorage<8, 64, ::std::function<bool(::Realms::RealmId)>> mIsRealmJoinable;
    ::ll::TypedStorage<8, 64, ::std::function<bool()>>                  mIsEditorModeEnabled;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::Network::ServerID, ::NetworkWorldInfo>> mServerList;
    ::ll::TypedStorage<8, 8, double>                                                         mLastUpdateMs;
    ::ll::TypedStorage<1, 1, bool>                                                           mIsInTrialmode;
    ::ll::TypedStorage<1, 1, bool>                                                           mIsDirty;
    // NOLINTEND

public:
    // prevent constructor by default
    FriendServerWorldList();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI FriendServerWorldList(
        ::std::function<::Bedrock::NotNullNonOwnerPtr<::Social::MultiplayerServiceManager>()>
                                                 getMultiplayerServiceManager,
        ::std::function<bool(::Realms::RealmId)> isRealmJoinable,
        ::std::function<bool()>                  isEditorModeEnabled
    );

    MCAPI void _refreshWorlds();

    MCAPI ::std::optional<::Network::ServerID> getServerIdByUserId(::std::string const& userId) const;

    MCAPI ::NetworkWorldInfo const* getWorld(::Network::ServerID const& serverId) const;

    MCAPI ::Bedrock::PubSub::Subscription subscribeToBuildGameList();

    MCFOLD void userControlledUpdateGameList();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::std::function<::Bedrock::NotNullNonOwnerPtr<::Social::MultiplayerServiceManager>()>
                                                 getMultiplayerServiceManager,
        ::std::function<bool(::Realms::RealmId)> isRealmJoinable,
        ::std::function<bool()>                  isEditorModeEnabled
    );
    // NOLINTEND
};
#else // @header-generator platform
class FriendServerWorldList {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace World
