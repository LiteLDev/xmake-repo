#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/util/Mirror.h"
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

class WoodlandMansionPieces {
public:
    // WoodlandMansionPieces inner types declare
    // clang-format off
    class WoodlandMansionPiece;
    class FloorRoomCollection;
    class SimpleGrid;
    class MansionGrid;
    struct PlacementData;
    class MansionPiecePlacer;
    class FirstFloorRoomCollection;
    class SecondFloorRoomCollection;
    class ThirdFloorRoomCollection;
    // clang-format on

    // WoodlandMansionPieces inner types define
    class WoodlandMansionPiece : public ::TemplateStructurePiece {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 24>                      mStructureManager;
        ::ll::TypedStorage<8, 24, std::string>           mTemplateName;
        ::ll::TypedStorage<1, 1, ::Rotation>             mRotation;
        ::ll::TypedStorage<1, 1, ::Mirror>               mMirror;
        ::ll::TypedStorage<4, 12, ::BlockPos>            mPosition;
        ::ll::TypedStorage<8, 24, std::vector<BlockPos>> mVindicatorPositions;
        ::ll::TypedStorage<8, 24, std::vector<BlockPos>> mEvokerPositions;
        ::ll::TypedStorage<8, 24, std::vector<BlockPos>> mAllayGroupPositions;
        // NOLINTEND

    public:
        // prevent constructor by default
        WoodlandMansionPiece();

    public:
        // virtual functions
        // NOLINTBEGIN
        // clang-format off
        virtual ~WoodlandMansionPiece();
    
        virtual ::StructurePieceType getType() const;
    
        virtual void postProcessMobsAt(::BlockSource&, ::Random&, ::BoundingBox const&);
    
        virtual void _handleDataMarker(std::string const&, ::BlockPos const&, ::BlockSource&, ::Random&, ::BoundingBox const&);
        // clang-format on
        // NOLINTEND

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI WoodlandMansionPiece(
            ::gsl::not_null<Bedrock::NonOwnerPointer<StructureManager>>,
            std::string const&,
            ::BlockPos const&,
            ::Rotation
        );

        MCNAPI WoodlandMansionPiece(
            ::gsl::not_null<Bedrock::NonOwnerPointer<StructureManager>>,
            std::string const&,
            ::BlockPos const&,
            ::Rotation,
            ::Mirror
        );
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCNAPI void* $ctor(
            ::gsl::not_null<Bedrock::NonOwnerPointer<StructureManager>>,
            std::string const&,
            ::BlockPos const&,
            ::Rotation
        );

