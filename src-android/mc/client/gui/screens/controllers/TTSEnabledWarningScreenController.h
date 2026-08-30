#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/DirtyFlag.h"
#include "mc/client/gui/SceneType.h"
#include "mc/client/gui/screens/controllers/MinecraftScreenController.h"
#include "mc/client/tts/TTSEnabledStatus.h"

// auto generated forward declare list
// clang-format off
class MinecraftScreenModel;
// clang-format on

class TTSEnabledWarningScreenController : public ::MinecraftScreenController {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>                     mFirstTick;
    ::ll::TypedStorage<4, 4, ::TTSEnabledStatus const> mEnabledStatus;
    // NOLINTEND

public:
    // prevent constructor by default
    TTSEnabledWarningScreenController();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~TTSEnabledWarningScreenController();

    virtual ::ui::DirtyFlag tick();

    virtual void onOpen();

    virtual ::ui::SceneType getSceneType() const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI TTSEnabledWarningScreenController(std::shared_ptr<MinecraftScreenModel>, ::TTSEnabledStatus);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::shared_ptr<MinecraftScreenModel>, ::TTSEnabledStatus);
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

    MCNAPI void $onOpen();

    MCNAPI ::ui::SceneType $getSceneType() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
