#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/config/TypedScreenCapabilities.h"

struct ActiveDirectoryScreenCapabilities : public ::TypedScreenCapabilities<ActiveDirectoryScreenCapabilities> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string> mEligibilityUrl;
    ::ll::TypedStorage<8, 24, std::string> mClientDownloadUrl;
    // NOLINTEND

public:
    // prevent constructor by default
    ActiveDirectoryScreenCapabilities& operator=(ActiveDirectoryScreenCapabilities const&);
    ActiveDirectoryScreenCapabilities();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ActiveDirectoryScreenCapabilities();
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
