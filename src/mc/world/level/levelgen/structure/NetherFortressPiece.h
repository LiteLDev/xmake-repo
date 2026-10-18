#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/structure/StructurePiece.h"

// auto generated forward declare list
// clang-format off
class Block;
class BlockSource;
class BoundingBox;
class LevelChunk;
class NBStartPiece;
#if defined(LL_PLAT_A) // @header-generator platform
class PieceWeight;
#else // @header-generator platform
#endif // @header-generator platform
class Random;
// clang-format on

class NetherFortressPiece : public ::StructurePiece {
public:
    // NetherFortressPiece inner types declare
    // clang-format off
    struct LocalRegistry;
    // clang-format on

    // NetherFortressPiece inner types define
    struct LocalRegistry {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, ::Block const&> mGlowstone;
        ::ll::TypedStorage<8, 8, ::Block const&> mNetherBrick;
        ::ll::TypedStorage<8, 8, ::Block const&> mNetherBrickFence;
        ::ll::TypedStorage<8, 8, ::Block const&> mNetherWart;
        ::ll::TypedStorage<8, 8, ::Block const&> mSoulSand;
        ::ll::TypedStorage<8, 8, ::Block const&> mAirBlock;
        // NOLINTEND

    public:
        // prevent constructor by default
        LocalRegistry& operator=(LocalRegistry const&);
        LocalRegistry(LocalRegistry const&);
        LocalRegistry();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 48, ::NetherFortressPiece::LocalRegistry const> mLocalRegistry;
    // NOLINTEND

public:
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    // prevent constructor by default
    NetherFortressPiece();

public:
#endif // @header-generator platform
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~NetherFortressPiece();
#else // @header-generator platform
    virtual void addHardcodedSpawnAreas(::LevelChunk& chunk) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool postProcess(::BlockSource&, ::Random&, ::BoundingBox const&);

    virtual void addHardcodedSpawnAreas(::LevelChunk&) const;
#else // @header-generator platform
    virtual bool postProcess(::BlockSource& region, ::Random& random, ::BoundingBox const& chunkBB) /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI explicit NetherFortressPiece(int);
#else // @header-generator platform
    MCAPI explicit NetherFortressPiece(int genDepth);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::StructurePiece* generateAndAddPiece(
        ::NBStartPiece&,
        std::vector<std::unique_ptr<StructurePiece>>&,
        ::Random&,
        int,
        int,
        int,
        int,
        int,
        bool
#else // @header-generator platform
    MCAPI ::StructurePiece* generateChildForward(
        ::NBStartPiece&                                     startPiece,
        ::std::vector<::std::unique_ptr<::StructurePiece>>& pieces,
        ::Random&                                           random,
        int                                                 xOff,
        int                                                 yOff,
        bool                                                isCastle
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::StructurePiece*
    generateChildForward(::NBStartPiece&, std::vector<std::unique_ptr<StructurePiece>>&, ::Random&, int, int, bool);
#else // @header-generator platform
    MCAPI ::StructurePiece* generateChildRight(
        ::NBStartPiece&                                     startPiece,
        ::std::vector<::std::unique_ptr<::StructurePiece>>& pieces,
        ::Random&                                           random,
        int                                                 yOff,
        int                                                 zOff,
        bool                                                isCastle
    );
    // NOLINTEND
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::StructurePiece*
    generateChildRight(::NBStartPiece&, std::vector<std::unique_ptr<StructurePiece>>&, ::Random&, int, int, bool);
#else // @header-generator platform
public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::StructurePiece* generateAndAddPiece(
        ::NBStartPiece&                                     startPiece,
        ::std::vector<::std::unique_ptr<::StructurePiece>>& pieces,
        ::Random&                                           random,
        int                                                 footX,
        int                                                 footY,
        int                                                 footZ,
        int                                                 direction,
        int                                                 depth,
        bool                                                isCastle
    );
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(int);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI void* $ctor(int genDepth);
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $postProcess(::BlockSource&, ::Random&, ::BoundingBox const&);
#else // @header-generator platform
    MCAPI void $addHardcodedSpawnAreas(::LevelChunk& chunk) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $addHardcodedSpawnAreas(::LevelChunk&) const;
    // NOLINTEND
#else // @header-generator platform
    MCAPI bool $postProcess(::BlockSource& region, ::Random& random, ::BoundingBox const& chunkBB);
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
