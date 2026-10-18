#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/screens/controllers/EDUDiscoveryDialogCallbacks.h"
#include "mc/client/gui/screens/controllers/MinecraftScreenController.h"
#include "mc/client/social/edu_discovery/ButtonAction.h"

// auto generated forward declare list
// clang-format off
class IEDUDiscoveryService;
class MinecraftScreenModel;
class UIPropertyBag;
namespace EDUDiscovery { struct Button; }
namespace EDUDiscovery { struct Dialog; }
// clang-format on

class EDUDiscoveryDialogScreenController : public ::MinecraftScreenController {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mDialog;
    ::ll::UntypedStorage<8, 96> mCallbacks;
    // NOLINTEND

public:
    // prevent constructor by default
    EDUDiscoveryDialogScreenController();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~EDUDiscoveryDialogScreenController();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI EDUDiscoveryDialogScreenController(std::shared_ptr<MinecraftScreenModel>, ::EDUDiscoveryDialogCallbacks);

    MCNAPI void _openPopup();

    MCNAPI void _performButtonAction(::EDUDiscovery::ButtonAction);

    MCNAPI bool presentIfNeeded();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::shared_ptr<MinecraftScreenModel>, ::EDUDiscoveryDialogCallbacks);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
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
#include "mc/client/gui/screens/controllers/EDUDiscoveryDialogCallbacks.h"
#include "mc/client/gui/screens/controllers/MinecraftScreenController.h"
#include "mc/client/social/edu_discovery/ButtonAction.h"

// auto generated forward declare list
// clang-format off
class MinecraftScreenModel;
namespace EDUDiscovery { struct Dialog; }
// clang-format on

class EDUDiscoveryDialogScreenController : public ::MinecraftScreenController {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::EDUDiscovery::Dialog>> mDialog;
    ::ll::TypedStorage<8, 128, ::EDUDiscoveryDialogCallbacks>           mCallbacks;
    // NOLINTEND

public:
    // prevent constructor by default
    EDUDiscoveryDialogScreenController();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~EDUDiscoveryDialogScreenController() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI EDUDiscoveryDialogScreenController(
        ::std::shared_ptr<::MinecraftScreenModel> model,
        ::EDUDiscoveryDialogCallbacks             callbacks
    );

    MCAPI void _openPopup();

    MCAPI void _performButtonAction(::EDUDiscovery::ButtonAction action);

    MCAPI bool presentIfNeeded();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::shared_ptr<::MinecraftScreenModel> model, ::EDUDiscoveryDialogCallbacks callbacks);
    // NOLINTEND
};
#else // @header-generator platform
class EDUDiscoveryDialogScreenController {};
#endif // @header-generator platform
#endif // @header-generator platform
