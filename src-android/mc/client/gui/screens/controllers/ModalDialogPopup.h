#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/screens/controllers/MinecraftScreenController.h"
#include "mc/client/gui/screens/controllers/ModalScreenButtonMode.h"

// auto generated forward declare list
// clang-format off
class MinecraftScreenModel;
// clang-format on

class ModalDialogPopup : public ::MinecraftScreenController {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string const>      messageOverride;
    ::ll::TypedStorage<8, 24, std::string const>      message;
    ::ll::UntypedStorage<8, 48>                       mCallback;
    ::ll::TypedStorage<8, 24, std::string const>      mTitle;
    ::ll::TypedStorage<4, 4, ::ModalScreenButtonMode> mButtonMode;
    ::ll::TypedStorage<1, 1, bool>                    mDisplayedPopup;
    // NOLINTEND

public:
    // prevent constructor by default
    ModalDialogPopup();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ModalDialogPopup();

    virtual void onOpen();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ModalDialogPopup(
        std::shared_ptr<MinecraftScreenModel>,
        std::string const&,
        std::string const&,
        std::function<void(bool)>,
        std::string const&,
        ::ModalScreenButtonMode
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        std::shared_ptr<MinecraftScreenModel>,
        std::string const&,
        std::string const&,
        std::function<void(bool)>,
        std::string const&,
        ::ModalScreenButtonMode
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
    MCNAPI void $onOpen();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
