#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/config/TypedScreenCapabilities.h"

#if defined(LL_PLAT_A) // @header-generator platform
struct SettingsScreenCapabilities : public ::TypedScreenCapabilities<SettingsScreenCapabilities> {
#else // @header-generator platform
struct SettingsScreenCapabilities : public ::TypedScreenCapabilities<::SettingsScreenCapabilities> {
#endif // @header-generator platform
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    ::ll::UntypedStorage<1, 1>  mUnkb1617a;
    ::ll::UntypedStorage<1, 1>  mUnkc8b176;
    ::ll::UntypedStorage<1, 1>  mUnk16a365;
    ::ll::UntypedStorage<1, 1>  mUnk3208be;
    ::ll::UntypedStorage<1, 1>  mUnk836179;
    ::ll::UntypedStorage<1, 1>  mUnka2b9ce;
    ::ll::UntypedStorage<1, 1>  mUnk97de66;
    ::ll::UntypedStorage<1, 1>  mUnka9eab7;
    ::ll::UntypedStorage<1, 1>  mUnkabbfbd;
    ::ll::UntypedStorage<1, 1>  mUnk2c7724;
    ::ll::UntypedStorage<1, 1>  mUnk1ac17b;
    ::ll::UntypedStorage<8, 24> mUnkd5d7d9;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    SettingsScreenCapabilities& operator=(SettingsScreenCapabilities const&);
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    SettingsScreenCapabilities(SettingsScreenCapabilities const&);
#endif // @header-generator platform
    SettingsScreenCapabilities();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~SettingsScreenCapabilities();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    virtual ~SettingsScreenCapabilities() /*override*/ = default;
#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
