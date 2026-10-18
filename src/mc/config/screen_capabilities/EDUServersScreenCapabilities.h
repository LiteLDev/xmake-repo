#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/config/TypedScreenCapabilities.h"

#if defined(LL_PLAT_A) // @header-generator platform
struct EDUServersScreenCapabilities : public ::TypedScreenCapabilities<EDUServersScreenCapabilities> {
#else // @header-generator platform
struct EDUServersScreenCapabilities : public ::TypedScreenCapabilities<::EDUServersScreenCapabilities> {
#endif // @header-generator platform
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<1, 1, bool> mManageShareEnabled;
#else // @header-generator platform
    ::ll::UntypedStorage<1, 1> mUnk3d38b2;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    EDUServersScreenCapabilities& operator=(EDUServersScreenCapabilities const&);
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    EDUServersScreenCapabilities(EDUServersScreenCapabilities const&);
#endif // @header-generator platform
    EDUServersScreenCapabilities();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~EDUServersScreenCapabilities();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    virtual ~EDUServersScreenCapabilities() /*override*/ = default;
#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
