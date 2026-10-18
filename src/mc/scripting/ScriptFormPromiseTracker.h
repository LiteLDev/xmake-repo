#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"
#include "mc/deps/script_core/lifetime_registry/scripting/StrongTypedObjectHandle.h"
#include "mc/deps/script_core/script_engine/scripting/Promise.h"
#include "mc/network/NetworkIdentifier.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/scripting/DataDrivenScreenPromise.h"
#include "mc/scripting/modules/minecraft_ui/ScriptActionFormResponse.h"
#include "mc/scripting/modules/minecraft_ui/ScriptFormRejectError.h"
#include "mc/scripting/modules/minecraft_ui/ScriptMessageFormResponse.h"
#include "mc/scripting/modules/minecraft_ui/ScriptMessageFormResponseV2.h"
#include "mc/scripting/modules/minecraft_ui/ScriptModalFormResponse.h"
#include "mc/scripting/modules/minecraft_ui/ScriptModalFormResponseV2.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/world/events/EventListenerDispatcher.h"
#include "mc/world/events/EventResult.h"
#include "mc/world/events/LevelEventListener.h"
#include "mc/world/events/PlayerEventListener.h"

// auto generated forward declare list
// clang-format off
class LevelEventCoordinator;
class Player;
class ServerPlayerEventCoordinator;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
struct DataDrivenScreenPromise;
#endif // @header-generator platform
struct PlayerDataDrivenScreenClosedEvent;
struct PlayerFormCloseEvent;
struct PlayerFormResponseEvent;
struct ServerScriptManagerEvents;
namespace Json { class Value; }
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
namespace ScriptModuleMinecraftServerUI { class ScriptActionFormResponse; }
namespace ScriptModuleMinecraftServerUI { class ScriptFormRejectError; }
namespace ScriptModuleMinecraftServerUI { class ScriptMessageFormResponse; }
namespace ScriptModuleMinecraftServerUI { class ScriptMessageFormResponseV2; }
namespace ScriptModuleMinecraftServerUI { class ScriptModalFormResponse; }
namespace ScriptModuleMinecraftServerUI { class ScriptModalFormResponseV2; }
#endif // @header-generator platform
// clang-format on

