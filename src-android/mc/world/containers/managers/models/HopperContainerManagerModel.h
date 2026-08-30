#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/ContainerID.h"
#include "mc/world/containers/managers/models/LevelContainerManagerModel.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class ContainerScreenContext;
class Player;
struct ActorUniqueID;
// clang-format on

class HopperContainerManagerModel : public ::LevelContainerManagerModel {
public:
    // prevent constructor by default
    HopperContainerManagerModel();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~HopperContainerManagerModel();

    virtual ::ContainerScreenContext _postInit();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI HopperContainerManagerModel(::ContainerID, ::Player&, ::BlockPos const&);

    MCNAPI HopperContainerManagerModel(::ContainerID, ::Player&, ::ActorUniqueID const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ContainerID, ::Player&, ::BlockPos const&);

    MCNAPI void* $ctor(::ContainerID, ::Player&, ::ActorUniqueID const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::ContainerScreenContext $_postInit();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
