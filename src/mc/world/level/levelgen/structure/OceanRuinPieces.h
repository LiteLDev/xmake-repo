#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/util/Rotation.h"
#include "mc/world/level/BlockPos.h"
#include "mc/world/level/biome/OceanTempCategory.h"
#include "mc/world/level/levelgen/structure/StructurePieceType.h"
#include "mc/world/level/levelgen/structure/TemplateStructurePiece.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/world/level/levelgen/structure/structurepools/StructurePoolBlockRule.h"
#else // @header-generator platform
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
class Block;
#else // @header-generator platform
#endif // @header-generator platform
class BlockSource;
class BoundingBox;
class Random;
class StructureManager;
class StructurePiece;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
class StructurePoolBlockRule;
#endif // @header-generator platform
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
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
        ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::StructureManager>> mStructureManager;
        ::ll::TypedStorage<8, 32, ::std::string>                                     mTemplateName;
        ::ll::TypedStorage<4, 4, ::OceanTempCategory>                                mBiomeType;
        ::ll::TypedStorage<4, 4, float>                                              mIntegrity;
        ::ll::TypedStorage<1, 1, bool>                                               mIsLarge;
        ::ll::TypedStorage<1, 1, ::Rotation>                                         mRotation;
        ::ll::TypedStorage<4, 12, ::BlockPos>                                        mPosition;
        ::ll::TypedStorage<
            8,
            8,
            ::std::unique_ptr<::std::vector<
                ::std::unique_ptr<::StructurePoolBlockRule, ::std::default_delete<::StructurePoolBlockRule>>>>>
            mPlaceArchySuspiciousBlocks;
#endif // @header-generator platform
        // NOLINTEND

    public:
        // prevent constructor by default
        OceanRuinPiece();

    public:
        // virtual functions
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        // clang-format off
        virtual ~OceanRuinPiece();
    
        virtual ::StructurePieceType getType() const;
    
        virtual bool postProcess(::BlockSource&, ::Random&, ::BoundingBox const&);
    
        virtual void _handleDataMarker(std::string const&, ::BlockPos const&, ::BlockSource&, ::Random&, ::BoundingBox const&);
        // clang-format on
#else // @header-generator platform
        virtual ::StructurePieceType getType() const /*override*/;

        virtual bool postProcess(::BlockSource& region, ::Random& random, ::BoundingBox const& chunkBB) /*override*/;

        virtual void _handleDataMarker(
            ::std::string const& markerId,
            ::BlockPos const&    position,
            ::BlockSource&       region,
            ::Random&            random,
            ::BoundingBox const& chunkBB
        ) /*override*/;
