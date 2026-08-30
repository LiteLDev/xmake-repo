#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/screens/controllers/SettingsScreenMode.h"

// auto generated forward declare list
// clang-format off
class LevelData;
// clang-format on

struct ClassroomSettingsScreenControllerCallbacks {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 48> mGetLevelData;
    ::ll::UntypedStorage<8, 48> mGetSettingsMode;
    // NOLINTEND

public:
    // prevent constructor by default
    ClassroomSettingsScreenControllerCallbacks& operator=(ClassroomSettingsScreenControllerCallbacks const&);
    ClassroomSettingsScreenControllerCallbacks();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~ClassroomSettingsScreenControllerCallbacks();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
