#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/ViewRequest.h"
#include "mc/client/gui/screens/controllers/MainMenuScreenController.h"
#include "mc/client/gui/screens/controllers/WorldsClipboardCallbacks.h"
#include "mc/world/level/FileArchiver.h"

// auto generated forward declare list
// clang-format off
class MainMenuScreenModel;
namespace Core { class FileStorageArea; }
// clang-format on

class WorldsClipboardScreenController : public ::MainMenuScreenController {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 528> mScreenCallbacks;
    // NOLINTEND

public:
    // prevent constructor by default
    WorldsClipboardScreenController();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~WorldsClipboardScreenController();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit WorldsClipboardScreenController(std::shared_ptr<MainMenuScreenModel>);

    MCNAPI void _registerEventHandlers();

    MCNAPI void setCallbacks(::WorldsClipboardCallbacks);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::shared_ptr<MainMenuScreenModel>);
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
