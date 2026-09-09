#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/BlockPos.h"
#include "mc/world/level/ChunkPos.h"
#include "mc/world/level/levelgen/structure/BoundingBox.h"
#include "mc/world/level/levelgen/v2/terrain_adjustment/Type.h"

// auto generated forward declare list
// clang-format off
class BlockSource;
class HashedString;
class IRandom;
class Random;
namespace br::worldgen { class PoolElementStructureSection; }
namespace br::worldgen { struct Structure; }
// clang-format on

namespace br::worldgen {

class StructureInstance {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 12, ::BlockPos>                                                              mPos;
    ::ll::TypedStorage<8, 8, ::ChunkPos>                                                               mChunkPos;
    ::ll::TypedStorage<4, 24, ::BoundingBox>                                                           mBox;
    ::ll::TypedStorage<8, 8, ::br::worldgen::Structure const*>                                         mStructure;
    ::ll::TypedStorage<8, 24, std::vector<std::unique_ptr<br::worldgen::PoolElementStructureSection>>> mSections;
    ::ll::TypedStorage<1, 1, std::atomic<bool>>                                                        mIsPersisted;
    // NOLINTEND

public:
    // prevent constructor by default
    StructureInstance();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI const std::unique_ptr<br::worldgen::PoolElementStructureSection>* begin() const;

    MCNAPI ::BoundingBox const& boundingBox() const;

    MCNAPI const std::unique_ptr<br::worldgen::PoolElementStructureSection>* end() const;

    MCNAPI bool intersects(::BoundingBox) const;

    MCNAPI bool isReference(::ChunkPos) const;

    MCNAPI bool isValid() const;

    MCNAPI void placeEntities(::BlockSource&, ::BoundingBox const&) const;

    MCNAPI bool postProcess(::BlockSource&, ::IRandom&, ::BoundingBox const&) const;

    MCNAPI ::br::worldgen::Structure const& structure() const;

    MCNAPI bool tryMarkForPersistence() const;

    MCNAPI ::HashedString type() const;
    // NOLINTEND
};

} // namespace br::worldgen
