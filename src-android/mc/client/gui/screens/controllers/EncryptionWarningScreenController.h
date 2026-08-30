#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/screens/controllers/MinecraftScreenController.h"

// auto generated forward declare list
// clang-format off
class MinecraftScreenModel;
// clang-format on

class EncryptionWarningScreenController : public ::MinecraftScreenController {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 48> mCallback;
    // NOLINTEND

public:
    // prevent constructor by default
    EncryptionWarningScreenController();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~EncryptionWarningScreenController();

    virtual void onOpen();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI EncryptionWarningScreenController(std::shared_ptr<MinecraftScreenModel>, std::function<void(bool)>);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::shared_ptr<MinecraftScreenModel>, std::function<void(bool)>);
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
