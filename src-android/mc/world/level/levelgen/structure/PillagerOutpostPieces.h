#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/util/Rotation.h"
#include "mc/world/level/BlockPos.h"
#include "mc/world/level/levelgen/structure/TemplateStructurePiece.h"

// auto generated forward declare list
// clang-format off
class BlockSource;
class BoundingBox;
class Dimension;
class LevelChunk;
class Random;
class StructureManager;
class StructurePiece;
struct ActorDefinitionIdentifier;
// clang-format on

class PillagerOutpostPieces {
public:
    // PillagerOutpostPieces inner types declare
    // clang-format off
    class PillagerOutpostPiece;
    // clang-format on

    // PillagerOutpostPieces inner types define
    class PillagerOutpostPiece : public ::TemplateStructurePiece {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 24, std::vector<BlockPos>> mPillagerPositions;
        ::ll::TypedStorage<8, 24, std::vector<BlockPos>> mAllayGroupPositions;
        ::ll::TypedStorage<8, 24, std::vector<BlockPos>> mCaptainPositions;
        ::ll::TypedStorage<8, 24, std::vector<BlockPos>> mIronGolemPositions;
        ::ll::TypedStorage<8, 24, std::string>           mTemplateName;
        ::ll::UntypedStorage<8, 24>                      mStructureManager;
        ::ll::TypedStorage<4, 12, ::BlockPos>            mPosition;
        ::ll::TypedStorage<4, 4, float>                  mIntegrity;
        ::ll::TypedStorage<1, 1, ::Rotation>             mRotation;
        ::ll::TypedStorage<1, 1, bool>                   mIsSatellite;
        ::ll::TypedStorage<1, 1, bool>                   mHeightSet;
        ::ll::TypedStorage<4, 4, int>                    mMaxNumberOfAllays;
        // NOLINTEND

    public:
        // prevent constructor by default
        PillagerOutpostPiece();

    public:
        // virtual functions
        // NOLINTBEGIN
        // clang-format off
        virtual ~PillagerOutpostPiece();
    
        virtual bool postProcess(::BlockSource&, ::Random&, ::BoundingBox const&);
    
        virtual void postProcessMobsAt(::BlockSource&, ::Random&, ::BoundingBox const&);
    
        virtual void addHardcodedSpawnAreas(::LevelChunk&) const;
    
        virtual void _handleDataMarker(std::string const&, ::BlockPos const&, ::BlockSource&, ::Random&, ::BoundingBox const&);
        // clang-format on
        // NOLINTEND

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI void _addMobsFromPositions(
            ::BoundingBox const&,
            ::ActorDefinitionIdentifier const&,
            ::BlockSource&,
            std::vector<BlockPos> const&
        );
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

        MCNAPI void $postProcessMobsAt(::BlockSource&, ::Random&, ::BoundingBox const&);

        MCNAPI void $addHardcodedSpawnAreas(::LevelChunk&) const;

        MCNAPI void
        $_handleDataMarker(std::string const&, ::BlockPos const&, ::BlockSource&, ::Random&, ::BoundingBox const&);
        // NOLINTEND

    public:
        // vftables
        // NOLINTBEGIN
        MCNAPI static void** $vftable();
        // NOLINTEND
    };

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static std::array<std::string_view, 7>& MSC_FEATURES();

    MCNAPI static std::string_view& PILLAGER_LOOT();

    MCNAPI static std::string_view& STRUCTURE_WATCHTOWER();

    MCNAPI static std::string_view& STRUCTURE_WATCHTOWER_OVERGROWN();
    // NOLINTEND
};
