#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/screens/controllers/MainMenuScreenController.h"
#include "mc/client/gui/screens/controllers/WorldsClipboardCallbacks.h"

// auto generated forward declare list
// clang-format off
class MainMenuScreenModel;
// clang-format on

class WorldsClipboardScreenController : public ::MainMenuScreenController {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 704, ::WorldsClipboardCallbacks> mScreenCallbacks;
    // NOLINTEND

public:
    // prevent constructor by default
    WorldsClipboardScreenController();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit WorldsClipboardScreenController(::std::shared_ptr<::MainMenuScreenModel> model);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::shared_ptr<::MainMenuScreenModel> model);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForEnableNonOwnerReferences();

    MCNAPI static void** $vftableForScreenController();
    // NOLINTEND
};
#else // @header-generator platform
class WorldsClipboardScreenController {};
#endif // @header-generator platform
#endif // @header-generator platform
