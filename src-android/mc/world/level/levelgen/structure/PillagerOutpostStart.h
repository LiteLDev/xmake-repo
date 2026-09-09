#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/structure/StructureStart.h"

// auto generated forward declare list
// clang-format off
class Block;
class BlockPos;
class BlockSource;
class BoundingBox;
class Dimension;
class Random;
// clang-format on

class PillagerOutpostStart : public ::StructureStart {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~PillagerOutpostStart();

    virtual bool postProcess(::BlockSource&, ::Random&, ::BoundingBox const&);

    virtual int getMaxYSpawnOffset() const;

    virtual std::string_view getStructureName() const;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $postProcess(::BlockSource&, ::Random&, ::BoundingBox const&);

    MCNAPI int $getMaxYSpawnOffset() const;

    MCNAPI std::string_view $getStructureName() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
