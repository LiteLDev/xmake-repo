#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/SceneType.h"
#include "mc/client/gui/screens/controllers/MinecraftScreenController.h"

// auto generated forward declare list
// clang-format off
class MinecraftScreenModel;
// clang-format on

class GameInputErrorScreenController : public ::MinecraftScreenController {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 48> mCallback;
    // NOLINTEND

public:
    // prevent constructor by default
    GameInputErrorScreenController();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~GameInputErrorScreenController() = default;

    virtual void onOpen();

    virtual ::ui::SceneType getSceneType() const;
    // NOLINTEND
};
