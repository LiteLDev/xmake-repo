#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/ContainerID.h"
#include "mc/world/containers/managers/models/LevelContainerManagerModel.h"
#include "mc/world/level/block/actor/BlockActorType.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class ContainerScreenContext;
class ItemInstance;
class Player;
struct ActorUniqueID;
// clang-format on

class ChestContainerManagerModel : public ::LevelContainerManagerModel {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, ::BlockActorType> mBlockActorType;
    // NOLINTEND

public:
    // prevent constructor by default
    ChestContainerManagerModel();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ChestContainerManagerModel();

    virtual bool isValid(float);

    virtual ::ContainerScreenContext _postInit();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ChestContainerManagerModel(::ContainerID, ::Player&, ::ActorUniqueID const);

    MCNAPI ChestContainerManagerModel(::ContainerID, ::Player&, ::BlockPos const&, ::BlockActorType);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ContainerID, ::Player&, ::ActorUniqueID const);

    MCNAPI void* $ctor(::ContainerID, ::Player&, ::BlockPos const&, ::BlockActorType);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $isValid(float);

    MCNAPI ::ContainerScreenContext $_postInit();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
