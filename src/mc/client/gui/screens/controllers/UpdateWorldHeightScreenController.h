#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/SceneType.h"
#include "mc/client/gui/screens/controllers/MinecraftScreenController.h"

// auto generated forward declare list
// clang-format off
class MinecraftScreenModel;
// clang-format on

class UpdateWorldHeightScreenController : public ::MinecraftScreenController {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 48> mStartWorldCallback;
    ::ll::UntypedStorage<1, 16> mBackupWorld;
    // NOLINTEND

public:
    // prevent constructor by default
    UpdateWorldHeightScreenController();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~UpdateWorldHeightScreenController();

    virtual void onOpen();

    virtual ::ui::SceneType getSceneType() const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI UpdateWorldHeightScreenController(std::shared_ptr<MinecraftScreenModel>, std::function<void(bool)>);

    MCNAPI void _registerEventHandlers();

    MCNAPI void _registerProgressBindings();
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
#include "mc/client/gui/screens/controllers/MinecraftScreenController.h"

// auto generated forward declare list
// clang-format off
class MinecraftScreenModel;
// clang-format on

class UpdateWorldHeightScreenController : public ::MinecraftScreenController {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 64, ::std::function<void(bool)>> mStartWorldCallback;
    ::ll::TypedStorage<1, 1, bool>                         mBackupWorld;
    // NOLINTEND

public:
    // prevent constructor by default
    UpdateWorldHeightScreenController();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~UpdateWorldHeightScreenController() /*override*/ = default;

    virtual void onOpen() /*override*/;

    virtual ::ui::SceneType getSceneType() const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI UpdateWorldHeightScreenController(
        ::std::shared_ptr<::MinecraftScreenModel> model,
        ::std::function<void(bool)>               startWorldCallback
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::shared_ptr<::MinecraftScreenModel> model, ::std::function<void(bool)> startWorldCallback);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $onOpen();

    MCFOLD ::ui::SceneType $getSceneType() const;
    // NOLINTEND
};
#else // @header-generator platform
class UpdateWorldHeightScreenController {};
#endif // @header-generator platform
#endif // @header-generator platform
