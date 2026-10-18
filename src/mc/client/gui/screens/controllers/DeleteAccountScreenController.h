#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/screens/controllers/MinecraftScreenController.h"
#include "mc/deps/core/threading/TaskGroup.h"

// auto generated forward declare list
// clang-format off
class MinecraftScreenModel;
// clang-format on

class DeleteAccountScreenController : public ::MinecraftScreenController {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>          mIsRealmsEnabled;
    ::ll::TypedStorage<1, 1, bool>          mConfirm0;
    ::ll::TypedStorage<1, 1, bool>          mConfirm1;
    ::ll::TypedStorage<1, 1, bool>          mConfirm2;
    ::ll::TypedStorage<1, 1, bool>          mConfirm3;
    ::ll::TypedStorage<8, 240, ::TaskGroup> mTaskGroup;
    // NOLINTEND

public:
    // prevent constructor by default
    DeleteAccountScreenController();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~DeleteAccountScreenController();

    virtual void onOpen();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit DeleteAccountScreenController(std::shared_ptr<MinecraftScreenModel>);

    MCNAPI void _registerBindings();

    MCNAPI void _registerEventHandlers();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::shared_ptr<MinecraftScreenModel>);
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
#include "mc/client/gui/screens/controllers/MinecraftScreenController.h"
#include "mc/deps/core/threading/TaskGroup.h"

// auto generated forward declare list
// clang-format off
class MinecraftScreenModel;
// clang-format on

class DeleteAccountScreenController : public ::MinecraftScreenController {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>          mIsRealmsEnabled;
    ::ll::TypedStorage<1, 1, bool>          mConfirm0;
    ::ll::TypedStorage<1, 1, bool>          mConfirm1;
    ::ll::TypedStorage<1, 1, bool>          mConfirm2;
    ::ll::TypedStorage<1, 1, bool>          mConfirm3;
    ::ll::TypedStorage<8, 336, ::TaskGroup> mTaskGroup;
    // NOLINTEND

public:
    // prevent constructor by default
    DeleteAccountScreenController();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~DeleteAccountScreenController() /*override*/ = default;

    virtual void onOpen() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit DeleteAccountScreenController(::std::shared_ptr<::MinecraftScreenModel> model);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::shared_ptr<::MinecraftScreenModel> model);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD void $onOpen();
    // NOLINTEND
};
#else // @header-generator platform
class DeleteAccountScreenController {};
#endif // @header-generator platform
#endif // @header-generator platform
