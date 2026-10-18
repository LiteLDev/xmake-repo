#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/DirtyFlag.h"
#include "mc/client/gui/screens/controllers/ClientInstanceScreenController.h"
#include "mc/client/gui/screens/controllers/ModalScreenData.h"

// auto generated forward declare list
// clang-format off
class ClientInstanceScreenModel;
// clang-format on

class ModalScreenController : public ::ClientInstanceScreenController {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 304, ::ModalScreenData> mModalScreenData;
    ::ll::TypedStorage<1, 1, bool>                mHasDisplayedModal;
    // NOLINTEND

public:
    // prevent constructor by default
    ModalScreenController();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ModalScreenController();

    virtual ::ui::DirtyFlag tick();

    virtual void onInit();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ModalScreenController(std::shared_ptr<ClientInstanceScreenModel>, ::ModalScreenData const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::shared_ptr<ClientInstanceScreenModel>, ::ModalScreenData const&);
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

    MCNAPI void $onInit();
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
#include "mc/client/gui/screens/controllers/ClientInstanceScreenController.h"
#include "mc/client/gui/screens/controllers/ModalScreenData.h"

// auto generated forward declare list
// clang-format off
class ClientInstanceScreenModel;
// clang-format on

class ModalScreenController : public ::ClientInstanceScreenController {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 368, ::ModalScreenData> mModalScreenData;
    ::ll::TypedStorage<1, 1, bool>                mHasDisplayedModal;
    // NOLINTEND

public:
    // prevent constructor by default
    ModalScreenController();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ModalScreenController() /*override*/ = default;

    virtual void onInit() /*override*/;

    virtual ::ui::DirtyFlag tick() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI
    ModalScreenController(::std::shared_ptr<::ClientInstanceScreenModel> model, ::ModalScreenData const& modalData);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::shared_ptr<::ClientInstanceScreenModel> model, ::ModalScreenData const& modalData);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD void $onInit();

    MCAPI ::ui::DirtyFlag $tick();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForScreenController();

    MCNAPI static void** $vftableForEnableNonOwnerReferences();
    // NOLINTEND
};
#else // @header-generator platform
class ModalScreenController {};
#endif // @header-generator platform
#endif // @header-generator platform
