#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/util/Rotation.h"
#include "mc/world/level/BlockPos.h"
#include "mc/world/level/levelgen/structure/StructurePieceType.h"
#include "mc/world/level/levelgen/structure/TemplateStructurePiece.h"

// auto generated forward declare list
// clang-format off
class BlockSource;
class BoundingBox;
class Random;
class StructureManager;
class StructurePiece;
// clang-format on

class EndCityPieces {
public:
    // EndCityPieces inner types declare
    // clang-format off
    class EndCityPiece;
    class SectionGenerator;
#if defined(LL_PLAT_A) // @header-generator platform
    class TowerGenerator;
#else // @header-generator platform
#endif // @header-generator platform
    class FatTowerGenerator;
#if defined(LL_PLAT_A) // @header-generator platform
    class TowerBridgeGenerator;
#else // @header-generator platform
#endif // @header-generator platform
    class HouseTowerGenerator;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    class TowerBridgeGenerator;
    class TowerGenerator;
#endif // @header-generator platform
    // clang-format on

    // EndCityPieces inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    enum SectionType : ushort {
#else // @header-generator platform
    enum class SectionType : ushort {
#endif // @header-generator platform
        SectionTower    = 0,
        SectionFatTower = 1,
        SectionBridge   = 2,
        SectionHouse    = 3,
    };

    class EndCityPiece : public ::TemplateStructurePiece {
    public:
        // member variables
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::UntypedStorage<8, 24>                      mStructureManager;
        ::ll::TypedStorage<8, 24, std::string>           mTemplateName;
        ::ll::TypedStorage<1, 1, ::Rotation>             mRotation;
        ::ll::TypedStorage<1, 1, bool>                   mOverwrite;
        ::ll::TypedStorage<8, 24, std::vector<BlockPos>> mMobPositions;
#else // @header-generator platform
        ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::StructureManager>> mStructureManager;
        ::ll::TypedStorage<8, 32, ::std::string>                                     mTemplateName;
        ::ll::TypedStorage<1, 1, ::Rotation>                                         mRotation;
        ::ll::TypedStorage<1, 1, bool>                                               mOverwrite;
        ::ll::TypedStorage<8, 24, ::std::vector<::BlockPos>>                         mMobPositions;
#endif // @header-generator platform
        // NOLINTEND

    public:
        // prevent constructor by default
        EndCityPiece();

    public:
        // virtual functions
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        // clang-format off
        virtual ~EndCityPiece();
    
        virtual ::StructurePieceType getType() const;
    
        virtual void postProcessMobsAt(::BlockSource&, ::Random&, ::BoundingBox const&);
    
        virtual void _handleDataMarker(std::string const&, ::BlockPos const&, ::BlockSource&, ::Random&, ::BoundingBox const&);
        // clang-format on
#else // @header-generator platform
        virtual ::StructurePieceType getType() const /*override*/;

