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
#if defined(LL_PLAT_A) // @header-generator platform
class StructurePiece;
#else // @header-generator platform
#endif // @header-generator platform
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
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
        ::ll::TypedStorage<8, 24, ::std::vector<::BlockPos>>                         mPillagerPositions;
        ::ll::TypedStorage<8, 24, ::std::vector<::BlockPos>>                         mAllayGroupPositions;
        ::ll::TypedStorage<8, 24, ::std::vector<::BlockPos>>                         mCaptainPositions;
        ::ll::TypedStorage<8, 24, ::std::vector<::BlockPos>>                         mIronGolemPositions;
        ::ll::TypedStorage<8, 32, ::std::string>                                     mTemplateName;
        ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::StructureManager>> mStructureManager;
        ::ll::TypedStorage<4, 12, ::BlockPos>                                        mPosition;
        ::ll::TypedStorage<4, 4, float>                                              mIntegrity;
        ::ll::TypedStorage<1, 1, ::Rotation>                                         mRotation;
        ::ll::TypedStorage<1, 1, bool>                                               mIsSatellite;
        ::ll::TypedStorage<1, 1, bool>                                               mHeightSet;
        ::ll::TypedStorage<4, 4, int>                                                mMaxNumberOfAllays;
#endif // @header-generator platform
        // NOLINTEND

    public:
        // prevent constructor by default
        PillagerOutpostPiece();

    public:
        // virtual functions
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        // clang-format off
        virtual ~PillagerOutpostPiece();
    
        virtual bool postProcess(::BlockSource&, ::Random&, ::BoundingBox const&);
    
        virtual void postProcessMobsAt(::BlockSource&, ::Random&, ::BoundingBox const&);
    
        virtual void addHardcodedSpawnAreas(::LevelChunk&) const;
    
        virtual void _handleDataMarker(std::string const&, ::BlockPos const&, ::BlockSource&, ::Random&, ::BoundingBox const&);
        // clang-format on
#else // @header-generator platform
        virtual bool postProcess(::BlockSource& region, ::Random& random, ::BoundingBox const& chunkBB) /*override*/;

        virtual void
        postProcessMobsAt(::BlockSource& region, ::Random& random, ::BoundingBox const& chunkBB) /*override*/;

        virtual void addHardcodedSpawnAreas(::LevelChunk& chunk) const /*override*/;

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
        MCNAPI void _addMobsFromPositions(
            ::BoundingBox const&,
            ::ActorDefinitionIdentifier const&,
            ::BlockSource&,
            std::vector<BlockPos> const&
#else // @header-generator platform
        MCAPI PillagerOutpostPiece(
            ::Bedrock::NotNullNonOwnerPtr<::StructureManager> structureManager,
            ::std::string                                     templateName,
            ::BlockPos const&                                 origin,
            ::Rotation                                        rotation,
            float                                             integrity,
            bool                                              isSatellite,
            ::Dimension&                                      dimension
#endif // @header-generator platform
        );
        // NOLINTEND

    public:
#if defined(LL_PLAT_A) // @header-generator platform
        // destructor thunk
#else // @header-generator platform
        // static functions
#endif // @header-generator platform
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        MCNAPI void $dtor();
#else // @header-generator platform
        MCAPI static void _addMobsFromPositions(
            ::BoundingBox const&               chunkBB,
            ::ActorDefinitionIdentifier const& definition,
            ::BlockSource&                     region,
            ::std::vector<::BlockPos> const&   entityPositions
        );
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCAPI void* $ctor(
            ::Bedrock::NotNullNonOwnerPtr<::StructureManager> structureManager,
            ::std::string                                     templateName,
            ::BlockPos const&                                 origin,
            ::Rotation                                        rotation,
            float                                             integrity,
            bool                                              isSatellite,
            ::Dimension&                                      dimension
        );
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
        MCNAPI void $postProcessMobsAt(::BlockSource&, ::Random&, ::BoundingBox const&);
#else // @header-generator platform
        MCAPI void $postProcessMobsAt(::BlockSource& region, ::Random& random, ::BoundingBox const& chunkBB);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
        MCNAPI void $addHardcodedSpawnAreas(::LevelChunk&) const;
#else // @header-generator platform
        MCAPI void $addHardcodedSpawnAreas(::LevelChunk& chunk) const;
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
    // static variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::array<std::string_view, 7>& MSC_FEATURES();

    MCNAPI static std::string_view& PILLAGER_LOOT();

    MCNAPI static std::string_view& STRUCTURE_WATCHTOWER();

    MCNAPI static std::string_view& STRUCTURE_WATCHTOWER_OVERGROWN();
#else // @header-generator platform
    MCAPI static ::std::array<::std::string_view, 7>& MSC_FEATURES();
#endif // @header-generator platform
    // NOLINTEND
};
