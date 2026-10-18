#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/application/device/HardwareMemoryTierUtil.h"
#include "mc/deps/core/utility/HardwareMemoryTier.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/platform/brstd/move_only_function.h"
#else // @header-generator platform
#endif // @header-generator platform

class HardwareMemoryTierUtilImpl : public ::HardwareMemoryTierUtil {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<8, 64> mGetTotalMemoryFn;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 64> mUnkc3e618;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    HardwareMemoryTierUtilImpl& operator=(HardwareMemoryTierUtilImpl const&);
    HardwareMemoryTierUtilImpl(HardwareMemoryTierUtilImpl const&);
#endif // @header-generator platform
    HardwareMemoryTierUtilImpl();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~HardwareMemoryTierUtilImpl();

    virtual ::HardwareMemoryTier getHardwareMemoryTier() const;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    virtual ::HardwareMemoryTier getHardwareMemoryTier() const /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::HardwareMemoryTier $getHardwareMemoryTier() const;
#if defined(LL_PLAT_A) // @header-generator platform
    // NOLINTEND
#else // @header-generator platform
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
#else // @header-generator platform

#endif // @header-generator platform
    // NOLINTEND
};
