#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/routing/RouterAction.h"
#include "mc/client/gui/oreui/routing/RouterLocation.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::PubSub { class Subscription; }
namespace OreUI { class Router; }
// clang-format on

namespace OreUI {

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

} // namespace OreUI
