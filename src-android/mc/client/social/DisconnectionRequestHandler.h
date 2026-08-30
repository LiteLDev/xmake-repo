#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/ExperienceJoinRequestInfo.h"
#include "mc/client/gui/GameConnectionInfoEx.h"
#include "mc/client/network/realms/RealmId.h"
#include "mc/client/social/DisconnectionErrorStrings.h"
#include "mc/client/social/MultiplayerGameInfo.h"
#include "mc/client/social/connection/UIReturnTarget.h"
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/network/DisconnectionScreenParams.h"
#include "mc/network/connection/DisconnectFailReason.h"

// auto generated forward declare list
// clang-format off
class AbstractScene;
class IMinecraftGame;
class ISceneStack;
class SceneFactory;
struct DisconnectionErrorDetails;
struct DisconnectionErrorWithOverrides;
namespace OreUI { class Router; }
// clang-format on

class DisconnectionRequestHandler : public ::Bedrock::EnableNonOwnerReferences {
public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<8, 176, std::optional<DisconnectionScreenParams>> mScreenParams;
    ::ll::TypedStorage<4, 4, ::Connection::UIReturnTarget> mUIReturnTarget;
    ::ll::TypedStorage<8, 16, std::weak_ptr<AbstractScene>> mCurrentDisconnectionScreenWeakPtr;
    ::ll::UntypedStorage<1, 144> mDisconnectionRequestMutex;
    ::ll::TypedStorage<8, 104, ::DisconnectionErrorStrings> mDisconnectionStringFallback;
    ::ll::TypedStorage<8, 40, std::unordered_map<Connection::DisconnectFailReason, DisconnectionErrorStrings>> mDisconnectionStringMap;
    ::ll::TypedStorage<8, 712, std::optional<std::variant<GameConnectionInfoEx, Social::MultiplayerGameInfo, ExperienceJoinRequestInfo, Realms::RealmId>>> mSavedReconnectionCookie;
    ::ll::TypedStorage<1, 1, bool> mMostRecentScreenIsOreUI;
    // clang-format on
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~DisconnectionRequestHandler();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI DisconnectionRequestHandler();

    MCNAPI void _applyErrorsWithOverrides(
        std::vector<DisconnectionErrorWithOverrides> const&,
        ::DisconnectionErrorStrings const&,
        bool
    );

    MCNAPI bool _isWebUrlErrorHelpPage(std::string const&) const;

    MCNAPI void _pushDisconnectionScreen(
        ::SceneFactory&,
        ::gsl::not_null<Bedrock::NonOwnerPointer<ISceneStack>> const&,
        ::OreUI::Router&,
        std::function<void()> const&,
        ::DisconnectionErrorDetails const&,
        bool
    );

    MCNAPI void callDisconnectionForPrimaryClient(
        ::IMinecraftGame&,
        ::SceneFactory&,
        ::gsl::not_null<Bedrock::NonOwnerPointer<ISceneStack>> const&,
        ::OreUI::Router&,
        std::function<void()> const&,
        ::DisconnectionErrorDetails const&,
        bool,
        bool
    );

    MCNAPI void callDisconnectionForSubClient(
        ::SceneFactory&,
        ::gsl::not_null<Bedrock::NonOwnerPointer<ISceneStack>> const&,
        ::OreUI::Router&,
        std::function<void()> const&,
        ::DisconnectionErrorDetails const&
    );

    MCNAPI void clearDisconnectionFlag();

    MCNAPI bool currentDisconnectionScreenExpired(::OreUI::Router const&) const;

    MCNAPI bool doesReasonHaveValidWebUrl(::Connection::DisconnectFailReason const) const;

    MCNAPI void flagDisconnection(::DisconnectionScreenParams const&, ::Connection::UIReturnTarget);

    MCNAPI std::optional<DisconnectionScreenParams> const& getDisconnectionParams() const;

    MCNAPI std::string getWebUrlForReason(::Connection::DisconnectFailReason const) const;

    MCNAPI bool isDisconnectionScreenRequested() const;

    MCNAPI void parseAndApplyOverrideJson(std::string const&);

    MCNAPI void parseAndApplySystemJson();

    MCNAPI bool shouldShowReconnectButton(::Connection::DisconnectFailReason const) const;

    MCNAPI void tryReconnect(::SceneFactory&, ::gsl::not_null<Bedrock::NonOwnerPointer<ISceneStack>>);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
