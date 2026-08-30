#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/chunk/PlacementType.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class BlockSource;
namespace br::spawn { struct EntityType; }
// clang-format on

namespace br::spawn {

class OnGround : public ::br::spawn::PlacementType {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~OnGround();

    virtual bool isSpawnPositionOk(::BlockSource&, ::BlockPos, ::br::spawn::EntityType const&) const;

    virtual ::BlockPos adjustSpawnPos(::BlockSource&, ::BlockPos) const;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $isSpawnPositionOk(::BlockSource&, ::BlockPos, ::br::spawn::EntityType const&) const;

    MCNAPI ::BlockPos $adjustSpawnPos(::BlockSource&, ::BlockPos) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace br::spawn
