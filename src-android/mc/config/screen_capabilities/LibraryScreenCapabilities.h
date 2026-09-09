#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/config/TypedScreenCapabilities.h"

struct LibraryScreenCapabilities : public ::TypedScreenCapabilities<LibraryScreenCapabilities> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>         mLearnMoreAlwaysShown;
    ::ll::TypedStorage<1, 1, bool>         mRequireAllowKeyword;
    ::ll::TypedStorage<1, 1, bool>         mShareLinkIgnored;
    ::ll::TypedStorage<1, 1, bool>         mShareToTeams;
    ::ll::TypedStorage<1, 1, bool>         mExternalLinkEnabled;
    ::ll::TypedStorage<8, 24, std::string> mOpenWorldUrl;
    // NOLINTEND

public:
    // prevent constructor by default
    LibraryScreenCapabilities& operator=(LibraryScreenCapabilities const&);
    LibraryScreenCapabilities();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~LibraryScreenCapabilities();
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
