#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

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
#else // @header-generator platform
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
class IScreenCapabilities;
// clang-format on

struct ScreenCapabilitiesRepo {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 16, ::StartScreenCapabilities>           mStart;
    ::ll::TypedStorage<8, 56, ::ActiveDirectoryScreenCapabilities> mActiveDirectory;
    ::ll::TypedStorage<8, 48, ::PauseScreenCapabilities>           mPause;
    ::ll::TypedStorage<8, 48, ::SettingsScreenCapabilities>        mGameSettings;
    ::ll::TypedStorage<8, 8, ::CodeScreenCapabilities>             mCodeScreen;
    ::ll::TypedStorage<8, 16, ::EDUWorldsScreenCapabilities>       mEduWorlds;
    ::ll::TypedStorage<8, 16, ::EDUServersScreenCapabilities>      mEduServers;
    ::ll::TypedStorage<8, 16, ::HudScreenCapabilities>             mHud;
    ::ll::TypedStorage<8, 40, ::LibraryScreenCapabilities>         mLibraryScreen;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 16> mUnkc06811;
    ::ll::UntypedStorage<8, 72> mUnkca7600;
    ::ll::UntypedStorage<8, 56> mUnkbb5cb9;
    ::ll::UntypedStorage<8, 48> mUnkd3cde1;
    ::ll::UntypedStorage<8, 8>  mUnk1c510f;
    ::ll::UntypedStorage<8, 16> mUnk23eeca;
    ::ll::UntypedStorage<8, 16> mUnk65af2c;
    ::ll::UntypedStorage<8, 16> mUnk23d02c;
    ::ll::UntypedStorage<8, 48> mUnkdae3f3;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    ScreenCapabilitiesRepo& operator=(ScreenCapabilitiesRepo const&);
    ScreenCapabilitiesRepo(ScreenCapabilitiesRepo const&);
    ScreenCapabilitiesRepo();
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::unique_ptr<IScreenCapabilities> get(std::string const&) const;

    MCNAPI ~ScreenCapabilitiesRepo();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    MCNAPI ::std::unique_ptr<::IScreenCapabilities> get(::std::string const& screenName) const;
#endif // @header-generator platform
    // NOLINTEND
};
