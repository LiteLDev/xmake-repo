#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/DirtyFlag.h"
#include "mc/client/gui/SceneType.h"
#include "mc/client/gui/screens/controllers/MinecraftScreenController.h"

// auto generated forward declare list
// clang-format off
class MinecraftScreenModel;
struct DisplayLoggedError;
struct LinksToStyle;
// clang-format on

class DisplayLoggedErrorMessageScreenController : public ::MinecraftScreenController {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24>            mErrorList;
    ::ll::TypedStorage<1, 1, bool>         mHasShownErrorPopup;
    ::ll::TypedStorage<1, 1, bool>         mDirty;
    ::ll::TypedStorage<8, 24, std::string> mDelayedSetFocusControlName;
    ::ll::TypedStorage<1, 1, bool>         mScheduleFocusToNewObject;
    // NOLINTEND

public:
    // prevent constructor by default
    DisplayLoggedErrorMessageScreenController();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~DisplayLoggedErrorMessageScreenController() = default;

    virtual ::ui::DirtyFlag tick();

    virtual ::ui::SceneType getSceneType() const;
    // NOLINTEND
};
