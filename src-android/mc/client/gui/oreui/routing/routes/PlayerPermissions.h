#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/routing/IEntryPoint.h"
#include "mc/client/gui/oreui/routing/RouteFlags.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class ISceneStack;
class LocalPlayer;
class SceneFactory;
struct ActorUniqueID;
namespace OreUI { class RouteMatcher; }
namespace ui { class ScreenTechStackSelector; }
// clang-format on

namespace OreUI::EntryPoints {

class PlayerPermissions : public ::OreUI::IEntryPoint {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::ui::ScreenTechStackSelector const&> mScreenTechStackSelector;
    ::ll::UntypedStorage<8, 48>                                    mGetPrimaryLocalPlayer;
    // NOLINTEND

public:
    // prevent constructor by default
    PlayerPermissions& operator=(PlayerPermissions const&);
    PlayerPermissions(PlayerPermissions const&);
    PlayerPermissions();

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~PlayerPermissions();

    virtual bool shouldAddToConfiguration() const;

    virtual void addToMatcher(::OreUI::RouteMatcher&, ::SceneFactory&, ::gsl::not_null<Bedrock::NonOwnerPointer<ISceneStack>> const&) const;
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI PlayerPermissions(::ui::ScreenTechStackSelector const&, std::function<LocalPlayer*()>);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static std::string composeRoute(::ActorUniqueID const&);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::std::add_lvalue_reference_t<char const[19]> BASE_ID();

    MCNAPI static ::OreUI::EntryPoints::RouteFlags const& FLAGS();

    MCNAPI static ::std::add_lvalue_reference_t<char const[27]> LEGACY_ROUTE();

    MCNAPI static ::std::add_lvalue_reference_t<char const[20]> ROUTE();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ui::ScreenTechStackSelector const&, std::function<LocalPlayer*()>);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $shouldAddToConfiguration() const;

    MCNAPI void $addToMatcher(
        ::OreUI::RouteMatcher&,
        ::SceneFactory&,
        ::gsl::not_null<Bedrock::NonOwnerPointer<ISceneStack>> const&
    ) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace OreUI::EntryPoints
