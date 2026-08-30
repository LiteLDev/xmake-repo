#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/DirtyFlag.h"
#include "mc/client/gui/screens/controllers/MinecraftScreenController.h"
#include "mc/client/network/realms/GenericStatus.h"

// auto generated forward declare list
// clang-format off
class MinecraftScreenModel;
struct ModalScreenData;
// clang-format on

class RealmsShareLauncherController : public ::MinecraftScreenController {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string> mRealmInvite;
    ::ll::TypedStorage<1, 1, bool>         mRunOnceBefore;
    // NOLINTEND

public:
    // prevent constructor by default
    RealmsShareLauncherController();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~RealmsShareLauncherController();

    virtual ::ui::DirtyFlag tick();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI RealmsShareLauncherController(std::shared_ptr<MinecraftScreenModel>, std::string);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static std::string const& INTERNAL_USER_BLOCKED_MESSAGE();

    MCNAPI static std::string const& INVITE_LINK_DISABLED_MESSAGE();

    MCNAPI static std::string const& INVITE_LINK_EXPIRED_MESSAGE();

    MCNAPI static std::string const& INVITE_LINK_NOT_FOUND_MESSAGE();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::shared_ptr<MinecraftScreenModel>, std::string);
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
