#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
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
    ::ll::TypedStorage<8, 64, ::std::function<::LevelData&()>>         mGetLevelData;
    ::ll::TypedStorage<8, 64, ::std::function<::SettingsScreenMode()>> mGetSettingsMode;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~ClassroomSettingsScreenControllerCallbacks();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
#else // @header-generator platform
struct ClassroomSettingsScreenControllerCallbacks {};
#endif // @header-generator platform
#endif // @header-generator platform
