#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/factory/EntityComponentFactoryCereal.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

class VolumeComponentFactory : public ::EntityComponentFactoryCereal<VolumeComponentFactory> {
public:
    // prevent constructor by default
    VolumeComponentFactory();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~VolumeComponentFactory();
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
class VolumeComponentFactory : public ::EntityComponentFactoryCereal<::VolumeComponentFactory> {};
#endif // @header-generator platform
