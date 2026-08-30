#pragma once

#include "mc/_HeaderOutputPredefine.h"

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
