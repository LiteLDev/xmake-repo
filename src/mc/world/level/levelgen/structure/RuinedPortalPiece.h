#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/structure/BoundingBox.h"
#include "mc/world/level/levelgen/structure/StructurePiece.h"
#include "mc/world/level/levelgen/structure/StructurePieceType.h"

// auto generated forward declare list
// clang-format off
class Biome;
class BiomeRegistry;
class Block;
class BlockPos;
class BlockSource;
class Random;
#if defined(LL_PLAT_A) // @header-generator platform
struct PortalEnvironmentModifiers;
#else // @header-generator platform
#endif // @header-generator platform
// clang-format on

class RuinedPortalPiece : public ::StructurePiece {
public:
    // RuinedPortalPiece inner types declare
    // clang-format off
    struct LocalRegistry;
    // clang-format on

    // RuinedPortalPiece inner types define
    struct LocalRegistry {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, ::Block const&> mCrackedStoneBrick;
        ::ll::TypedStorage<8, 8, ::Block const&> mMossyStoneBrick;
        ::ll::TypedStorage<8, 8, ::Block const&> mPolishedBlackstoneBricks;
        ::ll::TypedStorage<8, 8, ::Block const&> mCrackedPolishedBlackstoneBricks;
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
    ::ll::TypedStorage<4, 4, int>                                 mStructureOriginX;
    ::ll::TypedStorage<4, 4, int>                                 mStructureOriginZ;
    ::ll::TypedStorage<4, 24, ::BoundingBox>                      mStructureBounds;
    ::ll::TypedStorage<8, 8, ::BiomeRegistry&>                    mBiomeRegistry;
    ::ll::TypedStorage<8, 8, ::Biome const&>                      mBiome;
    ::ll::TypedStorage<8, 40, ::RuinedPortalPiece::LocalRegistry> mLocalRegistry;
    // NOLINTEND

public:
    // prevent constructor by default
    RuinedPortalPiece& operator=(RuinedPortalPiece const&);
    RuinedPortalPiece(RuinedPortalPiece const&);
    RuinedPortalPiece();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~RuinedPortalPiece();
#else // @header-generator platform
    virtual ::StructurePieceType getType() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::StructurePieceType getType() const;

    virtual bool postProcess(::BlockSource&, ::Random&, ::BoundingBox const&);
#else // @header-generator platform
    virtual bool postProcess(::BlockSource& region, ::Random& random, ::BoundingBox const& chunkBB) /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _addNetherrackDripColumn(::Random&, ::BlockSource&, ::BlockPos const);
#else // @header-generator platform
    MCAPI void _addNetherrackDripColumn(::Random& random, ::BlockSource& region, ::BlockPos const pos);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _maybeReplaceGoldBlock(::Random&, ::BlockSource&, ::BlockPos const);

    MCNAPI void _maybeReplaceIronBars(::BlockSource&, ::BlockPos const, ::PortalEnvironmentModifiers const&);

    MCNAPI void _maybeReplaceLava(::Random&, ::BlockSource&, ::BlockPos const, ::PortalEnvironmentModifiers const&);

    MCNAPI void
    _maybeReplaceNetherrack(::Random&, ::BlockSource&, ::BlockPos const, ::PortalEnvironmentModifiers const&);

    MCNAPI void _maybeReplaceObsidian(::Random&, ::BlockSource&, ::BlockPos const);
#else // @header-generator platform
    MCAPI void _maybeReplaceGoldBlock(::Random& random, ::BlockSource& region, ::BlockPos const pos);
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::Block const& _getRandomFacingStairs(::Random&, ::Block const&);

    MCNAPI static bool _isLava(::BlockSource&, ::BlockPos const);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI static ::Block const& _getRandomFacingStairs(::Random& random, ::Block const& stairBlock);
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::StructurePieceType $getType() const;
#else // @header-generator platform
    MCAPI ::StructurePieceType $getType() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $postProcess(::BlockSource&, ::Random&, ::BoundingBox const&);
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
