#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/oreui/interface/RouteMode.h"
#include "mc/client/gui/oreui/interface/RouteType.h"
#include "mc/client/gui/oreui/routing/RouterAction.h"
#include "mc/client/gui/oreui/routing/RouterLocation.h"

// auto generated forward declare list
// clang-format off
class AbstractScene;
// clang-format on

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/oreui/interface/RouteMode.h"
#include "mc/client/gui/oreui/interface/RouteType.h"
#include "mc/client/gui/oreui/routing/RouterAction.h"

// auto generated forward declare list
// clang-format off
class AbstractScene;
namespace OreUI { class RouterLocation; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace OreUI {

#if defined(LL_PLAT_A) // @header-generator platform
class RouterHistory {
public:
    // RouterHistory inner types define
    using OnChangeCallback =
        std::function<void(const std::optional<OreUI::RouterLocation>&, const std::optional<OreUI::RouterLocation>&)>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::vector<OreUI::RouterLocation>> mEntries;
    ::ll::TypedStorage<4, 4, ::OreUI::RouterAction>               mLastAction;
    ::ll::UntypedStorage<8, 48>                                   mOnChangeCallback;
    ::ll::UntypedStorage<8, 32>                                   mGetActionHelper;
    // NOLINTEND

public:
    // prevent constructor by default
    RouterHistory();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit RouterHistory(
        std::function<
            void(const std::optional<OreUI::RouterLocation>&, const std::optional<OreUI::RouterLocation>&)> const&
    );

    MCNAPI std::string const& getAction() const;

    MCNAPI ::OreUI::RouterAction getActionEnum() const;

    MCNAPI std::optional<OreUI::RouterLocation> getCurrentLocation() const;

    MCNAPI std::vector<std::string> getFullHistory() const;

    MCNAPI ulong getLength() const;

    MCNAPI std::optional<OreUI::RouterLocation> getPreviousLocation() const;

    MCNAPI void goBack();

    MCNAPI void
    goBackAndReplace(std::weak_ptr<AbstractScene> const&, std::string const&, ::OreUI::RouteMode, ::OreUI::RouteType);

    MCNAPI bool isCurrentRoute(std::string_view) const;

    MCNAPI bool isEmpty() const;

    MCNAPI void push(std::weak_ptr<AbstractScene> const&, std::string const&, ::OreUI::RouteMode, ::OreUI::RouteType);

    MCNAPI void
    replace(std::weak_ptr<AbstractScene> const&, std::string const&, ::OreUI::RouteMode, ::OreUI::RouteType);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::std::add_lvalue_reference_t<char const[4]> ACTION_POP();

    MCNAPI static ::std::add_lvalue_reference_t<char const[5]> ACTION_PUSH();

    MCNAPI static ::std::add_lvalue_reference_t<char const[8]> ACTION_REPLACE();

    MCNAPI static ::std::add_lvalue_reference_t<char const[8]> ACTION_UNKNOWN();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        std::function<
            void(const std::optional<OreUI::RouterLocation>&, const std::optional<OreUI::RouterLocation>&)> const&
    );
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
class RouterHistory {
public:
    // RouterHistory inner types define
    using OnChangeCallback = ::std::function<
        void(::std::optional<::OreUI::RouterLocation> const&, ::std::optional<::OreUI::RouterLocation> const&)>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::OreUI::RouterLocation>> mEntries;
    ::ll::TypedStorage<4, 4, ::OreUI::RouterAction>                   mLastAction;
    ::ll::TypedStorage<
        8,
        64,
        ::std::function<
            void(::std::optional<::OreUI::RouterLocation> const&, ::std::optional<::OreUI::RouterLocation> const&)>>
                                             mOnChangeCallback;
    ::ll::TypedStorage<8, 32, ::std::string> mGetActionHelper;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::std::string const& getAction() const;

    MCAPI void goBack();

    MCAPI void push(
        ::std::weak_ptr<::AbstractScene> const& scene,
        ::std::string const&                    url,
        ::OreUI::RouteMode                      mode,
        ::OreUI::RouteType                      routeType
    );

    MCAPI void replace(
        ::std::weak_ptr<::AbstractScene> const& scene,
        ::std::string const&                    url,
        ::OreUI::RouteMode                      mode,
        ::OreUI::RouteType                      routeType
    );
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::add_lvalue_reference_t<char const[]> ACTION_POP();

    MCAPI static ::std::add_lvalue_reference_t<char const[]> ACTION_PUSH();

    MCAPI static ::std::add_lvalue_reference_t<char const[]> ACTION_REPLACE();

    MCAPI static ::std::add_lvalue_reference_t<char const[]> ACTION_UNKNOWN();
    // NOLINTEND
};
#else // @header-generator platform
class RouterHistory {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace OreUI
