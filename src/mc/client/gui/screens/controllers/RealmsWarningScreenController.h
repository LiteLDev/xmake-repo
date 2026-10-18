#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/DirtyFlag.h"
#include "mc/client/gui/ViewRequest.h"
#include "mc/client/gui/screens/controllers/DisconnectScreenController.h"
#include "mc/client/network/realms/World.h"

// auto generated forward declare list
// clang-format off
class MinecraftScreenModel;
// clang-format on

class RealmsWarningScreenController : public ::DisconnectScreenController {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 608, ::Realms::World> mWorld;
    ::ll::TypedStorage<8, 24, std::string>      mIP;
    ::ll::TypedStorage<4, 4, int>               mPort;
    ::ll::TypedStorage<1, 1, bool>              mJoinRealm;
    ::ll::TypedStorage<8, 24, std::string>      mServerRegion;
    ::ll::TypedStorage<4, 4, int>               mServiceQuality;
    // NOLINTEND

public:
    // prevent constructor by default
    RealmsWarningScreenController();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~RealmsWarningScreenController();

    virtual ::ui::DirtyFlag tick();

    virtual ::ui::ViewRequest _processLeaveScreen();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit RealmsWarningScreenController(std::shared_ptr<MinecraftScreenModel>);

    MCNAPI RealmsWarningScreenController(
        std::shared_ptr<MinecraftScreenModel>,
        ::Realms::World const&,
        std::string const&,
        int,
        std::string const&,
        int
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::shared_ptr<MinecraftScreenModel>);

    MCNAPI void* $ctor(
        std::shared_ptr<MinecraftScreenModel>,
        ::Realms::World const&,
        std::string const&,
        int,
        std::string const&,
        int
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
    MCNAPI ::ui::DirtyFlag $tick();

    MCNAPI ::ui::ViewRequest $_processLeaveScreen();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/DirtyFlag.h"
#include "mc/client/gui/ViewRequest.h"
#include "mc/client/gui/screens/controllers/DisconnectScreenController.h"
#include "mc/client/network/realms/World.h"

// auto generated forward declare list
// clang-format off
class MinecraftScreenModel;
// clang-format on

class RealmsWarningScreenController : public ::DisconnectScreenController {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 720, ::Realms::World> mWorld;
    ::ll::TypedStorage<8, 32, ::std::string>    mIP;
    ::ll::TypedStorage<4, 4, int>               mPort;
    ::ll::TypedStorage<1, 1, bool>              mJoinRealm;
    ::ll::TypedStorage<8, 32, ::std::string>    mServerRegion;
    ::ll::TypedStorage<4, 4, int>               mServiceQuality;
    // NOLINTEND

public:
    // prevent constructor by default
    RealmsWarningScreenController();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~RealmsWarningScreenController() /*override*/ = default;

    virtual ::ui::DirtyFlag tick() /*override*/;

    virtual ::ui::ViewRequest _processLeaveScreen() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit RealmsWarningScreenController(::std::shared_ptr<::MinecraftScreenModel> model);

    MCAPI RealmsWarningScreenController(
        ::std::shared_ptr<::MinecraftScreenModel> model,
        ::Realms::World const&                    world,
        ::std::string const&                      ip,
        int                                       port,
        ::std::string const&                      serverRegion,
        int                                       serviceQuality
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::shared_ptr<::MinecraftScreenModel> model);

    MCAPI void* $ctor(
        ::std::shared_ptr<::MinecraftScreenModel> model,
        ::Realms::World const&                    world,
        ::std::string const&                      ip,
        int                                       port,
        ::std::string const&                      serverRegion,
        int                                       serviceQuality
    );
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::ui::DirtyFlag $tick();

    MCAPI ::ui::ViewRequest $_processLeaveScreen();
    // NOLINTEND
};
#else // @header-generator platform
class RealmsWarningScreenController {};
#endif // @header-generator platform
#endif // @header-generator platform
