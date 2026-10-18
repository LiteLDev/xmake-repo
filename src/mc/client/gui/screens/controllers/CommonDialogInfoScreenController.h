#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/screens/controllers/MinecraftScreenController.h"

// auto generated forward declare list
// clang-format off
class MinecraftScreenModel;
// clang-format on

class CommonDialogInfoScreenController : public ::MinecraftScreenController {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string const> mDialogTitle;
    ::ll::TypedStorage<8, 24, std::string const> mDialogBody;
    // NOLINTEND

public:
    // prevent constructor by default
    CommonDialogInfoScreenController();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~CommonDialogInfoScreenController();

    virtual void onOpen();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI
    CommonDialogInfoScreenController(std::shared_ptr<MinecraftScreenModel>, std::string const&, std::string const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::shared_ptr<MinecraftScreenModel>, std::string const&, std::string const&);
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

// auto generated forward declare list
// clang-format off
class MinecraftScreenModel;
// clang-format on

class CommonDialogInfoScreenController : public ::MinecraftScreenController {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string const> mDialogTitle;
    ::ll::TypedStorage<8, 32, ::std::string const> mDialogBody;
    // NOLINTEND

public:
    // prevent constructor by default
    CommonDialogInfoScreenController();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~CommonDialogInfoScreenController() /*override*/ = default;

    virtual void onOpen() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI CommonDialogInfoScreenController(
        ::std::shared_ptr<::MinecraftScreenModel> model,
        ::std::string const&                      dialogTitle,
        ::std::string const&                      dialogBody
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::std::shared_ptr<::MinecraftScreenModel> model,
        ::std::string const&                      dialogTitle,
        ::std::string const&                      dialogBody
    );
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $onOpen();
    // NOLINTEND
};
#else // @header-generator platform
class CommonDialogInfoScreenController {};
#endif // @header-generator platform
#endif // @header-generator platform
