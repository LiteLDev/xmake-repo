#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/DirtyFlag.h"
#include "mc/client/gui/screens/controllers/MainMenuScreenController.h"
#include "mc/client/gui/screens/models/DayOneExperienceWizardTabs.h"
#include "mc/world/actor/player/LoadingState.h"

// auto generated forward declare list
// clang-format off
class DayOneExperienceModel;
// clang-format on

class DayOneExperienceScreenController : public ::MainMenuScreenController {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::DayOneExperienceWizardTabs>            mActiveTabIndex;
    ::ll::TypedStorage<1, 1, bool>                                    mInitializedFocus;
    ::ll::TypedStorage<8, 16, std::shared_ptr<DayOneExperienceModel>> mDayOneExperienceModel;
    // NOLINTEND

public:
    // prevent constructor by default
    DayOneExperienceScreenController();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~DayOneExperienceScreenController();

    virtual ::ui::DirtyFlag tick();

    virtual void onOpen();

    virtual void onInit();

    virtual std::string getAdditionalScreenInfo() const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit DayOneExperienceScreenController(std::shared_ptr<DayOneExperienceModel>);

    MCNAPI void _registerBindings();

    MCNAPI void _registerEventHandlers();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::shared_ptr<DayOneExperienceModel>);
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

    MCNAPI void $onInit();

    MCNAPI std::string $getAdditionalScreenInfo() const;
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
#include "mc/client/gui/DirtyFlag.h"
#include "mc/client/gui/screens/controllers/MainMenuScreenController.h"
#include "mc/client/gui/screens/models/DayOneExperienceWizardTabs.h"

// auto generated forward declare list
// clang-format off
class DayOneExperienceModel;
// clang-format on

class DayOneExperienceScreenController : public ::MainMenuScreenController {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::DayOneExperienceWizardTabs>                mActiveTabIndex;
    ::ll::TypedStorage<1, 1, bool>                                        mInitializedFocus;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::DayOneExperienceModel>> mDayOneExperienceModel;
    // NOLINTEND

public:
    // prevent constructor by default
    DayOneExperienceScreenController();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~DayOneExperienceScreenController() /*override*/ = default;

    virtual void onOpen() /*override*/;

    virtual void onInit() /*override*/;

    virtual ::ui::DirtyFlag tick() /*override*/;

    virtual ::std::string getAdditionalScreenInfo() const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit DayOneExperienceScreenController(::std::shared_ptr<::DayOneExperienceModel> model);

    MCAPI void _registerBindings();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::shared_ptr<::DayOneExperienceModel> model);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $onOpen();

    MCAPI void $onInit();

    MCAPI ::ui::DirtyFlag $tick();

    MCAPI ::std::string $getAdditionalScreenInfo() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForEnableNonOwnerReferences();

    MCNAPI static void** $vftableForScreenController();
    // NOLINTEND
};
#else // @header-generator platform
class DayOneExperienceScreenController {};
#endif // @header-generator platform
#endif // @header-generator platform