        MCNAPI void* $ctor(
            ::gsl::not_null<Bedrock::NonOwnerPointer<StructureManager>>,
            std::string const&,
            ::BlockPos const&,
            ::Rotation,
            ::Mirror
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

    class FloorRoomCollection {
    public:
        // virtual functions
        // NOLINTBEGIN
        virtual ~FloorRoomCollection();

        virtual std::string get1x1(::Random&) = 0;

        virtual std::string get1x1Secret(::Random&) = 0;

        virtual std::string get1x2SideEntrance(::Random&, bool) = 0;

        virtual std::string get1x2FrontEntrance(::Random&, bool) = 0;

        virtual std::string get1x2Secret(::Random&) = 0;

        virtual std::string get2x2(::Random&) = 0;

        virtual std::string get2x2Secret(::Random&) = 0;
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

    class SimpleGrid {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 24, std::vector<std::vector<int>>> mGrid;
        ::ll::TypedStorage<4, 4, int>                            mWidth;
        ::ll::TypedStorage<4, 4, int>                            mHeight;
        ::ll::TypedStorage<4, 4, int>                            mValueIfOutside;
        // NOLINTEND

    public:
        // prevent constructor by default
        SimpleGrid();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI bool edgesTo(int, int, int);
        // NOLINTEND
    };

    class MansionGrid {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, std::unique_ptr<WoodlandMansionPieces::SimpleGrid>>               mBaseGrid;
        ::ll::TypedStorage<8, 8, std::unique_ptr<WoodlandMansionPieces::SimpleGrid>>               mThirdFloorGrid;
        ::ll::TypedStorage<8, 24, std::vector<std::unique_ptr<WoodlandMansionPieces::SimpleGrid>>> mFloorRooms;
        ::ll::TypedStorage<4, 4, int>                                                              mEntranceX;
        ::ll::TypedStorage<4, 4, int>                                                              mEntranceY;
        ::ll::TypedStorage<8, 8, ::Random&>                                                        mRandom;
        // NOLINTEND

    public:
        // prevent constructor by default
        MansionGrid& operator=(MansionGrid const&);
        MansionGrid(MansionGrid const&);
        MansionGrid();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI bool _cleanEdges(::WoodlandMansionPieces::SimpleGrid&);

        MCNAPI void _identifyRooms(::WoodlandMansionPieces::SimpleGrid&, ::WoodlandMansionPieces::SimpleGrid&);

        MCNAPI void _recursiveCorridor(::WoodlandMansionPieces::SimpleGrid&, int, int, uchar, int);

        MCNAPI uchar get1x2RoomDirection(::WoodlandMansionPieces::SimpleGrid const&, int, int, int, int) const;

        MCNAPI ~MansionGrid();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

    struct PlacementData {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<1, 1, ::Rotation>   mRotation;
        ::ll::TypedStorage<4, 12, ::BlockPos>  mPosition;
        ::ll::TypedStorage<8, 24, std::string> mWallType;
        // NOLINTEND
    };

    class MansionPiecePlacer {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 24>         mStructureManager;
        ::ll::TypedStorage<8, 8, ::Random&> mRandom;
        ::ll::TypedStorage<4, 4, int>       mStartX;
        ::ll::TypedStorage<4, 4, int>       mStartY;
        // NOLINTEND

    public:
        // prevent constructor by default
        MansionPiecePlacer& operator=(MansionPiecePlacer const&);
        MansionPiecePlacer(MansionPiecePlacer const&);
        MansionPiecePlacer();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI void _createRoof(
            std::vector<std::unique_ptr<StructurePiece>>&,
            ::BlockPos const&,
            ::Rotation,
            ::WoodlandMansionPieces::SimpleGrid&,
            ::WoodlandMansionPieces::SimpleGrid*
        );

        MCNAPI void _traverseOuterWalls(
            std::vector<std::unique_ptr<StructurePiece>>&,
            ::WoodlandMansionPieces::PlacementData&,
            ::WoodlandMansionPieces::SimpleGrid&,
            uchar,
            int,
            int,
            int,
            int
        );

        MCNAPI void
        _traverseWallPiece(std::vector<std::unique_ptr<StructurePiece>>&, ::WoodlandMansionPieces::PlacementData&);

        MCNAPI void createMansion(
            ::BlockPos const&,
            ::Rotation,
            std::vector<std::unique_ptr<StructurePiece>>&,
            ::WoodlandMansionPieces::MansionGrid&
        );
        // NOLINTEND
    };

    class FirstFloorRoomCollection : public ::WoodlandMansionPieces::FloorRoomCollection {
    public:
        // virtual functions
        // NOLINTBEGIN
        virtual ~FirstFloorRoomCollection();

        virtual std::string get1x1(::Random&);

        virtual std::string get1x1Secret(::Random&);

        virtual std::string get1x2SideEntrance(::Random&, bool);

        virtual std::string get1x2FrontEntrance(::Random&, bool);

        virtual std::string get1x2Secret(::Random&);

        virtual std::string get2x2(::Random&);

        virtual std::string get2x2Secret(::Random&);
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND

    public:
        // virtual function thunks
        // NOLINTBEGIN
        MCNAPI std::string $get1x1(::Random&);

        MCNAPI std::string $get1x1Secret(::Random&);

        MCNAPI std::string $get1x2SideEntrance(::Random&, bool);

        MCNAPI std::string $get1x2FrontEntrance(::Random&, bool);

        MCNAPI std::string $get1x2Secret(::Random&);

        MCNAPI std::string $get2x2(::Random&);

        MCNAPI std::string $get2x2Secret(::Random&);
        // NOLINTEND

    public:
        // vftables
        // NOLINTBEGIN
        MCNAPI static void** $vftable();
        // NOLINTEND
    };

    class SecondFloorRoomCollection : public ::WoodlandMansionPieces::FloorRoomCollection {
    public:
        // virtual functions
        // NOLINTBEGIN
        virtual ~SecondFloorRoomCollection();

        virtual std::string get1x1(::Random&);

        virtual std::string get1x1Secret(::Random&);

        virtual std::string get1x2SideEntrance(::Random&, bool);

        virtual std::string get1x2FrontEntrance(::Random&, bool);

        virtual std::string get1x2Secret(::Random&);

        virtual std::string get2x2(::Random&);

        virtual std::string get2x2Secret(::Random&);
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND

    public:
        // virtual function thunks
        // NOLINTBEGIN
        MCNAPI std::string $get1x1(::Random&);

        MCNAPI std::string $get1x1Secret(::Random&);

        MCNAPI std::string $get1x2SideEntrance(::Random&, bool);

        MCNAPI std::string $get1x2FrontEntrance(::Random&, bool);

        MCNAPI std::string $get1x2Secret(::Random&);

        MCNAPI std::string $get2x2(::Random&);

        MCNAPI std::string $get2x2Secret(::Random&);
        // NOLINTEND

    public:
        // vftables
        // NOLINTBEGIN
        MCNAPI static void** $vftable();
        // NOLINTEND
    };

    class ThirdFloorRoomCollection : public ::WoodlandMansionPieces::SecondFloorRoomCollection {
    public:
        // virtual functions
        // NOLINTBEGIN
        virtual ~ThirdFloorRoomCollection();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND

    public:
        // vftables
        // NOLINTBEGIN
        MCNAPI static void** $vftable();
        // NOLINTEND
    };
};
