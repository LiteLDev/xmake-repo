#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/HardwareMemoryTier.h"
#include "mc/resources/IContentTierManager.h"

// auto generated forward declare list
// clang-format off
class ContentTierInfo;
// clang-format on

class ContentTierManager : public ::IContentTierManager {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 48> mIsHardwareRayTracingCompatible;
    ::ll::UntypedStorage<1, 16> mMemoryTier;
    // NOLINTEND

public:
    // prevent constructor by default
    ContentTierManager();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ContentTierManager();

    virtual ::ContentTierInfo getContentTierInfo() const;

    virtual bool shouldDeviceAllowAnimation() const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit ContentTierManager(std::function<bool()>);

    MCNAPI void _calculateMemoryTier();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::function<bool()>);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::ContentTierInfo $getContentTierInfo() const;

    MCNAPI bool $shouldDeviceAllowAnimation() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
