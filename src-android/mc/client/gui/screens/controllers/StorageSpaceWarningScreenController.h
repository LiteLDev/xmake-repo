#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/screens/controllers/MinecraftScreenController.h"

// auto generated forward declare list
// clang-format off
class MinecraftScreenModel;
// clang-format on

class StorageSpaceWarningScreenController : public ::MinecraftScreenController {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mMessage;
    // NOLINTEND

public:
    // prevent constructor by default
    StorageSpaceWarningScreenController();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~StorageSpaceWarningScreenController();

    virtual void onOpen();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI StorageSpaceWarningScreenController(std::shared_ptr<MinecraftScreenModel>, std::string const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::shared_ptr<MinecraftScreenModel>, std::string const&);
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
