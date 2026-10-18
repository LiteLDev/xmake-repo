#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/oreui/interface/IRoutePrerequisiteHandler.h"
#include "mc/client/gui/oreui/interface/RoutePrerequisite.h"
#include "mc/client/gui/oreui/interface/RoutePrerequisiteState.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class IClientInstance;
class IMinecraftGame;
// clang-format on

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/oreui/interface/IRoutePrerequisiteHandler.h"
#include "mc/client/gui/oreui/interface/RoutePrerequisite.h"
#include "mc/client/gui/oreui/interface/RoutePrerequisiteState.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class IClientInstance;
class IMinecraftGame;
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace OreUI {

#if defined(LL_PLAT_A) // @header-generator platform
class RoutePrerequisiteHandler : public ::OreUI::IRoutePrerequisiteHandler {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::IMinecraftGame&> mMinecraftGame;
    ::ll::UntypedStorage<8, 24>                 mClient;
    // NOLINTEND

public:
    // prevent constructor by default
    RoutePrerequisiteHandler& operator=(RoutePrerequisiteHandler const&);
    RoutePrerequisiteHandler(RoutePrerequisiteHandler const&);
    RoutePrerequisiteHandler();

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~RoutePrerequisiteHandler();

    virtual ::OreUI::RoutePrerequisiteState handleRoutePrerequisites(::OreUI::RoutePrerequisite, std::string const&);
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI
    RoutePrerequisiteHandler(::IMinecraftGame&, ::gsl::not_null<Bedrock::NonOwnerPointer<IClientInstance>> const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::IMinecraftGame&, ::gsl::not_null<Bedrock::NonOwnerPointer<IClientInstance>> const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::OreUI::RoutePrerequisiteState $handleRoutePrerequisites(::OreUI::RoutePrerequisite, std::string const&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
class RoutePrerequisiteHandler : public ::OreUI::IRoutePrerequisiteHandler {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::IMinecraftGame&>                                 mMinecraftGame;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::IClientInstance>> mClient;
    // NOLINTEND

public:
    // prevent constructor by default
    RoutePrerequisiteHandler& operator=(RoutePrerequisiteHandler const&);
    RoutePrerequisiteHandler(RoutePrerequisiteHandler const&);
    RoutePrerequisiteHandler();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~RoutePrerequisiteHandler() /*override*/ = default;

    virtual ::OreUI::RoutePrerequisiteState
    handleRoutePrerequisites(::OreUI::RoutePrerequisite prerequisite, ::std::string const& newRoute) /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::OreUI::RoutePrerequisiteState
    $handleRoutePrerequisites(::OreUI::RoutePrerequisite prerequisite, ::std::string const& newRoute);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
#else // @header-generator platform
class RoutePrerequisiteHandler {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace OreUI
