#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/config/TypedScreenCapabilities.h"

struct PauseScreenCapabilities : public ::TypedScreenCapabilities<PauseScreenCapabilities> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>         mEduPermissionsIgnored;
    ::ll::TypedStorage<1, 1, bool>         mEduPauseIgnored;
    ::ll::TypedStorage<1, 1, bool>         mExternalLinkEnabled;
    ::ll::TypedStorage<1, 1, bool>         mMultiplayerTabIgnored;
    ::ll::TypedStorage<1, 1, bool>         mAccessibilityIsDefaultPauseSettingsTab;
    ::ll::TypedStorage<8, 24, std::string> mJoincodeUrl;
    ::ll::TypedStorage<1, 1, bool>         mJoinCodeShare;
    // NOLINTEND

public:
    // prevent constructor by default
    PauseScreenCapabilities& operator=(PauseScreenCapabilities const&);
    PauseScreenCapabilities();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~PauseScreenCapabilities();
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
