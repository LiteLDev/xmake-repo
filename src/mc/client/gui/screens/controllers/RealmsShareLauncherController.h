#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/DirtyFlag.h"
#include "mc/client/gui/screens/controllers/MinecraftScreenController.h"

// auto generated forward declare list
// clang-format off
class MinecraftScreenModel;
// clang-format on

class RealmsShareLauncherController : public ::MinecraftScreenController {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string> mRealmInvite;
    ::ll::TypedStorage<1, 1, bool>           mRunOnceBefore;
    // NOLINTEND

public:
    // prevent constructor by default
    RealmsShareLauncherController();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::ui::DirtyFlag tick() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI RealmsShareLauncherController(::std::shared_ptr<::MinecraftScreenModel> model, ::std::string realmInvite);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::string const& INTERNAL_USER_BLOCKED_MESSAGE();

    MCAPI static ::std::string const& INVITE_LINK_DISABLED_MESSAGE();

    MCAPI static ::std::string const& INVITE_LINK_EXPIRED_MESSAGE();

    MCAPI static ::std::string const& INVITE_LINK_NOT_FOUND_MESSAGE();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::shared_ptr<::MinecraftScreenModel> model, ::std::string realmInvite);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::ui::DirtyFlag $tick();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForEnableNonOwnerReferences();

    MCNAPI static void** $vftableForScreenController();
    // NOLINTEND
};
#else // @header-generator platform
class RealmsShareLauncherController {};
#endif // @header-generator platform
#endif // @header-generator platform
