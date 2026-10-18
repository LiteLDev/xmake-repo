#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/SceneType.h"
#include "mc/client/gui/screens/controllers/ActiveDirectoryModalArgs.h"
#include "mc/client/gui/screens/controllers/MinecraftScreenController.h"
#include "mc/client/gui/screens/controllers/ModalScreenButtonId.h"

// auto generated forward declare list
// clang-format off
class MinecraftScreenModel;
// clang-format on

class ActiveDirectoryModalsScreenController : public ::MinecraftScreenController {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 144> mArgs;
    // NOLINTEND

public:
    // prevent constructor by default
    ActiveDirectoryModalsScreenController();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ActiveDirectoryModalsScreenController();

    virtual void onOpen();

    virtual ::ui::SceneType getSceneType() const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ActiveDirectoryModalsScreenController(std::shared_ptr<MinecraftScreenModel>, ::ActiveDirectoryModalArgs);

    MCNAPI void _onComplete(::ModalScreenButtonId);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::shared_ptr<MinecraftScreenModel>, ::ActiveDirectoryModalArgs);
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

    MCNAPI ::ui::SceneType $getSceneType() const;
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
#include "mc/client/gui/SceneType.h"
#include "mc/client/gui/screens/controllers/ActiveDirectoryModalArgs.h"
#include "mc/client/gui/screens/controllers/MinecraftScreenController.h"

// auto generated forward declare list
// clang-format off
class MinecraftScreenModel;
// clang-format on

class ActiveDirectoryModalsScreenController : public ::MinecraftScreenController {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 192, ::ActiveDirectoryModalArgs> mArgs;
    // NOLINTEND

public:
    // prevent constructor by default
    ActiveDirectoryModalsScreenController();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ActiveDirectoryModalsScreenController() /*override*/ = default;

    virtual void onOpen() /*override*/;

    virtual ::ui::SceneType getSceneType() const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ActiveDirectoryModalsScreenController(
        ::std::shared_ptr<::MinecraftScreenModel> model,
        ::ActiveDirectoryModalArgs                args
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::shared_ptr<::MinecraftScreenModel> model, ::ActiveDirectoryModalArgs args);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $onOpen();

    MCFOLD ::ui::SceneType $getSceneType() const;
    // NOLINTEND
};
#else // @header-generator platform
class ActiveDirectoryModalsScreenController {};
#endif // @header-generator platform
#endif // @header-generator platform
