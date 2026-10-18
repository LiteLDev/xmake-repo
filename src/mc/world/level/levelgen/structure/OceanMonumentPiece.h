#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/structure/StructurePiece.h"

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
class Block;
#else // @header-generator platform
#endif // @header-generator platform
class BlockSource;
class BoundingBox;
class LevelChunk;
class Random;
class RoomDefinition;
// clang-format on

class OceanMonumentPiece : public ::StructurePiece {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<1, 1, bool>                             mDoFill;
    ::ll::TypedStorage<8, 16, std::shared_ptr<RoomDefinition>> mRoomDefinition;
#else // @header-generator platform
    ::ll::TypedStorage<1, 1, bool>                                 mDoFill;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::RoomDefinition>> mRoomDefinition;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    OceanMonumentPiece();
#endif // @header-generator platform

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~OceanMonumentPiece();
#else // @header-generator platform
    virtual bool postProcess(::BlockSource& region, ::Random& random, ::BoundingBox const& chunkBB) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool postProcess(::BlockSource&, ::Random&, ::BoundingBox const&) = 0;
#else // @header-generator platform
    virtual void postProcessMobsAt(::BlockSource& region, ::Random& random, ::BoundingBox const& chunkBB) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void postProcessMobsAt(::BlockSource&, ::Random&, ::BoundingBox const&);
#else // @header-generator platform
    virtual int getWorldZ(int x, int z) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual int getWorldX(int, int);
#else // @header-generator platform
    virtual int getWorldX(int x, int z) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual int getWorldZ(int, int);

    virtual void addHardcodedSpawnAreas(::LevelChunk&) const;
#else // @header-generator platform
    virtual void addHardcodedSpawnAreas(::LevelChunk& chunk) const /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI OceanMonumentPiece(int, int&, std::shared_ptr<RoomDefinition>, int, int, int);
#else // @header-generator platform
    MCAPI OceanMonumentPiece(
        int                                 genDepth,
        int&                                orientation,
        ::std::shared_ptr<::RoomDefinition> roomDefinition,
        int                                 roomWidth,
        int                                 roomHeight,
        int                                 roomDepth
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void generateDefaultFloor(::BlockSource&, ::BoundingBox const&, int, int, bool);
#else // @header-generator platform
    MCAPI void
    generateDefaultFloor(::BlockSource& region, ::BoundingBox const& chunkBB, int xOff, int zOff, bool downOpening);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void spawnElder(::BlockSource&, ::BoundingBox const&, int, int, int);
#else // @header-generator platform
    MCAPI void spawnElder(::BlockSource& region, ::BoundingBox const& chunkBB, int x, int y, int z);
#endif // @header-generator platform
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static int& mGridroomLeftWingConnectIndex();
#else // @header-generator platform
    MCAPI static int const& mLeftWingIndex();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static int& mGridroomRightWingConnectIndex();
#else // @header-generator platform
    MCAPI static int const& mPenthouseIndex();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static int& mGridroomSourceIndex();

    MCNAPI static int& mGridroomTopConnectIndex();

    MCNAPI static int const& mLeftWingIndex();

    MCNAPI static int const& mPenthouseIndex();

    MCNAPI static int const& mRightWingIndex();
#else // @header-generator platform
    MCAPI static int const& mRightWingIndex();
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(int, int&, std::shared_ptr<RoomDefinition>, int, int, int);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI void* $ctor(
        int                                 genDepth,
        int&                                orientation,
        ::std::shared_ptr<::RoomDefinition> roomDefinition,
        int                                 roomWidth,
        int                                 roomHeight,
        int                                 roomDepth
    );
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $postProcessMobsAt(::BlockSource&, ::Random&, ::BoundingBox const&);
#else // @header-generator platform
    MCFOLD void $postProcessMobsAt(::BlockSource& region, ::Random& random, ::BoundingBox const& chunkBB);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI int $getWorldX(int, int);
#else // @header-generator platform
    MCAPI int $getWorldZ(int x, int z);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI int $getWorldZ(int, int);
#else // @header-generator platform
    MCAPI int $getWorldX(int x, int z);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $addHardcodedSpawnAreas(::LevelChunk&) const;
    // NOLINTEND
#else // @header-generator platform
    MCAPI void $addHardcodedSpawnAreas(::LevelChunk& chunk) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
#else // @header-generator platform

#endif // @header-generator platform
    // NOLINTEND
};
