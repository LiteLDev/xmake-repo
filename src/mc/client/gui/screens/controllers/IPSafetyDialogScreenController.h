#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/screens/controllers/SafetyDialogScreenController.h"

// auto generated forward declare list
// clang-format off
class MinecraftScreenModel;
// clang-format on

class IPSafetyDialogScreenController : public ::SafetyDialogScreenController {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int> mExternalServerId;
    // NOLINTEND

public:
    // prevent constructor by default
    IPSafetyDialogScreenController();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IPSafetyDialogScreenController();

    virtual void onOpen();

    virtual void _registerSafetyEventHandlers();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI IPSafetyDialogScreenController(std::shared_ptr<MinecraftScreenModel>, int);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::shared_ptr<MinecraftScreenModel>, int);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $onOpen();

    MCNAPI void $_registerSafetyEventHandlers();
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
#include "mc/client/gui/screens/controllers/SafetyDialogScreenController.h"

// auto generated forward declare list
// clang-format off
class MinecraftScreenModel;
// clang-format on

class IPSafetyDialogScreenController : public ::SafetyDialogScreenController {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int> mExternalServerId;
    // NOLINTEND

public:
    // prevent constructor by default
    IPSafetyDialogScreenController();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IPSafetyDialogScreenController() /*override*/ = default;

    virtual void onOpen() /*override*/;

    virtual void _registerSafetyEventHandlers() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI IPSafetyDialogScreenController(::std::shared_ptr<::MinecraftScreenModel> model, int externalServerId);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::shared_ptr<::MinecraftScreenModel> model, int externalServerId);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $onOpen();

    MCAPI void $_registerSafetyEventHandlers();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForScreenController();

    MCNAPI static void** $vftableForEnableNonOwnerReferences();
    // NOLINTEND
};
#else // @header-generator platform
class IPSafetyDialogScreenController {};
#endif // @header-generator platform
#endif // @header-generator platform
