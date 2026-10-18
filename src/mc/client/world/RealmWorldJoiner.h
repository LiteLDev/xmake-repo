#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/screens/ProgressScreenNavigation.h"
#include "mc/client/network/realms/FailureReason.h"
#include "mc/client/network/realms/GenericStatus.h"
#include "mc/client/network/realms/RealmsAPI.h"
#include "mc/client/realms/PlayerRoleActions.h"
#include "mc/client/world/JoinRealmWorldResult.h"
#include "mc/deps/core/http/StatusCode.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/pub_sub/Publisher.h"
#include "mc/deps/core/utility/pub_sub/ReturnPolicyType.h"
#include "mc/events/IMinecraftEventing.h"
#include "mc/options/option_types/OptionID.h"
#include "mc/world/actor/player/LoadingState.h"

// auto generated forward declare list
// clang-format off
class AsyncTracker;
class IAppPlatform;
class IClientInstance;
class IMinecraftEventing;
class INetworkGameConnector;
class ProgressHandler;
class RealmsAPI;
struct IGameServerShutdown;
namespace Bedrock::PubSub { class Subscription; }
namespace Bedrock::PubSub::ThreadModel { struct MultiThreaded; }
namespace Parties { class IPartyProvider; }
namespace Realms { struct RealmId; }
namespace Realms { struct World; }
namespace Social { class GameConnectionInfo; }
namespace Social { class IUserManager; }
namespace World { struct RealmsJoinData; }
// clang-format on

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/screens/ProgressScreenNavigation.h"
#include "mc/client/network/realms/FailureReason.h"
#include "mc/client/network/realms/GenericStatus.h"
#include "mc/client/network/realms/RealmsAPI.h"
#include "mc/client/realms/PlayerRoleActions.h"
#include "mc/client/world/JoinRealmWorldResult.h"
#include "mc/deps/core/http/StatusCode.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/pub_sub/Publisher.h"
#include "mc/events/IMinecraftEventing.h"
#include "mc/options/option_types/OptionID.h"

// auto generated forward declare list
// clang-format off
class AsyncTracker;
class IAppPlatform;
class IClientInstance;
class IMinecraftEventing;
class INetworkGameConnector;
class ProgressHandler;
class RealmsAPI;
struct IGameServerShutdown;
namespace Bedrock::PubSub::ThreadModel { struct MultiThreaded; }
namespace Parties { class IPartyProvider; }
namespace Realms { struct World; }
namespace Social { class GameConnectionInfo; }
namespace Social { class IUserManager; }
namespace World { struct RealmsJoinData; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace World {

#if defined(LL_PLAT_A) // @header-generator platform
class RealmWorldJoiner {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::IClientInstance&>            mClient;
    ::ll::TypedStorage<8, 8, ::INetworkGameConnector&>      mNetworkGameConnector;
    ::ll::TypedStorage<8, 8, ::IGameServerShutdown&>        mGameServerShutdown;
    ::ll::TypedStorage<8, 8, ::IMinecraftEventing&>         mMinecraftEventing;
    ::ll::TypedStorage<8, 16, std::weak_ptr<RealmsAPI>>     mRealmsAPI;
    ::ll::UntypedStorage<8, 24>                             mUserManager;
    ::ll::UntypedStorage<8, 24>                             mAppPlatform;
    ::ll::UntypedStorage<8, 96>                             mJoinRealmWorldResultPublisher;
    ::ll::UntypedStorage<8, 96>                             mProgressScreenNavigation;
    ::ll::UntypedStorage<8, 48>                             mGetPartyProvider;
    ::ll::UntypedStorage<8, 48>                             mCanUserDoRealmRoleAction;
    ::ll::TypedStorage<8, 8, std::unique_ptr<AsyncTracker>> mAsyncTracker;
    ::ll::TypedStorage<1, 1, bool>                          mJoinRealmWorldInProgress;
    ::ll::TypedStorage<1, 1, bool>                          mIsEditorMode;
    ::ll::TypedStorage<8, 24, std::string>                  mRealmName;
    ::ll::TypedStorage<8, 24, std::vector<std::string>>     mRealmXuids;
    // NOLINTEND

public:
    // prevent constructor by default
    RealmWorldJoiner& operator=(RealmWorldJoiner const&);
    RealmWorldJoiner(RealmWorldJoiner const&);
    RealmWorldJoiner();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI RealmWorldJoiner(
        ::IClientInstance&,
        ::INetworkGameConnector&,
        ::IGameServerShutdown&,
        ::IMinecraftEventing&,
        ::gsl::not_null<Bedrock::NonOwnerPointer<Social::IUserManager>> const&,
        ::Bedrock::NonOwnerPointer<IAppPlatform> const&,
        std::weak_ptr<RealmsAPI>,
        ::ui::ProgressScreenNavigation,
        std::function<Bedrock::NonOwnerPointer<Parties::IPartyProvider>()>,
        std::function<bool(const Realms::World&, Realms::PlayerRoleActions)>
    );

