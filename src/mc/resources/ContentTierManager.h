#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/core/utility/HardwareMemoryTier.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/resources/IContentTierManager.h"

// auto generated forward declare list
// clang-format off
class ContentTierInfo;
// clang-format on

class ContentTierManager : public ::IContentTierManager {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<8, 48> mIsHardwareRayTracingCompatible;
    ::ll::UntypedStorage<1, 16> mMemoryTier;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 64> mUnk44461e;
    ::ll::UntypedStorage<1, 1>  mUnkf4791a;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    ContentTierManager& operator=(ContentTierManager const&);
    ContentTierManager(ContentTierManager const&);
#endif // @header-generator platform
    ContentTierManager();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~ContentTierManager();
#else // @header-generator platform
    virtual ::ContentTierInfo getContentTierInfo() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::ContentTierInfo getContentTierInfo() const;

    virtual bool shouldDeviceAllowAnimation() const;
#else // @header-generator platform
    virtual bool shouldDeviceAllowAnimation() const /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI explicit ContentTierManager(std::function<bool()>);
#else // @header-generator platform
    MCNAPI explicit ContentTierManager(::std::function<bool()> isHardwareRayTracingCompatible);
#endif // @header-generator platform

    MCNAPI void _calculateMemoryTier();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(std::function<bool()>);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    MCNAPI void* $ctor(::std::function<bool()> isHardwareRayTracingCompatible);
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::ContentTierInfo $getContentTierInfo() const;

    MCNAPI bool $shouldDeviceAllowAnimation() const;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform


#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
