#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/structure/MineshaftData.h"
#include "mc/world/level/levelgen/structure/StructurePiece.h"

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
class Block;
#else // @header-generator platform
#endif // @header-generator platform
class BlockSource;
class BoundingBox;
class Random;
// clang-format on

class MineshaftPiece : public ::StructurePiece {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::MineshaftData> mMetadata;
    // NOLINTEND

public:
#if defined(LL_PLAT_A) // @header-generator platform
    // prevent constructor by default
    MineshaftPiece();

public:
#else // @header-generator platform
#endif // @header-generator platform
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool isInInvalidLocation(::BlockSource&, ::BoundingBox const&);
#else // @header-generator platform
    virtual bool isInInvalidLocation(::BlockSource& region, ::BoundingBox const& chunkBB) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool canBeReplaced(::BlockSource&, int const, int const, int const, ::BoundingBox const&);
#else // @header-generator platform
    virtual bool canBeReplaced(
        ::BlockSource&       region,
        int const            x,
        int const            y,
        int const            z,
        ::BoundingBox const& chunkBB
    ) /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::StructurePiece* generateAndAddPiece(
        ::StructurePiece&,
        std::vector<std::unique_ptr<StructurePiece>>&,
        ::Random&,
        int,
        int,
        int,
        int,
        int
#else // @header-generator platform
    MCAPI ::StructurePiece* generateAndAddPiece(
        ::StructurePiece&                                   startPiece,
        ::std::vector<::std::unique_ptr<::StructurePiece>>& pieces,
        ::Random&                                           random,
        int                                                 footX,
        int                                                 footY,
        int                                                 footZ,
        int                                                 direction,
        int                                                 depth
#endif // @header-generator platform
    );
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $isInInvalidLocation(::BlockSource&, ::BoundingBox const&);
#else // @header-generator platform
    MCAPI bool $isInInvalidLocation(::BlockSource& region, ::BoundingBox const& chunkBB);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $canBeReplaced(::BlockSource&, int const, int const, int const, ::BoundingBox const&);
#else // @header-generator platform
    MCAPI bool
    $canBeReplaced(::BlockSource& region, int const x, int const y, int const z, ::BoundingBox const& chunkBB);


#endif // @header-generator platform
    // NOLINTEND
};