    MCNAPI bool _isUserWorldOwner(::Realms::World const&) const;

    MCNAPI void _joinRealm(
        ::IMinecraftEventing::RealmConnectionFlow,
        ::Realms::World&,
        std::function<void(std::unique_ptr<ProgressHandler>, std::unique_ptr<ProgressHandler>)>,
        std::function<void(
            IMinecraftEventing::RealmConnectionResult,
            std::optional<Realms::FailureReason>,
            std::optional<World::RealmsJoinData>
        )>
    );

    MCNAPI void _joinRealmsWorld(
        ::Realms::World,
        std::function<void(const Social::GameConnectionInfo&, bool)>,
        std::function<void(Realms::GenericStatus, RealmsAPI::JoinStatus, Realms::FailureReason)>,
        std::function<void(int)>,
        ::IMinecraftEventing::RealmConnectionFlow,
        std::function<void(IMinecraftEventing::RealmConnectionFlow)>,
        std::function<void(IMinecraftEventing::RealmConnectionFlow, Bedrock::Http::StatusCode)>
    );

    MCNAPI bool _shouldShowRealmWarning(::OptionID) const;

    MCNAPI std::string const getCurrentRealmName();

    MCNAPI std::vector<std::string> const getCurrentRealmUninvitedXuids();

    MCNAPI void joinRealmWorld(
        ::Realms::RealmId,
        ::IMinecraftEventing::RealmConnectionFlow,
        std::function<void(World::JoinRealmWorldResult)>,
        std::function<void(std::unique_ptr<ProgressHandler>, std::unique_ptr<ProgressHandler>)>,
        std::function<void(
            IMinecraftEventing::RealmConnectionResult,
            std::optional<Realms::FailureReason>,
            std::optional<World::RealmsJoinData>
        )>
    );

    MCNAPI void joinRealmWorldV2(std::string const&, ::IMinecraftEventing::RealmConnectionFlow);

    MCNAPI void resetJoinRealmWarningModals();

    MCNAPI void resetState();

    MCNAPI ::Bedrock::PubSub::Subscription
        subscribeToJoinRealmWorldResultPublisher(std::function<void(World::JoinRealmWorldResult)>);

