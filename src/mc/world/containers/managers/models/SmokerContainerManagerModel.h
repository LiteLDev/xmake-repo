#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/world/ContainerID.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/world/containers/managers/models/FurnaceContainerManagerModel.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated forward declare list
// clang-format off
class BlockPos;
class Player;
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform

class SmokerContainerManagerModel : public ::FurnaceContainerManagerModel {
public:
#if defined(LL_PLAT_A) // @header-generator platform
    // prevent constructor by default
    SmokerContainerManagerModel();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~SmokerContainerManagerModel();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI SmokerContainerManagerModel(::ContainerID, ::Player&, ::BlockPos const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ContainerID, ::Player&, ::BlockPos const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
#else // @header-generator platform
#endif // @header-generator platform
    // vftables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void** $vftable();
#else // @header-generator platform
    MCAPI static void** $vftable();
#endif // @header-generator platform
    // NOLINTEND
};
