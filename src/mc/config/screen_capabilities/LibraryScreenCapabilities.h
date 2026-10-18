#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/config/TypedScreenCapabilities.h"

#if defined(LL_PLAT_A) // @header-generator platform
struct LibraryScreenCapabilities : public ::TypedScreenCapabilities<LibraryScreenCapabilities> {
#else // @header-generator platform
struct LibraryScreenCapabilities : public ::TypedScreenCapabilities<::LibraryScreenCapabilities> {
#endif // @header-generator platform
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<1, 1, bool>         mLearnMoreAlwaysShown;
    ::ll::TypedStorage<1, 1, bool>         mRequireAllowKeyword;
    ::ll::TypedStorage<1, 1, bool>         mShareLinkIgnored;
    ::ll::TypedStorage<1, 1, bool>         mShareToTeams;
    ::ll::TypedStorage<1, 1, bool>         mExternalLinkEnabled;
    ::ll::TypedStorage<8, 24, std::string> mOpenWorldUrl;
#else // @header-generator platform
    ::ll::UntypedStorage<1, 1>  mUnk127e67;
    ::ll::UntypedStorage<1, 1>  mUnkddf326;
    ::ll::UntypedStorage<1, 1>  mUnk9285e2;
    ::ll::UntypedStorage<1, 1>  mUnk680c44;
    ::ll::UntypedStorage<1, 1>  mUnk7c9d7d;
    ::ll::UntypedStorage<8, 32> mUnk96074b;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    LibraryScreenCapabilities& operator=(LibraryScreenCapabilities const&);
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    LibraryScreenCapabilities(LibraryScreenCapabilities const&);
#endif // @header-generator platform
    LibraryScreenCapabilities();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~LibraryScreenCapabilities();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    virtual ~LibraryScreenCapabilities() /*override*/ = default;
#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
