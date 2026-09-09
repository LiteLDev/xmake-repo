#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/application/device/HardwareMemoryTierUtil.h"
#include "mc/deps/core/utility/HardwareMemoryTier.h"
#include "mc/platform/brstd/move_only_function.h"

class HardwareMemoryTierUtilImpl : public ::HardwareMemoryTierUtil {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 64> mGetTotalMemoryFn;
    // NOLINTEND

public:
    // prevent constructor by default
    HardwareMemoryTierUtilImpl();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~HardwareMemoryTierUtilImpl();

    virtual ::HardwareMemoryTier getHardwareMemoryTier() const;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::HardwareMemoryTier $getHardwareMemoryTier() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
