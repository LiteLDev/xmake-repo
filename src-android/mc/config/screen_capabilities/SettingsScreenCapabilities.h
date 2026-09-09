#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/config/TypedScreenCapabilities.h"

struct SettingsScreenCapabilities : public ::TypedScreenCapabilities<SettingsScreenCapabilities> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>                      mCreatorSectionIgnored;
    ::ll::TypedStorage<1, 1, bool>                      mWorldSectionIgnored;
    ::ll::TypedStorage<1, 1, bool>                      mGlobalResourcesSectionIgnored;
    ::ll::TypedStorage<1, 1, bool>                      mStorageSectionIgnored;
    ::ll::TypedStorage<1, 1, bool>                      mControllerLayoutIgnored;
    ::ll::TypedStorage<1, 1, bool>                      mCloudStorageIgnored;
    ::ll::TypedStorage<1, 1, bool>                      mSwitchAccountsButtonIgnored;
    ::ll::TypedStorage<1, 1, bool>                      mSSOToggleIgnored;
    ::ll::TypedStorage<1, 1, bool>                      mSignOutButtonIgnored;
    ::ll::TypedStorage<1, 1, bool>                      mChatScreenInputsIgnored;
    ::ll::TypedStorage<1, 1, bool>                      mExternalLinkEnabled;
    ::ll::TypedStorage<8, 24, std::vector<std::string>> mDisabledInputMappings;
    // NOLINTEND

public:
    // prevent constructor by default
    SettingsScreenCapabilities& operator=(SettingsScreenCapabilities const&);
    SettingsScreenCapabilities();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~SettingsScreenCapabilities();
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
