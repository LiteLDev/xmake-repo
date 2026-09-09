#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/config/screen_capabilities/ActiveDirectoryScreenCapabilities.h"
#include "mc/config/screen_capabilities/CodeScreenCapabilities.h"
#include "mc/config/screen_capabilities/EDUServersScreenCapabilities.h"
#include "mc/config/screen_capabilities/EDUWorldsScreenCapabilities.h"
#include "mc/config/screen_capabilities/HudScreenCapabilities.h"
#include "mc/config/screen_capabilities/LibraryScreenCapabilities.h"
#include "mc/config/screen_capabilities/PauseScreenCapabilities.h"
#include "mc/config/screen_capabilities/SettingsScreenCapabilities.h"
#include "mc/config/screen_capabilities/StartScreenCapabilities.h"

// auto generated forward declare list
// clang-format off
class IScreenCapabilities;
// clang-format on

struct ScreenCapabilitiesRepo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::StartScreenCapabilities>           mStart;
    ::ll::TypedStorage<8, 56, ::ActiveDirectoryScreenCapabilities> mActiveDirectory;
    ::ll::TypedStorage<8, 48, ::PauseScreenCapabilities>           mPause;
    ::ll::TypedStorage<8, 48, ::SettingsScreenCapabilities>        mGameSettings;
    ::ll::TypedStorage<8, 8, ::CodeScreenCapabilities>             mCodeScreen;
    ::ll::TypedStorage<8, 16, ::EDUWorldsScreenCapabilities>       mEduWorlds;
    ::ll::TypedStorage<8, 16, ::EDUServersScreenCapabilities>      mEduServers;
    ::ll::TypedStorage<8, 16, ::HudScreenCapabilities>             mHud;
    ::ll::TypedStorage<8, 40, ::LibraryScreenCapabilities>         mLibraryScreen;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI std::unique_ptr<IScreenCapabilities> get(std::string const&) const;

    MCNAPI ~ScreenCapabilitiesRepo();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
