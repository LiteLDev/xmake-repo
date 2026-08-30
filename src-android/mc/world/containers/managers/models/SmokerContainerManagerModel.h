#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/ContainerID.h"
#include "mc/world/containers/managers/models/FurnaceContainerManagerModel.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class Player;
// clang-format on

class SmokerContainerManagerModel : public ::FurnaceContainerManagerModel {
public:
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
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
