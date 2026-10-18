#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class BlockSource;
namespace br::spawn { struct EntityType; }
// clang-format on

namespace br::spawn {

class PlacementType {
public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~PlacementType();
#else // @header-generator platform
    virtual ~PlacementType() = default;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool isSpawnPositionOk(::BlockSource&, ::BlockPos, ::br::spawn::EntityType const&) const = 0;
#else // @header-generator platform
    virtual bool
    isSpawnPositionOk(::BlockSource& region, ::BlockPos pos, ::br::spawn::EntityType const& type) const = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::BlockPos adjustSpawnPos(::BlockSource&, ::BlockPos) const;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    virtual ::BlockPos adjustSpawnPos(::BlockSource& region, ::BlockPos candidate) const;
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::BlockPos $adjustSpawnPos(::BlockSource&, ::BlockPos) const;
#else // @header-generator platform
    MCAPI ::BlockPos $adjustSpawnPos(::BlockSource& region, ::BlockPos candidate) const;


#endif // @header-generator platform
    // NOLINTEND
};

} // namespace br::spawn
