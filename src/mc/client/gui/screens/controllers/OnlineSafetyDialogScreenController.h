#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/screens/controllers/SafetyDialogScreenController.h"

// auto generated forward declare list
// clang-format off
class MinecraftScreenModel;
class OnlineSafetyProgressHandler;
// clang-format on

class OnlineSafetyDialogScreenController : public ::SafetyDialogScreenController {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::OnlineSafetyProgressHandler&> mOnlineSafetyProgressHandler;
    // NOLINTEND

public:
    // prevent constructor by default
    OnlineSafetyDialogScreenController& operator=(OnlineSafetyDialogScreenController const&);
    OnlineSafetyDialogScreenController(OnlineSafetyDialogScreenController const&);
    OnlineSafetyDialogScreenController();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~OnlineSafetyDialogScreenController();

    virtual void onOpen();

    virtual void _registerSafetyEventHandlers();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI OnlineSafetyDialogScreenController(std::shared_ptr<MinecraftScreenModel>, ::OnlineSafetyProgressHandler&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::shared_ptr<MinecraftScreenModel>, ::OnlineSafetyProgressHandler&);
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
class OnlineSafetyProgressHandler;
// clang-format on

class OnlineSafetyDialogScreenController : public ::SafetyDialogScreenController {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::OnlineSafetyProgressHandler&> mOnlineSafetyProgressHandler;
    // NOLINTEND

public:
    // prevent constructor by default
    OnlineSafetyDialogScreenController& operator=(OnlineSafetyDialogScreenController const&);
    OnlineSafetyDialogScreenController(OnlineSafetyDialogScreenController const&);
    OnlineSafetyDialogScreenController();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~OnlineSafetyDialogScreenController() /*override*/ = default;

    virtual void onOpen() /*override*/;

    virtual void _registerSafetyEventHandlers() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI OnlineSafetyDialogScreenController(
        ::std::shared_ptr<::MinecraftScreenModel> model,
        ::OnlineSafetyProgressHandler&            handler
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::shared_ptr<::MinecraftScreenModel> model, ::OnlineSafetyProgressHandler& handler);
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
    MCNAPI static void** $vftableForEnableNonOwnerReferences();

    MCNAPI static void** $vftableForScreenController();
    // NOLINTEND
};
#else // @header-generator platform
class OnlineSafetyDialogScreenController {};
#endif // @header-generator platform
#endif // @header-generator platform
