#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/structure/BoundingBox.h"

// auto generated forward declare list
// clang-format off
class BlockSource;
class Random;
class StructurePiece;
// clang-format on

class StructureStart {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 24, ::BoundingBox>                                boundingBox;
    ::ll::TypedStorage<4, 4, int>                                           chunkX;
    ::ll::TypedStorage<4, 4, int>                                           chunkZ;
    ::ll::TypedStorage<8, 24, std::vector<std::unique_ptr<StructurePiece>>> pieces;
    ::ll::TypedStorage<4, 4, int>                                           maxYSpawnOffset;
#else // @header-generator platform
    ::ll::TypedStorage<4, 24, ::BoundingBox>                                      boundingBox;
    ::ll::TypedStorage<4, 4, int>                                                 chunkX;
    ::ll::TypedStorage<4, 4, int>                                                 chunkZ;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::unique_ptr<::StructurePiece>>> pieces;
    ::ll::TypedStorage<4, 4, int>                                                 maxYSpawnOffset;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    StructureStart();
#else // @header-generator platform
#endif // @header-generator platform

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~StructureStart();

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool postProcess(::BlockSource&, ::Random&, ::BoundingBox const&);
#else // @header-generator platform
    virtual bool postProcess(::BlockSource& region, ::Random& random, ::BoundingBox const& chunkBB);
#endif // @header-generator platform

    virtual bool isValid() const;

    virtual int getMaxYSpawnOffset() const;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::string_view getStructureName() const = 0;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void calculateBoundingBox();

    MCNAPI void moveBoundingBoxes(int);

    MCNAPI void moveInsideHeights(::Random&, short, short);

    MCNAPI void moveToBelowSeaLevel(short, short, ::Random&, int);

    MCNAPI void postProcessMobsAt(::BlockSource&, ::Random&, ::BoundingBox const&);
#else // @header-generator platform
    virtual ::std::string_view getStructureName() const = 0;
#endif // @header-generator platform
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI void $dtor();
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $postProcess(::BlockSource&, ::Random&, ::BoundingBox const&);
#else // @header-generator platform
    MCAPI bool $postProcess(::BlockSource& region, ::Random& random, ::BoundingBox const& chunkBB);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $isValid() const;
#else // @header-generator platform
    MCFOLD bool $isValid() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI int $getMaxYSpawnOffset() const;
#else // @header-generator platform
    MCFOLD int $getMaxYSpawnOffset() const;


#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
