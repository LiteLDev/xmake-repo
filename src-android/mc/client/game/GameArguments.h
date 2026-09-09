#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/game/LocalWorldConnectArgumentHandler.h"
#include "mc/client/game/SessionIdArgumentHandler.h"
#include "mc/client/gui/screens/controllers/InventoryTabIndex.h"
#include "mc/client/gui/screens/controllers/MarketplacePassTabIndex.h"
#include "mc/client/resources/LoadImportedLevelData.h"
#include "mc/deps/application/UriListener.h"
#include "mc/deps/core/minecraft/threading/EnableQueueForMainThread.h"
#include "mc/deps/core/platform/ActivationUri.h"
#include "mc/deps/core/threading/Async.h"
#include "mc/deps/core/threading/TaskGroup.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"
#include "mc/world/level/GameType.h"

// auto generated forward declare list
// clang-format off
class DefaultImportContext;
class IMinecraftGame;
class WebToken;
struct TransferToLocalWorldContext;
namespace Json { class Value; }
namespace Json { enum ValueType : uchar; }
namespace Realms { struct RealmId; }
// clang-format on

class GameArguments : public ::UriListener, public ::Bedrock::Threading::EnableQueueForMainThread {
public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<8, 8, ::IMinecraftGame&> mMinecraft;
    ::ll::TypedStorage<8, 24, std::vector<ActivationUri>> mQueuedUris;
    ::ll::TypedStorage<8, 24, std::vector<ActivationUri>> mStartupUris;
    ::ll::TypedStorage<8, 32, ::SessionIdArgumentHandler> mSessionIdArgumentHandler;
    ::ll::TypedStorage<8, 32, ::LocalWorldConnectArgumentHandler> mLocalWorldConnectArgumentHandler;
    ::ll::TypedStorage<8, 8, std::chrono::time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>>> mIdentityTimeoutStart;
    ::ll::TypedStorage<1, 1, bool> mIdentityListenerRegistered;
    ::ll::TypedStorage<1, 1, bool> mPlayfabSignInComplete;
    ::ll::TypedStorage<8, 240, ::TaskGroup> mTaskGroup;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mSignInSubscription;
    // clang-format on
    // NOLINTEND

public:
    // prevent constructor by default
    GameArguments& operator=(GameArguments const&);
    GameArguments(GameArguments const&);
    GameArguments();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~GameArguments();

    virtual void onUri(::ActivationUri const&);

    virtual void tick();

    virtual void executeStartupUris();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit GameArguments(::IMinecraftGame&);

    MCNAPI void _checkStoreArguments(::ActivationUri const&);

    MCNAPI void _deeplinkToServer(std::string const&, int, bool);

    MCNAPI void _goBackPushOrReplaceRoute(std::string const&);

    MCNAPI void _import(std::shared_ptr<DefaultImportContext>, std::string const&, bool, ::LoadImportedLevelData);

    MCNAPI void _onUri(::ActivationUri const&);

    MCNAPI void _queryForRealmAndJoin(::Realms::RealmId const&);

    MCNAPI void _queryForRealmAndOpenStories(::Realms::RealmId const&);

    MCNAPI void _requestAddEduServer(std::string const&);

    MCNAPI void _requestJoinEduServer(std::string const&);

    MCNAPI ::Bedrock::Threading::Async<void> _thirdPartyServersFetched();

    MCNAPI bool _validateJsonMember(::Json::Value const&, std::string const&, ::Json::ValueType const&);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static std::unique_ptr<UriListener> createGameArguments(::IMinecraftGame&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::IMinecraftGame&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $onUri(::ActivationUri const&);

    MCNAPI void $tick();

    MCNAPI void $executeStartupUris();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
