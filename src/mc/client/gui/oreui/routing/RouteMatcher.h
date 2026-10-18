#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/oreui/interface/IRouteMatcher.h"
#include "mc/client/gui/oreui/interface/RouteMode.h"
#include "mc/client/gui/oreui/interface/RoutePrerequisite.h"
#include "mc/client/gui/oreui/interface/RouteType.h"
#include "mc/client/gui/oreui/routing/RouteHistoryAction.h"

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/oreui/interface/IRouteMatcher.h"
#include "mc/client/gui/oreui/interface/RouteMode.h"
#include "mc/client/gui/oreui/interface/RoutePrerequisite.h"
#include "mc/client/gui/oreui/interface/RouteType.h"
#include "mc/client/gui/oreui/routing/RouteHistoryAction.h"

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace OreUI {

#if defined(LL_PLAT_A) // @header-generator platform
class RouteMatcher : public ::OreUI::IRouteMatcher {
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
class RouteMatcher : public ::OreUI::IRouteMatcher {
#else // @header-generator platform
class RouteMatcher {
#endif // @header-generator platform
#endif // @header-generator platform
public:
    // RouteMatcher inner types declare
    // clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    struct RouteEntry;
#endif // @header-generator platform
    struct DefaultRouteEntry;
    struct RedirectEntry;
#if defined(LL_PLAT_A) // @header-generator platform
    struct RouteEntry;
#else // @header-generator platform
#endif // @header-generator platform
    // clang-format on

    // RouteMatcher inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    struct DefaultRouteEntry {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 24, std::string const> baseScreenId;
        ::ll::TypedStorage<8, 24, std::string const> route;
        // NOLINTEND
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
    struct RouteEntry {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 32, ::std::string const>       baseScreenId;
        ::ll::TypedStorage<8, 32, ::std::string const>       pattern;
        ::ll::TypedStorage<4, 4, ::OreUI::RouteType>         type;
        ::ll::TypedStorage<4, 4, ::OreUI::RouteMode>         mode;
        ::ll::TypedStorage<4, 4, ::OreUI::RoutePrerequisite> prerequisite;
        ::ll::TypedStorage<8, 64, ::std::function<bool()>>   isActiveCallback;
        ::ll::TypedStorage<8, 64, ::std::function<void(::std::string const&, ::OreUI::RouteHistoryAction)>>
            matchCallback;
        // NOLINTEND
#else // @header-generator platform
    struct RouteEntry {};
#endif // @header-generator platform
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    public:
        // prevent constructor by default
        DefaultRouteEntry& operator=(DefaultRouteEntry const&);
        DefaultRouteEntry();
    };
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
    public:
        // prevent constructor by default
        RouteEntry();
#else // @header-generator platform
    struct DefaultRouteEntry {};
#endif // @header-generator platform
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
    public:
        // member functions
        // NOLINTBEGIN
        MCAPI RouteEntry(
            ::std::string const&                                                     baseScreenId,
            ::std::string const&                                                     pattern,
            ::OreUI::RouteType                                                       type,
            ::OreUI::RouteMode                                                       mode,
            ::OreUI::RoutePrerequisite                                               prerequisite,
            ::std::function<bool()>                                                  isActiveCallback,
            ::std::function<void(::std::string const&, ::OreUI::RouteHistoryAction)> matchCallback
        );
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCAPI void* $ctor(
            ::std::string const&                                                     baseScreenId,
            ::std::string const&                                                     pattern,
            ::OreUI::RouteType                                                       type,
            ::OreUI::RouteMode                                                       mode,
            ::OreUI::RoutePrerequisite                                               prerequisite,
            ::std::function<bool()>                                                  isActiveCallback,
            ::std::function<void(::std::string const&, ::OreUI::RouteHistoryAction)> matchCallback
        );
        // NOLINTEND
    };

    struct DefaultRouteEntry {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 32, ::std::string const> baseScreenId;
        ::ll::TypedStorage<8, 32, ::std::string const> route;
        // NOLINTEND

    public:
        // prevent constructor by default
        DefaultRouteEntry();

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI DefaultRouteEntry(::std::string const& baseScreenId, ::std::string const& route);
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCFOLD void* $ctor(::std::string const& baseScreenId, ::std::string const& route);
        // NOLINTEND
    };

    struct RedirectEntry {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 32, ::std::string const>                                  pattern;
        ::ll::TypedStorage<8, 64, ::std::function<bool()>>                              isActiveCallback;
        ::ll::TypedStorage<8, 64, ::std::function<::std::string(::std::string const&)>> composer;
        // NOLINTEND

    public:
        // prevent constructor by default
        RedirectEntry();

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI RedirectEntry(
            ::std::string const&                                 pattern,
            ::std::function<bool()>                              isActiveCallback,
            ::std::function<::std::string(::std::string const&)> composer
        );
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCAPI void* $ctor(
            ::std::string const&                                 pattern,
            ::std::function<bool()>                              isActiveCallback,
            ::std::function<::std::string(::std::string const&)> composer
        );
        // NOLINTEND
    };

    using IsActiveCallback = ::std::function<bool()>;

    using OnMatchCallback = ::std::function<void(::std::string const&, ::OreUI::RouteHistoryAction)>;

    using RouteRedirectComposer = ::std::function<::std::string(::std::string const&)>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::OreUI::RouteMatcher::RouteEntry>>        mRoutes;
    ::ll::TypedStorage<8, 24, ::std::vector<::OreUI::RouteMatcher::DefaultRouteEntry>> mDefaultRoutes;
    ::ll::TypedStorage<8, 24, ::std::vector<::OreUI::RouteMatcher::RedirectEntry>>     mRedirects;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void navigateTo(::std::string const& route, ::OreUI::RouteHistoryAction action) const /*override*/;

    virtual ::std::string redirectIfNeeded(::std::string const& route) const /*override*/;

    virtual bool isSupported(::std::string const& route) const /*override*/;

    virtual bool areCompatible(::std::string const& routeA, ::std::string const& routeB) const /*override*/;

    virtual bool isRouteInDirectory(::std::string const& directory, ::std::string const& route) const /*override*/;

    virtual ::std::optional<::std::string> getDefaultRouteForFile(::std::string const& file) const /*override*/;

    virtual ::OreUI::RouteType getRouteType(::std::string const& route) const /*override*/;

    virtual ::OreUI::RouteMode getRouteMode(::std::string const& route) const /*override*/;

    virtual ::OreUI::RoutePrerequisite getRoutePrerequisite(::std::string const& route) const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::std::optional<::OreUI::RouteMatcher::RedirectEntry> _matchRedirect(::std::string const& route) const;

    MCAPI ::std::optional<::OreUI::RouteMatcher::RouteEntry> _matchRoute(::std::string const& route) const;

    MCAPI void addRedirect(
        ::std::string const&                                 path,
        ::std::function<bool()>                              isActiveCallback,
        ::std::function<::std::string(::std::string const&)> composer
    );

    MCAPI void addRoute(
        ::std::string const&                                                     baseScreenId,
        ::std::string const&                                                     pattern,
        ::OreUI::RouteType                                                       type,
        ::OreUI::RouteMode                                                       mode,
        ::OreUI::RoutePrerequisite                                               prerequisite,
        ::std::function<bool()>                                                  isActiveCallback,
        ::std::function<void(::std::string const&, ::OreUI::RouteHistoryAction)> matchCallback
    );
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $navigateTo(::std::string const& route, ::OreUI::RouteHistoryAction action) const;

    MCAPI ::std::string $redirectIfNeeded(::std::string const& route) const;

    MCAPI bool $isSupported(::std::string const& route) const;

    MCAPI bool $areCompatible(::std::string const& routeA, ::std::string const& routeB) const;

    MCAPI bool $isRouteInDirectory(::std::string const& directory, ::std::string const& route) const;

    MCAPI ::std::optional<::std::string> $getDefaultRouteForFile(::std::string const& file) const;

    MCAPI ::OreUI::RouteType $getRouteType(::std::string const& route) const;

    MCAPI ::OreUI::RouteMode $getRouteMode(::std::string const& route) const;

    MCAPI ::OreUI::RoutePrerequisite $getRoutePrerequisite(::std::string const& route) const;
    // NOLINTEND
#else // @header-generator platform
    struct RedirectEntry {};
#endif // @header-generator platform
#endif // @header-generator platform
};

} // namespace OreUI
