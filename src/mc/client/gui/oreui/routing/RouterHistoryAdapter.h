#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/oreui/routing/RouterAction.h"
#include "mc/client/gui/oreui/routing/RouterLocation.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::PubSub { class Subscription; }
namespace OreUI { class Router; }
// clang-format on

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/oreui/routing/RouterLocation.h"

// auto generated forward declare list
// clang-format off
namespace OreUI { class Router; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace OreUI {

#if defined(LL_PLAT_A) // @header-generator platform
class RouterHistoryAdapter {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, std::reference_wrapper<OreUI::Router>> mRouter;
    ::ll::TypedStorage<8, 120, ::OreUI::RouterLocation>             mCurrentLocationCache;
    ::ll::TypedStorage<8, 120, ::OreUI::RouterLocation>             mFallbackLocation;
    // NOLINTEND

public:
    // prevent constructor by default
    RouterHistoryAdapter();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit RouterHistoryAdapter(::OreUI::Router&);

    MCNAPI ::Bedrock::PubSub::Subscription addObserver(
        std::function<void(
            const std::optional<OreUI::RouterLocation>&,
            const std::optional<OreUI::RouterLocation>&,
            OreUI::RouterAction
        )>
    ) const;

    MCNAPI std::string const& getAction() const;

    MCNAPI std::vector<OreUI::RouterLocation> const& getFullRouterLocationHistory() const;

    MCNAPI uint getLength() const;

    MCNAPI ::OreUI::RouterLocation const& getLocation() const;

    MCNAPI void go(int);

    MCNAPI void goBack();

    MCNAPI void goForward();

    MCNAPI void push(std::string const&);

    MCNAPI void replace(std::string const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::OreUI::Router&);
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
class RouterHistoryAdapter {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::std::reference_wrapper<::OreUI::Router>> mRouter;
    ::ll::TypedStorage<8, 152, ::OreUI::RouterLocation>                 mCurrentLocationCache;
    ::ll::TypedStorage<8, 152, ::OreUI::RouterLocation>                 mFallbackLocation;
    // NOLINTEND

public:
    // prevent constructor by default
    RouterHistoryAdapter();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit RouterHistoryAdapter(::OreUI::Router& router);

    MCAPI ::std::string const& getAction() const;

    MCFOLD ::std::vector<::OreUI::RouterLocation> const& getFullRouterLocationHistory() const;

    MCAPI uint getLength() const;

    MCAPI ::OreUI::RouterLocation const& getLocation() const;

    MCAPI void go(int n);

    MCAPI void goBack();

    MCFOLD void goForward();

    MCAPI void push(::std::string const& route);

    MCAPI void replace(::std::string const& route);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::OreUI::Router& router);
    // NOLINTEND
};
#else // @header-generator platform
class RouterHistoryAdapter {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace OreUI
