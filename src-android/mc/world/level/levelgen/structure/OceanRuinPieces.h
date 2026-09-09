#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/util/Rotation.h"
#include "mc/world/level/BlockPos.h"
#include "mc/world/level/biome/OceanTempCategory.h"
#include "mc/world/level/levelgen/structure/StructurePieceType.h"
#include "mc/world/level/levelgen/structure/TemplateStructurePiece.h"
#include "mc/world/level/levelgen/structure/structurepools/StructurePoolBlockRule.h"

// auto generated forward declare list
// clang-format off
class Block;
class BlockSource;
class BoundingBox;
class Random;
class StructureManager;
class StructurePiece;
struct OceanRuinConfiguration;
// clang-format on

class OceanRuinPieces {
public:
    // OceanRuinPieces inner types declare
    // clang-format off
    class OceanRuinPiece;
    // clang-format on

    // OceanRuinPieces inner types define
    class OceanRuinPiece : public ::TemplateStructurePiece {
    public:
        // member variables
        // NOLINTBEGIN
        // clang-format off
        ::ll::UntypedStorage<8, 24> mStructureManager;
        ::ll::TypedStorage<8, 24, std::string> mTemplateName;
        ::ll::TypedStorage<4, 4, ::OceanTempCategory> mBiomeType;
        ::ll::TypedStorage<4, 4, float> mIntegrity;
        ::ll::TypedStorage<1, 1, bool> mIsLarge;
        ::ll::TypedStorage<1, 1, ::Rotation> mRotation;
        ::ll::TypedStorage<4, 12, ::BlockPos> mPosition;
        ::ll::TypedStorage<8, 8, std::unique_ptr<std::vector<std::unique_ptr<StructurePoolBlockRule>>>> mPlaceArchySuspiciousBlocks;
        // clang-format on
        // NOLINTEND

    public:
        // prevent constructor by default
        OceanRuinPiece();

    public:
        // virtual functions
        // NOLINTBEGIN
        // clang-format off
        virtual ~OceanRuinPiece();
    
        virtual ::StructurePieceType getType() const;
    
        virtual bool postProcess(::BlockSource&, ::Random&, ::BoundingBox const&);
    
        virtual void _handleDataMarker(std::string const&, ::BlockPos const&, ::BlockSource&, ::Random&, ::BoundingBox const&);
        // clang-format on
        // NOLINTEND

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI OceanRuinPiece(
            ::gsl::not_null<Bedrock::NonOwnerPointer<StructureManager>>,
            std::string,
            ::BlockPos const&,
            ::Rotation,
            float,
            bool,
            ::OceanTempCategory
        );
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCNAPI void* $ctor(
            ::gsl::not_null<Bedrock::NonOwnerPointer<StructureManager>>,
            std::string,
            ::BlockPos const&,
            ::Rotation,
            float,
            bool,
            ::OceanTempCategory
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
        MCNAPI ::StructurePieceType $getType() const;

        MCNAPI bool $postProcess(::BlockSource&, ::Random&, ::BoundingBox const&);

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
    // static functions
    // NOLINTBEGIN
    MCNAPI static void _addPiece(
        ::gsl::not_null<Bedrock::NonOwnerPointer<StructureManager>>,
        ::BlockPos const&,
        ::Rotation const&,
        std::vector<std::unique_ptr<StructurePiece>>&,
        ::Random&,
        ::OceanRuinConfiguration const&,
        bool const,
        float const
    );
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static std::string_view& BIG_RUIN_LOOT();

    MCNAPI static std::string_view& RUIN_LOOT();

    MCNAPI static std::string_view& STRUCTURE_BIG_RUIN1_BRICK();

    MCNAPI static std::string_view& STRUCTURE_BIG_RUIN8_BRICK();

    MCNAPI static std::string_view& STRUCTURE_RUIN_2_BRICK();

    MCNAPI static std::string_view& STRUCTURE_RUIN_3_BRICK();

    MCNAPI static ::std::add_lvalue_reference_t<std::string_view[]> bigRuinsBrick();

    MCNAPI static ::std::add_lvalue_reference_t<std::string_view[]> bigRuinsCracked();

    MCNAPI static ::std::add_lvalue_reference_t<std::string_view[]> bigRuinsMossy();

    MCNAPI static ::std::add_lvalue_reference_t<std::string_view[]> bigWarmRuins();

    MCNAPI static ::std::add_lvalue_reference_t<std::string_view[]> ruinsBrick();

    MCNAPI static ::std::add_lvalue_reference_t<std::string_view[]> ruinsCracked();

    MCNAPI static ::std::add_lvalue_reference_t<std::string_view[]> ruinsMossy();

    MCNAPI static ::std::add_lvalue_reference_t<std::string_view[]> warmRuins();
    // NOLINTEND
};