        virtual void
        postProcessMobsAt(::BlockSource& region, ::Random& random, ::BoundingBox const& chunkBB) /*override*/;

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
        MCNAPI EndCityPiece(
            ::gsl::not_null<Bedrock::NonOwnerPointer<StructureManager>>,
            std::string,
            ::BlockPos const&,
            ::Rotation,
            bool
#else // @header-generator platform
        MCAPI EndCityPiece(
            ::Bedrock::NotNullNonOwnerPtr<::StructureManager> structureManager,
            ::std::string                                     templateName,
            ::BlockPos const&                                 origin,
            ::Rotation                                        rotation,
            bool                                              overwrite
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
            bool
#else // @header-generator platform
        MCAPI void* $ctor(
            ::Bedrock::NotNullNonOwnerPtr<::StructureManager> structureManager,
            ::std::string                                     templateName,
            ::BlockPos const&                                 origin,
            ::Rotation                                        rotation,
            bool                                              overwrite
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
        MCNAPI void $postProcessMobsAt(::BlockSource&, ::Random&, ::BoundingBox const&);
#else // @header-generator platform
        MCAPI void $postProcessMobsAt(::BlockSource& region, ::Random& random, ::BoundingBox const& chunkBB);
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

    class SectionGenerator {
    public:
        // virtual functions
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        // clang-format off
        virtual bool generate(::gsl::not_null<Bedrock::NonOwnerPointer<StructureManager>>, std::vector<std::unique_ptr<EndCityPieces::SectionGenerator>> const&, int, ::EndCityPieces::EndCityPiece*, ::BlockPos const&, std::vector<std::unique_ptr<StructurePiece>>&, ::Random&) = 0;
    
        virtual ~SectionGenerator();
        // clang-format on
        // NOLINTEND
#else // @header-generator platform
        virtual bool generate(
            ::Bedrock::NotNullNonOwnerPtr<::StructureManager>                          structureManager,
            ::std::vector<::std::unique_ptr<::EndCityPieces::SectionGenerator>> const& generators,
            int                                                                        genDepth,
            ::EndCityPieces::EndCityPiece*                                             parent,
            ::BlockPos const&                                                          offset,
            ::std::vector<::std::unique_ptr<::StructurePiece>>&                        pieces,
            ::Random&                                                                  random
        ) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

    class TowerGenerator : public ::EndCityPieces::SectionGenerator {
    public:
        // virtual functions
        // NOLINTBEGIN
        // clang-format off
        virtual bool generate(::gsl::not_null<Bedrock::NonOwnerPointer<StructureManager>>, std::vector<std::unique_ptr<EndCityPieces::SectionGenerator>> const&, int, ::EndCityPieces::EndCityPiece*, ::BlockPos const&, std::vector<std::unique_ptr<StructurePiece>>&, ::Random&);
    
        virtual ~TowerGenerator();
        // clang-format on
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND

    public:
        // virtual function thunks
        // NOLINTBEGIN
        MCNAPI bool $generate(
            ::gsl::not_null<Bedrock::NonOwnerPointer<StructureManager>>,
            std::vector<std::unique_ptr<EndCityPieces::SectionGenerator>> const&,
            int,
            ::EndCityPieces::EndCityPiece*,
            ::BlockPos const&,
            std::vector<std::unique_ptr<StructurePiece>>&,
            ::Random&
        );
        // NOLINTEND

    public:
        // vftables
        // NOLINTBEGIN
        MCNAPI static void** $vftable();
#else // @header-generator platform
        virtual ~SectionGenerator() = default;
#endif // @header-generator platform
        // NOLINTEND
    };

    class FatTowerGenerator : public ::EndCityPieces::SectionGenerator {
    public:
        // virtual functions
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        // clang-format off
        virtual bool generate(::gsl::not_null<Bedrock::NonOwnerPointer<StructureManager>>, std::vector<std::unique_ptr<EndCityPieces::SectionGenerator>> const&, int, ::EndCityPieces::EndCityPiece*, ::BlockPos const&, std::vector<std::unique_ptr<StructurePiece>>&, ::Random&);
    
        virtual ~FatTowerGenerator();
        // clang-format on
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
#else // @header-generator platform
        virtual bool generate(
            ::Bedrock::NotNullNonOwnerPtr<::StructureManager>                          structureManager,
            ::std::vector<::std::unique_ptr<::EndCityPieces::SectionGenerator>> const& generators,
            int                                                                        genDepth,
            ::EndCityPieces::EndCityPiece*                                             parent,
            ::BlockPos const&                                                          offset,
            ::std::vector<::std::unique_ptr<::StructurePiece>>&                        pieces,
            ::Random&                                                                  random
        ) /*override*/;
#endif // @header-generator platform
        // NOLINTEND

    public:
        // virtual function thunks
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        MCNAPI bool $generate(
            ::gsl::not_null<Bedrock::NonOwnerPointer<StructureManager>>,
            std::vector<std::unique_ptr<EndCityPieces::SectionGenerator>> const&,
            int,
            ::EndCityPieces::EndCityPiece*,
            ::BlockPos const&,
            std::vector<std::unique_ptr<StructurePiece>>&,
            ::Random&
#else // @header-generator platform
        MCAPI bool $generate(
            ::Bedrock::NotNullNonOwnerPtr<::StructureManager>                          structureManager,
            ::std::vector<::std::unique_ptr<::EndCityPieces::SectionGenerator>> const& generators,
            int                                                                        genDepth,
            ::EndCityPieces::EndCityPiece*                                             parent,
            ::BlockPos const&                                                          offset,
            ::std::vector<::std::unique_ptr<::StructurePiece>>&                        pieces,
            ::Random&                                                                  random
#endif // @header-generator platform
        );
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform


        // NOLINTEND
    };

    class HouseTowerGenerator : public ::EndCityPieces::SectionGenerator {
    public:
        // virtual functions
        // NOLINTBEGIN
        virtual bool generate(
            ::Bedrock::NotNullNonOwnerPtr<::StructureManager>                          structureManager,
            ::std::vector<::std::unique_ptr<::EndCityPieces::SectionGenerator>> const& generators,
            int                                                                        genDepth,
            ::EndCityPieces::EndCityPiece*                                             parent,
            ::BlockPos const&                                                          offset,
            ::std::vector<::std::unique_ptr<::StructurePiece>>&                        pieces,
            ::Random&                                                                  random
        ) /*override*/;
#endif // @header-generator platform
        // NOLINTEND

    public:
#if defined(LL_PLAT_A) // @header-generator platform
        // vftables
#else // @header-generator platform
        // virtual function thunks
#endif // @header-generator platform
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        MCNAPI static void** $vftable();
#else // @header-generator platform
        MCAPI bool $generate(
            ::Bedrock::NotNullNonOwnerPtr<::StructureManager>                          structureManager,
            ::std::vector<::std::unique_ptr<::EndCityPieces::SectionGenerator>> const& generators,
            int                                                                        genDepth,
            ::EndCityPieces::EndCityPiece*                                             parent,
            ::BlockPos const&                                                          offset,
            ::std::vector<::std::unique_ptr<::StructurePiece>>&                        pieces,
            ::Random&                                                                  random
        );


#endif // @header-generator platform
        // NOLINTEND
    };

    class TowerBridgeGenerator : public ::EndCityPieces::SectionGenerator {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<1, 1, bool> mShipCreated;
        // NOLINTEND

    public:
        // virtual functions
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        // clang-format off
        virtual bool generate(::gsl::not_null<Bedrock::NonOwnerPointer<StructureManager>>, std::vector<std::unique_ptr<EndCityPieces::SectionGenerator>> const&, int, ::EndCityPieces::EndCityPiece*, ::BlockPos const&, std::vector<std::unique_ptr<StructurePiece>>&, ::Random&);
    
        virtual ~TowerBridgeGenerator();
        // clang-format on
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
#else // @header-generator platform
        virtual bool generate(
            ::Bedrock::NotNullNonOwnerPtr<::StructureManager>                          structureManager,
            ::std::vector<::std::unique_ptr<::EndCityPieces::SectionGenerator>> const& generators,
            int                                                                        genDepth,
            ::EndCityPieces::EndCityPiece*                                             parent,
            ::BlockPos const&                                                          offset,
            ::std::vector<::std::unique_ptr<::StructurePiece>>&                        pieces,
            ::Random&                                                                  random
        ) /*override*/;
#endif // @header-generator platform
        // NOLINTEND

    public:
        // virtual function thunks
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        MCNAPI bool $generate(
            ::gsl::not_null<Bedrock::NonOwnerPointer<StructureManager>>,
            std::vector<std::unique_ptr<EndCityPieces::SectionGenerator>> const&,
            int,
            ::EndCityPieces::EndCityPiece*,
            ::BlockPos const&,
            std::vector<std::unique_ptr<StructurePiece>>&,
            ::Random&
#else // @header-generator platform
        MCAPI bool $generate(
            ::Bedrock::NotNullNonOwnerPtr<::StructureManager>                          structureManager,
            ::std::vector<::std::unique_ptr<::EndCityPieces::SectionGenerator>> const& generators,
            int                                                                        genDepth,
            ::EndCityPieces::EndCityPiece*                                             parent,
            ::BlockPos const&                                                          offset,
            ::std::vector<::std::unique_ptr<::StructurePiece>>&                        pieces,
            ::Random&                                                                  random
#endif // @header-generator platform
        );
#if defined(LL_PLAT_A) // @header-generator platform
        // NOLINTEND
#else // @header-generator platform
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

#if defined(LL_PLAT_A) // @header-generator platform
    class HouseTowerGenerator : public ::EndCityPieces::SectionGenerator {
#else // @header-generator platform
    class TowerGenerator : public ::EndCityPieces::SectionGenerator {
#endif // @header-generator platform
    public:
        // virtual functions
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        // clang-format off
        virtual bool generate(::gsl::not_null<Bedrock::NonOwnerPointer<StructureManager>>, std::vector<std::unique_ptr<EndCityPieces::SectionGenerator>> const&, int, ::EndCityPieces::EndCityPiece*, ::BlockPos const&, std::vector<std::unique_ptr<StructurePiece>>&, ::Random&);
    
        virtual ~HouseTowerGenerator();
        // clang-format on
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
#else // @header-generator platform
        virtual bool generate(
            ::Bedrock::NotNullNonOwnerPtr<::StructureManager>                          structureManager,
            ::std::vector<::std::unique_ptr<::EndCityPieces::SectionGenerator>> const& generators,
            int                                                                        genDepth,
            ::EndCityPieces::EndCityPiece*                                             parent,
            ::BlockPos const&                                                          offset,
            ::std::vector<::std::unique_ptr<::StructurePiece>>&                        pieces,
            ::Random&                                                                  random
        ) /*override*/;
#endif // @header-generator platform
        // NOLINTEND

    public:
        // virtual function thunks
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        MCNAPI bool $generate(
            ::gsl::not_null<Bedrock::NonOwnerPointer<StructureManager>>,
            std::vector<std::unique_ptr<EndCityPieces::SectionGenerator>> const&,
            int,
            ::EndCityPieces::EndCityPiece*,
            ::BlockPos const&,
            std::vector<std::unique_ptr<StructurePiece>>&,
            ::Random&
#else // @header-generator platform
        MCAPI bool $generate(
            ::Bedrock::NotNullNonOwnerPtr<::StructureManager>                          structureManager,
            ::std::vector<::std::unique_ptr<::EndCityPieces::SectionGenerator>> const& generators,
            int                                                                        genDepth,
            ::EndCityPieces::EndCityPiece*                                             parent,
            ::BlockPos const&                                                          offset,
            ::std::vector<::std::unique_ptr<::StructurePiece>>&                        pieces,
            ::Random&                                                                  random
#endif // @header-generator platform
        );
#if defined(LL_PLAT_A) // @header-generator platform
        // NOLINTEND
#else // @header-generator platform
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

#if defined(LL_PLAT_A) // @header-generator platform
    using Generators = std::vector<std::unique_ptr<EndCityPieces::SectionGenerator>>;
#else // @header-generator platform
    using Generators = ::std::vector<::std::unique_ptr<::EndCityPieces::SectionGenerator>>;

    using SectionGenerator = ::EndCityPieces::SectionGenerator;
#endif // @header-generator platform

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::EndCityPieces::EndCityPiece*
    _addHelper(std::vector<std::unique_ptr<StructurePiece>>&, std::unique_ptr<EndCityPieces::EndCityPiece>);
#else // @header-generator platform
    MCAPI static ::std::unique_ptr<::EndCityPieces::EndCityPiece> _createPiece(
        ::Bedrock::NotNullNonOwnerPtr<::StructureManager> structureManager,
        ::EndCityPieces::EndCityPiece*                    parent,
        ::BlockPos const&                                 offset,
        ::std::string const&                              templateName,
        ::Rotation                                        rotation,
        bool                                              overwrite
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static bool _recursiveChildren(
        ::gsl::not_null<Bedrock::NonOwnerPointer<StructureManager>>,
        std::vector<std::unique_ptr<EndCityPieces::SectionGenerator>> const&,
        ::EndCityPieces::SectionType,
        int,
        ::EndCityPieces::EndCityPiece*,
        ::BlockPos const&,
        std::vector<std::unique_ptr<StructurePiece>>&,
        ::Random&
#else // @header-generator platform
    MCAPI static bool _recursiveChildren(
        ::Bedrock::NotNullNonOwnerPtr<::StructureManager>                          structureManager,
        ::std::vector<::std::unique_ptr<::EndCityPieces::SectionGenerator>> const& generators,
        ::EndCityPieces::SectionType                                               type,
        int                                                                        newGenDepth,
        ::EndCityPieces::EndCityPiece*                                             parent,
        ::BlockPos const&                                                          offset,
        ::std::vector<::std::unique_ptr<::StructurePiece>>&                        pieces,
        ::Random&                                                                  random
#endif // @header-generator platform
    );
    // NOLINTEND
};
