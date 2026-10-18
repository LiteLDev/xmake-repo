#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/config/TypedScreenCapabilities.h"

#if defined(LL_PLAT_A) // @header-generator platform
struct HudScreenCapabilities : public ::TypedScreenCapabilities<HudScreenCapabilities> {
#else // @header-generator platform
struct HudScreenCapabilities : public ::TypedScreenCapabilities<::HudScreenCapabilities> {
#endif // @header-generator platform
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<1, 1, bool> mDisplayChatInputMsg;
#else // @header-generator platform
    ::ll::UntypedStorage<1, 1> mUnkd6a05d;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    HudScreenCapabilities& operator=(HudScreenCapabilities const&);
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    HudScreenCapabilities(HudScreenCapabilities const&);
#endif // @header-generator platform
    HudScreenCapabilities();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~HudScreenCapabilities();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    virtual ~HudScreenCapabilities() /*override*/ = default;
#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
