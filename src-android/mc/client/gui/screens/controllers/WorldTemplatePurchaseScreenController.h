#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/DirtyFlag.h"
#include "mc/client/gui/GameEventNotification.h"
#include "mc/client/gui/screens/controllers/MainMenuScreenController.h"
#include "mc/client/gui/screens/controllers/PanButtonState.h"
#include "mc/client/gui/screens/controllers/ScreenExitBehavior.h"

// auto generated forward declare list
// clang-format off
class MainMenuScreenModel;
class StoreCatalogItem;
// clang-format on

class WorldTemplatePurchaseScreenController : public ::MainMenuScreenController {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>             mWorldTemplateInstalled;
    ::ll::TypedStorage<1, 1, bool>             mScrollButtonRelease;
    ::ll::TypedStorage<4, 4, ::PanButtonState> mPanState;
    ::ll::TypedStorage<4, 4, float>            mUVx;
    ::ll::TypedStorage<4, 4, float const>      mScrollSpeed;
    ::ll::UntypedStorage<8, 8>                 mItem;
    // NOLINTEND

public:
    // prevent constructor by default
    WorldTemplatePurchaseScreenController& operator=(WorldTemplatePurchaseScreenController const&);
    WorldTemplatePurchaseScreenController(WorldTemplatePurchaseScreenController const&);
    WorldTemplatePurchaseScreenController();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::ui::DirtyFlag tick();

    virtual ::ui::DirtyFlag handleGameEventNotification(::ui::GameEventNotification);
    // NOLINTEND
};