    MCNAPI ~RealmWorldJoiner();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::IClientInstance&,
        ::INetworkGameConnector&,
        ::IGameServerShutdown&,
        ::IMinecraftEventing&,
        ::gsl::not_null<Bedrock::NonOwnerPointer<Social::IUserManager>> const&,
        ::Bedrock::NonOwnerPointer<IAppPlatform> const&,
        std::weak_ptr<RealmsAPI>,
        ::ui::ProgressScreenNavigation,
        std::function<Bedrock::NonOwnerPointer<Parties::IPartyProvider>()>,
        std::function<bool(const Realms::World&, Realms::PlayerRoleActions)>
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
class RealmWorldJoiner {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::IClientInstance&>                                  mClient;
    ::ll::TypedStorage<8, 8, ::INetworkGameConnector&>                            mNetworkGameConnector;
    ::ll::TypedStorage<8, 8, ::IGameServerShutdown&>                              mGameServerShutdown;
    ::ll::TypedStorage<8, 8, ::IMinecraftEventing&>                               mMinecraftEventing;
    ::ll::TypedStorage<8, 16, ::std::weak_ptr<::RealmsAPI>>                       mRealmsAPI;
    ::ll::TypedStorage<8, 24, ::Bedrock::NonOwnerPointer<::Social::IUserManager>> mUserManager;
    ::ll::TypedStorage<8, 24, ::Bedrock::NonOwnerPointer<::IAppPlatform>>         mAppPlatform;
    ::ll::TypedStorage<
        8,
        128,
        ::Bedrock::PubSub::
            Publisher<void(::World::JoinRealmWorldResult), ::Bedrock::PubSub::ThreadModel::MultiThreaded, 0>>
                                                               mJoinRealmWorldResultPublisher;
    ::ll::TypedStorage<8, 104, ::ui::ProgressScreenNavigation> mProgressScreenNavigation;
    ::ll::TypedStorage<8, 64, ::std::function<::Bedrock::NonOwnerPointer<::Parties::IPartyProvider>()>>
        mGetPartyProvider;
    ::ll::TypedStorage<8, 64, ::std::function<bool(::Realms::World const&, ::Realms::PlayerRoleActions)>>
                                                                mCanUserDoRealmRoleAction;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::AsyncTracker>> mAsyncTracker;
    ::ll::TypedStorage<1, 1, bool>                              mJoinRealmWorldInProgress;
    ::ll::TypedStorage<1, 1, bool>                              mIsEditorMode;
    ::ll::TypedStorage<8, 32, ::std::string>                    mRealmName;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::string>>     mRealmXuids;
    // NOLINTEND

public:
    // prevent constructor by default
    RealmWorldJoiner& operator=(RealmWorldJoiner const&);
    RealmWorldJoiner(RealmWorldJoiner const&);
    RealmWorldJoiner();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI bool _isUserWorldOwner(::Realms::World const& world) const;

    MCAPI void _joinRealm(
        ::IMinecraftEventing::RealmConnectionFlow fromFlow,
        ::Realms::World&                          world,
        ::std::function<void(::std::unique_ptr<::ProgressHandler>, ::std::unique_ptr<::ProgressHandler>)>
            onRealmFetchedCallback,
        ::std::function<void(
            ::IMinecraftEventing::RealmConnectionResult,
            ::std::optional<::Realms::FailureReason>,
            ::std::optional<::World::RealmsJoinData>
        )>  onRealmJoinedCallback
    );

    MCAPI void _joinRealmsWorld(
        ::Realms::World                                                  world,
        ::std::function<void(::Social::GameConnectionInfo const&, bool)> successCallback,
        ::std::function<void(::Realms::GenericStatus, ::RealmsAPI::JoinStatus, ::Realms::FailureReason)> failCallback,
        ::std::function<void(int)>                                                                       retryCallback,
        ::IMinecraftEventing::RealmConnectionFlow                        realmConnectionFlow,
        ::std::function<void(::IMinecraftEventing::RealmConnectionFlow)> broadcastConnectionEventRealmsRequestFunction,
        ::std::function<void(::IMinecraftEventing::RealmConnectionFlow, ::Bedrock::Http::StatusCode)>
            broadcastConnectionEventRealmsResponseFunction
    );

    MCAPI bool _shouldShowRealmWarning(::OptionID optionID) const;

    MCAPI void joinRealmWorldV2(::std::string const& realmIdString, ::IMinecraftEventing::RealmConnectionFlow fromFlow);

    MCAPI void resetJoinRealmWarningModals();

    MCAPI ~RealmWorldJoiner();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
#else // @header-generator platform
class RealmWorldJoiner {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace World
