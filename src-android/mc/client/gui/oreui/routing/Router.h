#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/routing/RouteHistoryAction.h"
#include "mc/client/gui/oreui/routing/RouterAction.h"
#include "mc/client/gui/oreui/routing/RouterHistory.h"
#include "mc/client/gui/oreui/routing/RouterLocation.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/pub_sub/Publisher.h"
#include "mc/deps/core/utility/pub_sub/ReturnPolicyType.h"
#include "mc/deps/core/utility/pub_sub/thread_model/MultiThreaded.h"

// auto generated forward declare list
// clang-format off
class AbstractScene;
class ISceneStack;
namespace Bedrock::PubSub { class Subscription; }
namespace OreUI { class IRouteMatcher; }
namespace OreUI { class IRoutePrerequisiteHandler; }
namespace OreUI { class RouterEventing; }
namespace OreUI { struct RouteAction; }
// clang-format on

namespace OreUI {

class Router {
public:
    // Router inner types declare
    // clang-format off
    struct DeferredChangeNotification;
    // clang-format on

    // Router inner types define
    enum class RouterPushMode : int {
        Normal = 0,
        Flux   = 1,
    };

    struct DeferredChangeNotification {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 128, std::optional<OreUI::RouterLocation>> mOldLocation;
        ::ll::TypedStorage<8, 128, std::optional<OreUI::RouterLocation>> mCurrentLocation;
        // NOLINTEND

    public:
        // prevent constructor by default
        DeferredChangeNotification& operator=(DeferredChangeNotification const&);
        DeferredChangeNotification();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 112>                                                mHistory;
    ::ll::TypedStorage<8, 8, std::unique_ptr<const OreUI::IRouteMatcher>>       mRouteMatcher;
    ::ll::UntypedStorage<8, 24>                                                 mSceneStack;
    ::ll::UntypedStorage<8, 88>                                                 mOnRouteChangedPublisher;
    ::ll::TypedStorage<8, 8, std::unique_ptr<OreUI::IRoutePrerequisiteHandler>> mPrerequisiteHandler;
    ::ll::TypedStorage<8, 8, std::unique_ptr<OreUI::RouterEventing>>            mEventing;
    ::ll::TypedStorage<1, 1, bool>                                              mIsNotifyingListeners;
    ::ll::UntypedStorage<8, 32>                                                 mDeferredChangeNotifications;
    // NOLINTEND

public:
    // prevent constructor by default
    Router();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI Router(
        std::unique_ptr<const OreUI::IRouteMatcher>,
        std::unique_ptr<OreUI::IRoutePrerequisiteHandler>,
        std::unique_ptr<OreUI::RouterEventing>,
        ::gsl::not_null<Bedrock::NonOwnerPointer<ISceneStack>> const&
    );

    MCNAPI void
    _handleSceneStackPop(std::shared_ptr<AbstractScene> const&, bool, std::optional<OreUI::RouteAction> const&);

    MCNAPI void _handleSceneStackPush(std::shared_ptr<AbstractScene> const&, std::optional<OreUI::RouteAction> const&);

    MCNAPI void _onChange(std::optional<OreUI::RouterLocation> const&, std::optional<OreUI::RouterLocation> const&);

    MCNAPI bool _pushRoute(std::string const&, ::OreUI::Router::RouterPushMode);

    MCNAPI void _replaceCurrentRouteInHistory(std::string const&, ::OreUI::RouteHistoryAction);

    MCNAPI ::Bedrock::PubSub::Subscription addObserver(
        std::function<void(
            const std::optional<OreUI::RouterLocation>&,
            const std::optional<OreUI::RouterLocation>&,
            OreUI::RouterAction
        )> const&
    );

    MCNAPI bool areRoutesCompatible(std::string const&, std::string const&) const;

    MCNAPI std::optional<OreUI::RouterLocation> getCurrentLocation() const;

    MCNAPI std::vector<std::string> getFullHistory() const;

    MCNAPI std::vector<OreUI::RouterLocation> const& getFullRouterLocationHistory() const;

    MCNAPI ulong getHistoryLength() const;

    MCNAPI std::string const& getLastAction() const;

    MCNAPI void goBack();

    MCNAPI bool isCurrentRoute(std::string_view) const;

    MCNAPI bool pushRoute(std::string const&);

    MCNAPI bool pushRouteWithFlux(std::string const&);

    MCNAPI bool replaceRoute(std::string const&);

    MCNAPI void replaceRouteMatcher(std::unique_ptr<OreUI::IRouteMatcher>);

    MCNAPI ~Router();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::std::add_lvalue_reference_t<char const[14]> BEDROCK_PREFIX();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        std::unique_ptr<const OreUI::IRouteMatcher>,
        std::unique_ptr<OreUI::IRoutePrerequisiteHandler>,
        std::unique_ptr<OreUI::RouterEventing>,
        ::gsl::not_null<Bedrock::NonOwnerPointer<ISceneStack>> const&
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace OreUI
