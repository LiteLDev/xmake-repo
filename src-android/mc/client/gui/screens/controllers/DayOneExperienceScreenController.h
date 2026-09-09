#pragma once

#include "mc/_HeaderOutputPredefine.h"

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
