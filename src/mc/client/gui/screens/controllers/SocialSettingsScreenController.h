#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/screens/controllers/SettingsScreenControllerBase.h"

// auto generated forward declare list
// clang-format off
class MainMenuScreenModel;
// clang-format on

class SocialSettingsScreenController : public ::SettingsScreenControllerBase {
public:
    // prevent constructor by default
    SocialSettingsScreenController();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~SocialSettingsScreenController();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
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
#include "mc/client/gui/screens/controllers/SettingsScreenControllerBase.h"

class SocialSettingsScreenController : public ::SettingsScreenControllerBase {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~SocialSettingsScreenController() /*override*/ = default;
    // NOLINTEND
};
#else // @header-generator platform
class SocialSettingsScreenController {};
#endif // @header-generator platform
#endif // @header-generator platform
