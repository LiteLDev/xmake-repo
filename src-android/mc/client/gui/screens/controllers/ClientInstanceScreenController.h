#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/DirtyFlag.h"
#include "mc/client/gui/screens/controllers/MinecraftScreenController.h"

// auto generated forward declare list
// clang-format off
class ClientInstanceScreenModel;
class PlatformMultiplayerRestrictions;
// clang-format on

class ClientInstanceScreenController : public ::MinecraftScreenController {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, std::shared_ptr<ClientInstanceScreenModel>> mClientInstanceScreenModel;
    ::ll::UntypedStorage<8, 16>                                           mPlatformMultiplayerRestrictions;
    // NOLINTEND

public:
    // prevent constructor by default
    ClientInstanceScreenController();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ClientInstanceScreenController();

    virtual ::ui::DirtyFlag tick();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit ClientInstanceScreenController(std::shared_ptr<ClientInstanceScreenModel>);

    MCNAPI void presentExitWorldConfirmationOrQuit();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::shared_ptr<ClientInstanceScreenModel>);
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
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
