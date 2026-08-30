#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/interface/RouteMode.h"
#include "mc/client/gui/oreui/interface/RouteType.h"
#include "mc/client/gui/oreui/routing/RouterAction.h"
#include "mc/client/gui/oreui/routing/RouterLocation.h"

// auto generated forward declare list
// clang-format off
class AbstractScene;
// clang-format on

namespace OreUI {

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

} // namespace OreUI
