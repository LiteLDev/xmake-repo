#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/config/TypedScreenCapabilities.h"

#if defined(LL_PLAT_A) // @header-generator platform
struct EDUWorldsScreenCapabilities : public ::TypedScreenCapabilities<EDUWorldsScreenCapabilities> {
#else // @header-generator platform
struct EDUWorldsScreenCapabilities : public ::TypedScreenCapabilities<::EDUWorldsScreenCapabilities> {
#endif // @header-generator platform
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<1, 1, bool> mLocalWorldManagementEnabled;
    ::ll::TypedStorage<1, 1, bool> mManageShareEnabled;
#else // @header-generator platform
    ::ll::UntypedStorage<1, 1> mUnk61a6e6;
    ::ll::UntypedStorage<1, 1> mUnk9d40e1;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    EDUWorldsScreenCapabilities& operator=(EDUWorldsScreenCapabilities const&);
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    EDUWorldsScreenCapabilities(EDUWorldsScreenCapabilities const&);
#endif // @header-generator platform
    EDUWorldsScreenCapabilities();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~EDUWorldsScreenCapabilities();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    virtual ~EDUWorldsScreenCapabilities() /*override*/ = default;
#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
