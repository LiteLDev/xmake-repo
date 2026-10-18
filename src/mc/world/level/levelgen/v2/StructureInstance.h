#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/BlockPos.h"
#include "mc/world/level/ChunkPos.h"
#include "mc/world/level/levelgen/structure/BoundingBox.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/world/level/levelgen/v2/terrain_adjustment/Type.h"
#else // @header-generator platform
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
class BlockSource;
#if defined(LL_PLAT_A) // @header-generator platform
class HashedString;
#else // @header-generator platform
#endif // @header-generator platform
class IRandom;
#if defined(LL_PLAT_A) // @header-generator platform
class Random;
#else // @header-generator platform
#endif // @header-generator platform
namespace br::worldgen { class PoolElementStructureSection; }
namespace br::worldgen { struct Structure; }
// clang-format on

namespace br::worldgen {

class StructureInstance {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 12, ::BlockPos>                                                              mPos;
    ::ll::TypedStorage<8, 8, ::ChunkPos>                                                               mChunkPos;
    ::ll::TypedStorage<4, 24, ::BoundingBox>                                                           mBox;
    ::ll::TypedStorage<8, 8, ::br::worldgen::Structure const*>                                         mStructure;
    ::ll::TypedStorage<8, 24, std::vector<std::unique_ptr<br::worldgen::PoolElementStructureSection>>> mSections;
    ::ll::TypedStorage<1, 1, std::atomic<bool>>                                                        mIsPersisted;
#else // @header-generator platform
    ::ll::TypedStorage<4, 12, ::BlockPos>                                                                    mPos;
    ::ll::TypedStorage<8, 8, ::ChunkPos>                                                                     mChunkPos;
    ::ll::TypedStorage<4, 24, ::BoundingBox>                                                                 mBox;
    ::ll::TypedStorage<8, 8, ::br::worldgen::Structure const*>                                               mStructure;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::unique_ptr<::br::worldgen::PoolElementStructureSection>>> mSections;
    ::ll::TypedStorage<1, 1, ::std::atomic<bool>> mIsPersisted;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    StructureInstance();
#else // @header-generator platform
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI const std::unique_ptr<br::worldgen::PoolElementStructureSection>* begin() const;
#else // @header-generator platform
    MCAPI void placeEntities(::BlockSource& region, ::BoundingBox const& chunkBB) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    MCAPI bool postProcess(::BlockSource& region, ::IRandom& random, ::BoundingBox const& chunkBB) const;
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace br::worldgen
