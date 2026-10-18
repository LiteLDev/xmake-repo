#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/config/TypedScreenCapabilities.h"

#if defined(LL_PLAT_A) // @header-generator platform
struct PauseScreenCapabilities : public ::TypedScreenCapabilities<PauseScreenCapabilities> {
#else // @header-generator platform
struct PauseScreenCapabilities : public ::TypedScreenCapabilities<::PauseScreenCapabilities> {
#endif // @header-generator platform
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<1, 1, bool>         mEduPermissionsIgnored;
    ::ll::TypedStorage<1, 1, bool>         mEduPauseIgnored;
    ::ll::TypedStorage<1, 1, bool>         mExternalLinkEnabled;
    ::ll::TypedStorage<1, 1, bool>         mMultiplayerTabIgnored;
    ::ll::TypedStorage<1, 1, bool>         mAccessibilityIsDefaultPauseSettingsTab;
    ::ll::TypedStorage<8, 24, std::string> mJoincodeUrl;
    ::ll::TypedStorage<1, 1, bool>         mJoinCodeShare;
#else // @header-generator platform
    ::ll::UntypedStorage<1, 1>  mUnk28e16e;
    ::ll::UntypedStorage<1, 1>  mUnkace38a;
    ::ll::UntypedStorage<1, 1>  mUnk12ffaf;
    ::ll::UntypedStorage<1, 1>  mUnk8cf950;
    ::ll::UntypedStorage<1, 1>  mUnk972427;
    ::ll::UntypedStorage<8, 32> mUnk88f9f4;
    ::ll::UntypedStorage<1, 1>  mUnkc36dc1;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    PauseScreenCapabilities& operator=(PauseScreenCapabilities const&);
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    PauseScreenCapabilities(PauseScreenCapabilities const&);
#endif // @header-generator platform
    PauseScreenCapabilities();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~PauseScreenCapabilities();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    virtual ~PauseScreenCapabilities() /*override*/ = default;
#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
