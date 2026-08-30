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
class PieceWeight;
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
    // virtual functions
    // NOLINTBEGIN
    virtual ~NetherFortressPiece();

    virtual bool postProcess(::BlockSource&, ::Random&, ::BoundingBox const&);

    virtual void addHardcodedSpawnAreas(::LevelChunk&) const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit NetherFortressPiece(int);

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
    );

    MCNAPI ::StructurePiece*
    generateChildForward(::NBStartPiece&, std::vector<std::unique_ptr<StructurePiece>>&, ::Random&, int, int, bool);

    MCNAPI ::StructurePiece*
    generateChildRight(::NBStartPiece&, std::vector<std::unique_ptr<StructurePiece>>&, ::Random&, int, int, bool);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(int);
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

    MCNAPI void $addHardcodedSpawnAreas(::LevelChunk&) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
