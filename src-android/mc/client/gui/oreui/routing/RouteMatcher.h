#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/interface/IRouteMatcher.h"
#include "mc/client/gui/oreui/interface/RouteMode.h"
#include "mc/client/gui/oreui/interface/RoutePrerequisite.h"
#include "mc/client/gui/oreui/interface/RouteType.h"
#include "mc/client/gui/oreui/routing/RouteHistoryAction.h"

namespace OreUI {

class RouteMatcher : public ::OreUI::IRouteMatcher {
public:
    // RouteMatcher inner types declare
    // clang-format off
    struct DefaultRouteEntry;
    struct RedirectEntry;
    struct RouteEntry;
    // clang-format on

    // RouteMatcher inner types define
    struct DefaultRouteEntry {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 24, std::string const> baseScreenId;
        ::ll::TypedStorage<8, 24, std::string const> route;
        // NOLINTEND

    public:
        // prevent constructor by default
        DefaultRouteEntry& operator=(DefaultRouteEntry const&);
        DefaultRouteEntry();
    };

    struct RedirectEntry {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 32> pattern;
        ::ll::UntypedStorage<8, 48> isActiveCallback;
        ::ll::UntypedStorage<8, 48> composer;
        // NOLINTEND

    public:
        // prevent constructor by default
        RedirectEntry& operator=(RedirectEntry const&);
        RedirectEntry();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI RedirectEntry(::OreUI::RouteMatcher::RedirectEntry const&);
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCNAPI void* $ctor(::OreUI::RouteMatcher::RedirectEntry const&);
        // NOLINTEND
    };

    struct RouteEntry {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 24, std::string const>         baseScreenId;
        ::ll::TypedStorage<8, 24, std::string const>         pattern;
        ::ll::TypedStorage<4, 4, ::OreUI::RouteType>         type;
        ::ll::TypedStorage<4, 4, ::OreUI::RouteMode>         mode;
        ::ll::TypedStorage<4, 4, ::OreUI::RoutePrerequisite> prerequisite;
        ::ll::UntypedStorage<8, 48>                          isActiveCallback;
        ::ll::UntypedStorage<8, 48>                          matchCallback;
        // NOLINTEND

    public:
        // prevent constructor by default
        RouteEntry& operator=(RouteEntry const&);
        RouteEntry();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI RouteEntry(::OreUI::RouteMatcher::RouteEntry const&);

        MCNAPI RouteEntry(
            std::string const&,
            std::string const&,
            ::OreUI::RouteType const,
            ::OreUI::RouteMode const,
            ::OreUI::RoutePrerequisite const,
            std::function<bool()>,
            std::function<void(const std::string&, OreUI::RouteHistoryAction)>
        );
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCNAPI void* $ctor(::OreUI::RouteMatcher::RouteEntry const&);

        MCNAPI void* $ctor(
            std::string const&,
            std::string const&,
            ::OreUI::RouteType const,
            ::OreUI::RouteMode const,
            ::OreUI::RoutePrerequisite const,
            std::function<bool()>,
            std::function<void(const std::string&, OreUI::RouteHistoryAction)>
        );
        // NOLINTEND
    };

    using IsActiveCallback = std::function<bool()>;

    using RouteRedirectComposer = std::function<std::string(const std::string&)>;

    using OnMatchCallback = std::function<void(const std::string&, OreUI::RouteHistoryAction)>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::vector<OreUI::RouteMatcher::RouteEntry>>        mRoutes;
    ::ll::TypedStorage<8, 24, std::vector<OreUI::RouteMatcher::DefaultRouteEntry>> mDefaultRoutes;
    ::ll::TypedStorage<8, 24, std::vector<OreUI::RouteMatcher::RedirectEntry>>     mRedirects;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~RouteMatcher();

    virtual void navigateTo(std::string const&, ::OreUI::RouteHistoryAction) const;

    virtual std::string redirectIfNeeded(std::string const&) const;

    virtual bool isSupported(std::string const&) const;

    virtual bool areCompatible(std::string const&, std::string const&) const;

    virtual bool isRouteInDirectory(std::string const&, std::string const&) const;

    virtual std::optional<std::string> getDefaultRouteForFile(std::string const&) const;

    virtual ::OreUI::RouteType getRouteType(std::string const&) const;

    virtual ::OreUI::RouteMode getRouteMode(std::string const&) const;

    virtual ::OreUI::RoutePrerequisite getRoutePrerequisite(std::string const&) const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI std::optional<OreUI::RouteMatcher::RedirectEntry> _matchRedirect(std::string const&) const;

    MCNAPI std::optional<OreUI::RouteMatcher::RouteEntry> _matchRoute(std::string const&) const;

    MCNAPI void addRedirect(std::string const&, std::function<bool()>, std::function<std::string(const std::string&)>);

    MCNAPI void addRoute(
        std::string const&,
        std::string const&,
        ::OreUI::RouteType,
        ::OreUI::RouteMode,
        ::OreUI::RoutePrerequisite,
        std::function<bool()>,
        std::function<void(const std::string&, OreUI::RouteHistoryAction)>
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $navigateTo(std::string const&, ::OreUI::RouteHistoryAction) const;

    MCNAPI std::string $redirectIfNeeded(std::string const&) const;

    MCNAPI bool $isSupported(std::string const&) const;

    MCNAPI bool $areCompatible(std::string const&, std::string const&) const;

    MCNAPI bool $isRouteInDirectory(std::string const&, std::string const&) const;

    MCNAPI std::optional<std::string> $getDefaultRouteForFile(std::string const&) const;

    MCNAPI ::OreUI::RouteType $getRouteType(std::string const&) const;

    MCNAPI ::OreUI::RouteMode $getRouteMode(std::string const&) const;

    MCNAPI ::OreUI::RoutePrerequisite $getRoutePrerequisite(std::string const&) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace OreUI
