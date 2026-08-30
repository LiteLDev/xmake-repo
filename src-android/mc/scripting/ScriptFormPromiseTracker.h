#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"
#include "mc/deps/script_core/lifetime_registry/scripting/StrongTypedObjectHandle.h"
#include "mc/deps/script_core/script_engine/scripting/Promise.h"
#include "mc/network/NetworkIdentifier.h"
#include "mc/scripting/DataDrivenScreenPromise.h"
#include "mc/scripting/modules/minecraft_ui/ScriptActionFormResponse.h"
#include "mc/scripting/modules/minecraft_ui/ScriptFormRejectError.h"
#include "mc/scripting/modules/minecraft_ui/ScriptMessageFormResponse.h"
#include "mc/scripting/modules/minecraft_ui/ScriptMessageFormResponseV2.h"
#include "mc/scripting/modules/minecraft_ui/ScriptModalFormResponse.h"
#include "mc/scripting/modules/minecraft_ui/ScriptModalFormResponseV2.h"
#include "mc/world/events/EventListenerDispatcher.h"
#include "mc/world/events/EventResult.h"
#include "mc/world/events/LevelEventListener.h"
#include "mc/world/events/PlayerEventListener.h"

// auto generated forward declare list
// clang-format off
class LevelEventCoordinator;
class Player;
class ServerPlayerEventCoordinator;
struct PlayerDataDrivenScreenClosedEvent;
struct PlayerFormCloseEvent;
struct PlayerFormResponseEvent;
struct ServerScriptManagerEvents;
namespace Json { class Value; }
// clang-format on

class ScriptFormPromiseTracker : public ::Bedrock::EnableNonOwnerReferences,
                                 public ::EventListenerDispatcher<PlayerEventListener>,
                                 public ::EventListenerDispatcher<LevelEventListener> {
public:
    // ScriptFormPromiseTracker inner types declare
    // clang-format off
    struct FromRequest;
    // clang-format on

    // ScriptFormPromiseTracker inner types define
    struct FromRequest {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 88>                     mPromise;
        ::ll::TypedStorage<8, 176, ::NetworkIdentifier> mClientNetworkIdentifier;
        // NOLINTEND

    public:
        // prevent constructor by default
        FromRequest& operator=(FromRequest const&);
        FromRequest(FromRequest const&);
        FromRequest();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ~FromRequest();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>                                 mReloadSub;
    ::ll::TypedStorage<8, 8, ::LevelEventCoordinator&>                                         mLevelEventCoordinator;
    ::ll::TypedStorage<8, 8, ::ServerPlayerEventCoordinator&>                                  mPlayerEventCoordinator;
    ::ll::TypedStorage<4, 4, uint>                                                             mLastRequestId;
    ::ll::TypedStorage<8, 40, std::unordered_map<uint, ScriptFormPromiseTracker::FromRequest>> mFormRequests;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptFormPromiseTracker& operator=(ScriptFormPromiseTracker const&);
    ScriptFormPromiseTracker(ScriptFormPromiseTracker const&);
    ScriptFormPromiseTracker();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ScriptFormPromiseTracker();

    virtual ::EventResult onEvent(::PlayerDataDrivenScreenClosedEvent const&);

    virtual ::EventResult onEvent(::PlayerFormCloseEvent const&);

    virtual ::EventResult onEvent(::PlayerFormResponseEvent const&);

    virtual ::EventResult onLevelRemovedPlayer(::Player&);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI
    ScriptFormPromiseTracker(::ServerScriptManagerEvents&, ::LevelEventCoordinator&, ::ServerPlayerEventCoordinator&);

    MCNAPI void handleFormClose(::PlayerFormCloseEvent const&);

    MCNAPI void handleFormResponse(uint, ::Json::Value const&);

    MCNAPI void handlePlayerQuit(::NetworkIdentifier const&);

    MCNAPI void rejectAll();

    MCNAPI void showDataDrivenScreenToPlayer(
        ::Player const&,
        std::string const&,
        std::optional<uint>,
        std::shared_ptr<DataDrivenScreenPromise>
    );
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::NetworkIdentifier _getPlayerNetworkId(::Player const&);

    MCNAPI static void _sendToClient(::Player const&, ::Json::Value, uint const);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ServerScriptManagerEvents&, ::LevelEventCoordinator&, ::ServerPlayerEventCoordinator&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::EventResult $onEvent(::PlayerDataDrivenScreenClosedEvent const&);

    MCNAPI ::EventResult $onEvent(::PlayerFormCloseEvent const&);

    MCNAPI ::EventResult $onEvent(::PlayerFormResponseEvent const&);

    MCNAPI ::EventResult $onLevelRemovedPlayer(::Player&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
