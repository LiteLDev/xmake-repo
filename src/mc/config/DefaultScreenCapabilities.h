#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/config/TypedScreenCapabilities.h"

#if defined(LL_PLAT_A) // @header-generator platform
struct DefaultScreenCapabilities : public ::TypedScreenCapabilities<DefaultScreenCapabilities> {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~DefaultScreenCapabilities();
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
#else // @header-generator platform
struct DefaultScreenCapabilities : public ::TypedScreenCapabilities<::DefaultScreenCapabilities> {};
#endif // @header-generator platform
