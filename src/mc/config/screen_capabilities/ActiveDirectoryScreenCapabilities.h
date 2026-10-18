#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/config/TypedScreenCapabilities.h"

#if defined(LL_PLAT_A) // @header-generator platform
struct ActiveDirectoryScreenCapabilities : public ::TypedScreenCapabilities<ActiveDirectoryScreenCapabilities> {
#else // @header-generator platform
struct ActiveDirectoryScreenCapabilities : public ::TypedScreenCapabilities<::ActiveDirectoryScreenCapabilities> {
#endif // @header-generator platform
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::string> mEligibilityUrl;
    ::ll::TypedStorage<8, 24, std::string> mClientDownloadUrl;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 32> mUnk9281b0;
    ::ll::UntypedStorage<8, 32> mUnkdfc555;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    ActiveDirectoryScreenCapabilities& operator=(ActiveDirectoryScreenCapabilities const&);
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    ActiveDirectoryScreenCapabilities(ActiveDirectoryScreenCapabilities const&);
#endif // @header-generator platform
    ActiveDirectoryScreenCapabilities();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~ActiveDirectoryScreenCapabilities();
#else // @header-generator platform
    virtual ~ActiveDirectoryScreenCapabilities() /*override*/;
#endif // @header-generator platform
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
