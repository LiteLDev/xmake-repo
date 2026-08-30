#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec3.h"
#include "mc/world/level/BlockPos.h"
#include "mc/world/level/levelgen/structure/LegacyStructureSettings.h"
#include "mc/world/level/levelgen/structure/ScatteredFeaturePiece.h"
#include "mc/world/level/levelgen/structure/StructurePieceType.h"

// auto generated forward declare list
// clang-format off
class BlockSource;
class BoundingBox;
class Random;
// clang-format on

class Igloo : public ::ScatteredFeaturePiece {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 176, ::LegacyStructureSettings> mLabSettings;
    ::ll::TypedStorage<4, 12, ::BlockPos>                 mLabPos;
    ::ll::TypedStorage<4, 12, ::Vec3>                     mVillagerPos;
    ::ll::TypedStorage<4, 12, ::Vec3>                     mZombieVillagerPos;
    // NOLINTEND

public:
    // prevent constructor by default
    Igloo();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~Igloo();

    virtual ::StructurePieceType getType() const;

    virtual bool postProcess(::BlockSource&, ::Random&, ::BoundingBox const&);

    virtual void postProcessMobsAt(::BlockSource&, ::Random&, ::BoundingBox const&);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static std::string const& STRUCTURE_LOCATION_IGLOO_NO_TRAPDOOR();

    MCNAPI static std::string const& STRUCTURE_LOCATION_IGLOO_TRAPDOOR();

    MCNAPI static std::string const& STRUCTURE_LOCATION_LABORATORY();

    MCNAPI static std::string const& STRUCTURE_LOCATION_LADDER();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::StructurePieceType $getType() const;

    MCNAPI bool $postProcess(::BlockSource&, ::Random&, ::BoundingBox const&);

    MCNAPI void $postProcessMobsAt(::BlockSource&, ::Random&, ::BoundingBox const&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