#endif // @header-generator platform
        // NOLINTEND

    public:
        // member functions
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        MCNAPI OceanRuinPiece(
            ::gsl::not_null<Bedrock::NonOwnerPointer<StructureManager>>,
            std::string,
            ::BlockPos const&,
            ::Rotation,
            float,
            bool,
            ::OceanTempCategory
#else // @header-generator platform
        MCAPI OceanRuinPiece(
            ::Bedrock::NotNullNonOwnerPtr<::StructureManager> structureManager,
            ::std::string                                     templateName,
            ::BlockPos const&                                 origin,
            ::Rotation                                        rotation,
            float                                             integrity,
            bool                                              isLarge,
            ::OceanTempCategory                               type
#endif // @header-generator platform
        );
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        MCNAPI void* $ctor(
            ::gsl::not_null<Bedrock::NonOwnerPointer<StructureManager>>,
            std::string,
            ::BlockPos const&,
            ::Rotation,
            float,
            bool,
            ::OceanTempCategory
#else // @header-generator platform
        MCAPI void* $ctor(
            ::Bedrock::NotNullNonOwnerPtr<::StructureManager> structureManager,
            ::std::string                                     templateName,
            ::BlockPos const&                                 origin,
            ::Rotation                                        rotation,
            float                                             integrity,
            bool                                              isLarge,
            ::OceanTempCategory                               type
#endif // @header-generator platform
        );
#if defined(LL_PLAT_A) // @header-generator platform
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
#else // @header-generator platform
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
#else // @header-generator platform
        MCAPI bool $postProcess(::BlockSource& region, ::Random& random, ::BoundingBox const& chunkBB);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
        MCNAPI void
        $_handleDataMarker(std::string const&, ::BlockPos const&, ::BlockSource&, ::Random&, ::BoundingBox const&);
        // NOLINTEND
#else // @header-generator platform
        MCAPI void $_handleDataMarker(
            ::std::string const& markerId,
            ::BlockPos const&    position,
            ::BlockSource&       region,
            ::Random&            random,
            ::BoundingBox const& chunkBB
        );
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

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void _addPiece(
        ::gsl::not_null<Bedrock::NonOwnerPointer<StructureManager>>,
        ::BlockPos const&,
        ::Rotation const&,
        std::vector<std::unique_ptr<StructurePiece>>&,
        ::Random&,
        ::OceanRuinConfiguration const&,
        bool const,
        float const
#else // @header-generator platform
    MCAPI static void _addPiece(
        ::Bedrock::NotNullNonOwnerPtr<::StructureManager>   structureManager,
        ::BlockPos const&                                   position,
        ::Rotation const&                                   rotation,
        ::std::vector<::std::unique_ptr<::StructurePiece>>& pieces,
        ::Random&                                           random,
        ::OceanRuinConfiguration const&                     configuration,
        bool const                                          isLarge,
        float const                                         baseIntegrity
#endif // @header-generator platform
    );
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::string_view& BIG_RUIN_LOOT();
#else // @header-generator platform
    MCAPI static ::std::add_lvalue_reference_t<::std::string_view[4]> bigRuinsBrick();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::string_view& RUIN_LOOT();
#else // @header-generator platform
    MCAPI static ::std::add_lvalue_reference_t<::std::string_view[4]> bigRuinsCracked();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::string_view& STRUCTURE_BIG_RUIN1_BRICK();
#else // @header-generator platform
    MCAPI static ::std::add_lvalue_reference_t<::std::string_view[4]> bigRuinsMossy();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::string_view& STRUCTURE_BIG_RUIN8_BRICK();
#else // @header-generator platform
    MCAPI static ::std::add_lvalue_reference_t<::std::string_view[4]> bigWarmRuins();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::string_view& STRUCTURE_RUIN_2_BRICK();
#else // @header-generator platform
    MCAPI static ::std::add_lvalue_reference_t<::std::string_view[9]> ruinsBrick();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::string_view& STRUCTURE_RUIN_3_BRICK();
#else // @header-generator platform
    MCAPI static ::std::add_lvalue_reference_t<::std::string_view[9]> ruinsCracked();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::std::add_lvalue_reference_t<std::string_view[]> bigRuinsBrick();
#else // @header-generator platform
    MCAPI static ::std::add_lvalue_reference_t<::std::string_view[9]> ruinsMossy();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::std::add_lvalue_reference_t<std::string_view[]> bigRuinsCracked();

    MCNAPI static ::std::add_lvalue_reference_t<std::string_view[]> bigRuinsMossy();

    MCNAPI static ::std::add_lvalue_reference_t<std::string_view[]> bigWarmRuins();

    MCNAPI static ::std::add_lvalue_reference_t<std::string_view[]> ruinsBrick();

    MCNAPI static ::std::add_lvalue_reference_t<std::string_view[]> ruinsCracked();

    MCNAPI static ::std::add_lvalue_reference_t<std::string_view[]> ruinsMossy();

    MCNAPI static ::std::add_lvalue_reference_t<std::string_view[]> warmRuins();
#else // @header-generator platform
    MCAPI static ::std::add_lvalue_reference_t<::std::string_view[8]> warmRuins();
#endif // @header-generator platform
    // NOLINTEND
};