class ScriptFormPromiseTracker : public ::Bedrock::EnableNonOwnerReferences,
#if defined(LL_PLAT_A) // @header-generator platform
                                 public ::EventListenerDispatcher<PlayerEventListener>,
                                 public ::EventListenerDispatcher<LevelEventListener> {
#else // @header-generator platform
                                 public ::EventListenerDispatcher<::PlayerEventListener>,
                                 public ::EventListenerDispatcher<::LevelEventListener> {
#endif // @header-generator platform
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
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::UntypedStorage<8, 88>                     mPromise;
#else // @header-generator platform
        ::ll::TypedStorage<
            8,
            88,
            ::std::variant<
                ::Scripting::Promise<
                    ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraftServerUI::ScriptMessageFormResponse>,
                    ::ScriptModuleMinecraftServerUI::ScriptFormRejectError>,
                ::Scripting::Promise<
                    ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraftServerUI::ScriptMessageFormResponseV2>,
                    ::ScriptModuleMinecraftServerUI::ScriptFormRejectError>,
                ::Scripting::Promise<
                    ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraftServerUI::ScriptModalFormResponse>,
                    ::ScriptModuleMinecraftServerUI::ScriptFormRejectError>,
                ::Scripting::Promise<
                    ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraftServerUI::ScriptModalFormResponseV2>,
                    ::ScriptModuleMinecraftServerUI::ScriptFormRejectError>,
                ::Scripting::Promise<
                    ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraftServerUI::ScriptActionFormResponse>,
                    ::ScriptModuleMinecraftServerUI::ScriptFormRejectError>,
                ::std::shared_ptr<::DataDrivenScreenPromise>>>
                                                        mPromise;
#endif // @header-generator platform
        ::ll::TypedStorage<8, 176, ::NetworkIdentifier> mClientNetworkIdentifier;
        // NOLINTEND

    public:
#if defined(LL_PLAT_A) // @header-generator platform
        // prevent constructor by default
        FromRequest& operator=(FromRequest const&);
        FromRequest(FromRequest const&);
        FromRequest();

    public:
#else // @header-generator platform
#endif // @header-generator platform
        // member functions
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        MCNAPI ~FromRequest();
#else // @header-generator platform
        MCAPI ~FromRequest();
#endif // @header-generator platform
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        MCNAPI void $dtor();
#else // @header-generator platform
        MCAPI void $dtor();
#endif // @header-generator platform
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>                                 mReloadSub;
    ::ll::TypedStorage<8, 8, ::LevelEventCoordinator&>                                         mLevelEventCoordinator;
    ::ll::TypedStorage<8, 8, ::ServerPlayerEventCoordinator&>                                  mPlayerEventCoordinator;
    ::ll::TypedStorage<4, 4, uint>                                                             mLastRequestId;
    ::ll::TypedStorage<8, 40, std::unordered_map<uint, ScriptFormPromiseTracker::FromRequest>> mFormRequests;
#else // @header-generator platform
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mReloadSub;
    ::ll::TypedStorage<8, 8, ::LevelEventCoordinator&>         mLevelEventCoordinator;
    ::ll::TypedStorage<8, 8, ::ServerPlayerEventCoordinator&>  mPlayerEventCoordinator;
    ::ll::TypedStorage<4, 4, uint>                             mLastRequestId;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<uint, ::ScriptFormPromiseTracker::FromRequest>> mFormRequests;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptFormPromiseTracker& operator=(ScriptFormPromiseTracker const&);
    ScriptFormPromiseTracker(ScriptFormPromiseTracker const&);
    ScriptFormPromiseTracker();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~ScriptFormPromiseTracker();
#else // @header-generator platform
    virtual ~ScriptFormPromiseTracker() /*override*/ = default;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::EventResult onEvent(::PlayerDataDrivenScreenClosedEvent const&);
#else // @header-generator platform
    virtual ::EventResult onEvent(::PlayerFormResponseEvent const& formResponseEvent) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::EventResult onEvent(::PlayerFormCloseEvent const&);
#else // @header-generator platform
    virtual ::EventResult onEvent(::PlayerFormCloseEvent const& formCloseEvent) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::EventResult onEvent(::PlayerFormResponseEvent const&);
#else // @header-generator platform
    virtual ::EventResult onEvent(::PlayerDataDrivenScreenClosedEvent const& formResponseEvent) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::EventResult onLevelRemovedPlayer(::Player&);
#else // @header-generator platform
    virtual ::EventResult onLevelRemovedPlayer(::Player& player) /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI
    ScriptFormPromiseTracker(::ServerScriptManagerEvents&, ::LevelEventCoordinator&, ::ServerPlayerEventCoordinator&);
#else // @header-generator platform
    MCAPI ScriptFormPromiseTracker(
        ::ServerScriptManagerEvents&    events,
        ::LevelEventCoordinator&        levelEventCoordinator,
        ::ServerPlayerEventCoordinator& playerEventCooordinator
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void handleFormClose(::PlayerFormCloseEvent const&);
#else // @header-generator platform
    MCAPI void rejectAll();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void handleFormResponse(uint, ::Json::Value const&);

    MCNAPI void handlePlayerQuit(::NetworkIdentifier const&);

    MCNAPI void rejectAll();

    MCNAPI void showDataDrivenScreenToPlayer(
        ::Player const&,
        std::string const&,
        std::optional<uint>,
        std::shared_ptr<DataDrivenScreenPromise>
#else // @header-generator platform
    MCAPI void showDataDrivenScreenToPlayer(
        ::Player const&                              player,
        ::std::string const&                         screenId,
        ::std::optional<uint>                        dataInstanceId,
        ::std::shared_ptr<::DataDrivenScreenPromise> promise
#endif // @header-generator platform
    );
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::NetworkIdentifier _getPlayerNetworkId(::Player const&);

    MCNAPI static void _sendToClient(::Player const&, ::Json::Value, uint const);
#else // @header-generator platform
    MCAPI static void _sendToClient(::Player const& player, ::Json::Value formJson, uint formId);
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::ServerScriptManagerEvents&, ::LevelEventCoordinator&, ::ServerPlayerEventCoordinator&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI void* $ctor(
        ::ServerScriptManagerEvents&    events,
        ::LevelEventCoordinator&        levelEventCoordinator,
        ::ServerPlayerEventCoordinator& playerEventCooordinator
    );
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::EventResult $onEvent(::PlayerDataDrivenScreenClosedEvent const&);
#else // @header-generator platform
    MCAPI ::EventResult $onEvent(::PlayerFormResponseEvent const& formResponseEvent);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::EventResult $onEvent(::PlayerFormCloseEvent const&);
#else // @header-generator platform
    MCAPI ::EventResult $onEvent(::PlayerFormCloseEvent const& formCloseEvent);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::EventResult $onEvent(::PlayerFormResponseEvent const&);
#else // @header-generator platform
    MCAPI ::EventResult $onEvent(::PlayerDataDrivenScreenClosedEvent const& formResponseEvent);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::EventResult $onLevelRemovedPlayer(::Player&);
    // NOLINTEND
#else // @header-generator platform
    MCAPI ::EventResult $onLevelRemovedPlayer(::Player& player);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
#else // @header-generator platform

#endif // @header-generator platform
    // NOLINTEND
};
