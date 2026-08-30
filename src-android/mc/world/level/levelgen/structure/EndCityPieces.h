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
    class TowerGenerator;
    class FatTowerGenerator;
    class TowerBridgeGenerator;
    class HouseTowerGenerator;
    // clang-format on

    // EndCityPieces inner types define
    enum SectionType : ushort {
        SectionTower    = 0,
        SectionFatTower = 1,
        SectionBridge   = 2,
        SectionHouse    = 3,
    };

    class EndCityPiece : public ::TemplateStructurePiece {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 24>                      mStructureManager;
        ::ll::TypedStorage<8, 24, std::string>           mTemplateName;
        ::ll::TypedStorage<1, 1, ::Rotation>             mRotation;
        ::ll::TypedStorage<1, 1, bool>                   mOverwrite;
        ::ll::TypedStorage<8, 24, std::vector<BlockPos>> mMobPositions;
        // NOLINTEND

    public:
        // prevent constructor by default
        EndCityPiece();

    public:
        // virtual functions
        // NOLINTBEGIN
        // clang-format off
        virtual ~EndCityPiece();
    
        virtual ::StructurePieceType getType() const;
    
        virtual void postProcessMobsAt(::BlockSource&, ::Random&, ::BoundingBox const&);
    
        virtual void _handleDataMarker(std::string const&, ::BlockPos const&, ::BlockSource&, ::Random&, ::BoundingBox const&);
        // clang-format on
        // NOLINTEND

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI EndCityPiece(
            ::gsl::not_null<Bedrock::NonOwnerPointer<StructureManager>>,
            std::string,
            ::BlockPos const&,
            ::Rotation,
            bool
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
            bool
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

        MCNAPI void $postProcessMobsAt(::BlockSource&, ::Random&, ::BoundingBox const&);

        MCNAPI void
        $_handleDataMarker(std::string const&, ::BlockPos const&, ::BlockSource&, ::Random&, ::BoundingBox const&);
        // NOLINTEND

    public:
        // vftables
        // NOLINTBEGIN
        MCNAPI static void** $vftable();
        // NOLINTEND
    };

    class SectionGenerator {
    public:
        // virtual functions
        // NOLINTBEGIN
        // clang-format off
        virtual bool generate(::gsl::not_null<Bedrock::NonOwnerPointer<StructureManager>>, std::vector<std::unique_ptr<EndCityPieces::SectionGenerator>> const&, int, ::EndCityPieces::EndCityPiece*, ::BlockPos const&, std::vector<std::unique_ptr<StructurePiece>>&, ::Random&) = 0;
    
        virtual ~SectionGenerator();
        // clang-format on
        // NOLINTEND

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
        // NOLINTEND
    };

    class FatTowerGenerator : public ::EndCityPieces::SectionGenerator {
    public:
        // virtual functions
        // NOLINTBEGIN
        // clang-format off
        virtual bool generate(::gsl::not_null<Bedrock::NonOwnerPointer<StructureManager>>, std::vector<std::unique_ptr<EndCityPieces::SectionGenerator>> const&, int, ::EndCityPieces::EndCityPiece*, ::BlockPos const&, std::vector<std::unique_ptr<StructurePiece>>&, ::Random&);
    
        virtual ~FatTowerGenerator();
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
        // clang-format off
        virtual bool generate(::gsl::not_null<Bedrock::NonOwnerPointer<StructureManager>>, std::vector<std::unique_ptr<EndCityPieces::SectionGenerator>> const&, int, ::EndCityPieces::EndCityPiece*, ::BlockPos const&, std::vector<std::unique_ptr<StructurePiece>>&, ::Random&);
    
        virtual ~TowerBridgeGenerator();
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
        // NOLINTEND
    };

    class HouseTowerGenerator : public ::EndCityPieces::SectionGenerator {
    public:
        // virtual functions
        // NOLINTBEGIN
        // clang-format off
        virtual bool generate(::gsl::not_null<Bedrock::NonOwnerPointer<StructureManager>>, std::vector<std::unique_ptr<EndCityPieces::SectionGenerator>> const&, int, ::EndCityPieces::EndCityPiece*, ::BlockPos const&, std::vector<std::unique_ptr<StructurePiece>>&, ::Random&);
    
        virtual ~HouseTowerGenerator();
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
        // NOLINTEND
    };

    using Generators = std::vector<std::unique_ptr<EndCityPieces::SectionGenerator>>;

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::EndCityPieces::EndCityPiece*
    _addHelper(std::vector<std::unique_ptr<StructurePiece>>&, std::unique_ptr<EndCityPieces::EndCityPiece>);

    MCNAPI static bool _recursiveChildren(
        ::gsl::not_null<Bedrock::NonOwnerPointer<StructureManager>>,
        std::vector<std::unique_ptr<EndCityPieces::SectionGenerator>> const&,
        ::EndCityPieces::SectionType,
        int,
        ::EndCityPieces::EndCityPiece*,
        ::BlockPos const&,
        std::vector<std::unique_ptr<StructurePiece>>&,
        ::Random&
    );
    // NOLINTEND
};
