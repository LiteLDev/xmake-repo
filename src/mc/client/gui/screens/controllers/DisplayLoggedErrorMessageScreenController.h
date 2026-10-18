#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/DirtyFlag.h"
#include "mc/client/gui/SceneType.h"
#include "mc/client/gui/screens/controllers/MinecraftScreenController.h"

// auto generated forward declare list
// clang-format off
struct DisplayLoggedError;
// clang-format on

class DisplayLoggedErrorMessageScreenController : public ::MinecraftScreenController {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::DisplayLoggedError>> mErrorList;
    ::ll::TypedStorage<1, 1, bool>                                 mHasShownErrorPopup;
    ::ll::TypedStorage<1, 1, bool>                                 mDirty;
    ::ll::TypedStorage<8, 32, ::std::string>                       mDelayedSetFocusControlName;
    ::ll::TypedStorage<1, 1, bool>                                 mScheduleFocusToNewObject;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~DisplayLoggedErrorMessageScreenController() /*override*/ = default;

    virtual ::ui::DirtyFlag tick() /*override*/;

    virtual ::ui::SceneType getSceneType() const /*override*/;
    // NOLINTEND
};
#else // @header-generator platform
class DisplayLoggedErrorMessageScreenController {};
#endif // @header-generator platform
#endif // @header-generator platform
