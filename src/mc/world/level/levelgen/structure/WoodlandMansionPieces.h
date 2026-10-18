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
#if defined(LL_PLAT_A) // @header-generator platform
    class WoodlandMansionPiece;
#else // @header-generator platform
#endif // @header-generator platform
    class FloorRoomCollection;
#if defined(LL_PLAT_A) // @header-generator platform
    class SimpleGrid;
    class MansionGrid;
#else // @header-generator platform
#endif // @header-generator platform
    struct PlacementData;
#if defined(LL_PLAT_A) // @header-generator platform
    class MansionPiecePlacer;
#else // @header-generator platform
    class SimpleGrid;
    class WoodlandMansionPiece;
#endif // @header-generator platform
    class FirstFloorRoomCollection;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    class MansionGrid;
    class MansionPiecePlacer;
#endif // @header-generator platform
    class SecondFloorRoomCollection;
    class ThirdFloorRoomCollection;
    // clang-format on

    // WoodlandMansionPieces inner types define
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    class FloorRoomCollection {
    public:
        // virtual functions
        // NOLINTBEGIN
        virtual ~FloorRoomCollection() = default;

        virtual ::std::string get1x1(::Random& random) = 0;

        virtual ::std::string get1x1Secret(::Random& random) = 0;

        virtual ::std::string get1x2SideEntrance(::Random& random, bool isStairsRoom) = 0;

        virtual ::std::string get1x2FrontEntrance(::Random& random, bool isStairsRoom) = 0;

        virtual ::std::string get1x2Secret(::Random& random) = 0;

        virtual ::std::string get2x2(::Random& random) = 0;

        virtual ::std::string get2x2Secret(::Random& random) = 0;
        // NOLINTEND
    };

    struct PlacementData {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<1, 1, ::Rotation>     mRotation;
        ::ll::TypedStorage<4, 12, ::BlockPos>    mPosition;
        ::ll::TypedStorage<8, 32, ::std::string> mWallType;
        // NOLINTEND
    };

    class SimpleGrid {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 24, ::std::vector<::std::vector<int>>> mGrid;
        ::ll::TypedStorage<4, 4, int>                                mWidth;
        ::ll::TypedStorage<4, 4, int>                                mHeight;
        ::ll::TypedStorage<4, 4, int>                                mValueIfOutside;
        // NOLINTEND

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI bool edgesTo(int x, int y, int ifValue);
        // NOLINTEND
    };

#endif // @header-generator platform
    class WoodlandMansionPiece : public ::TemplateStructurePiece {
    public:
        // member variables
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::UntypedStorage<8, 24>                      mStructureManager;
        ::ll::TypedStorage<8, 24, std::string>           mTemplateName;
        ::ll::TypedStorage<1, 1, ::Rotation>             mRotation;
        ::ll::TypedStorage<1, 1, ::Mirror>               mMirror;
        ::ll::TypedStorage<4, 12, ::BlockPos>            mPosition;
        ::ll::TypedStorage<8, 24, std::vector<BlockPos>> mVindicatorPositions;
        ::ll::TypedStorage<8, 24, std::vector<BlockPos>> mEvokerPositions;
        ::ll::TypedStorage<8, 24, std::vector<BlockPos>> mAllayGroupPositions;
#else // @header-generator platform
        ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::StructureManager>> mStructureManager;
        ::ll::TypedStorage<8, 32, ::std::string>                                     mTemplateName;
        ::ll::TypedStorage<1, 1, ::Rotation>                                         mRotation;
        ::ll::TypedStorage<1, 1, ::Mirror>                                           mMirror;
        ::ll::TypedStorage<4, 12, ::BlockPos>                                        mPosition;
        ::ll::TypedStorage<8, 24, ::std::vector<::BlockPos>>                         mVindicatorPositions;
        ::ll::TypedStorage<8, 24, ::std::vector<::BlockPos>>                         mEvokerPositions;
        ::ll::TypedStorage<8, 24, ::std::vector<::BlockPos>>                         mAllayGroupPositions;
#endif // @header-generator platform
        // NOLINTEND

    public:
        // prevent constructor by default
        WoodlandMansionPiece();

    public:
        // virtual functions
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        // clang-format off
        virtual ~WoodlandMansionPiece();
    
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
        MCNAPI WoodlandMansionPiece(
            ::gsl::not_null<Bedrock::NonOwnerPointer<StructureManager>>,
            std::string const&,
            ::BlockPos const&,
            ::Rotation
#else // @header-generator platform
        MCAPI WoodlandMansionPiece(
            ::Bedrock::NotNullNonOwnerPtr<::StructureManager> structureManager,
            ::std::string const&                              templateName,
            ::BlockPos const&                                 origin,
            ::Rotation                                        rotation
#endif // @header-generator platform
        );

#if defined(LL_PLAT_A) // @header-generator platform
        MCNAPI WoodlandMansionPiece(
            ::gsl::not_null<Bedrock::NonOwnerPointer<StructureManager>>,
            std::string const&,
            ::BlockPos const&,
            ::Rotation,
            ::Mirror
#else // @header-generator platform
        MCAPI WoodlandMansionPiece(
            ::Bedrock::NotNullNonOwnerPtr<::StructureManager> structureManager,
            ::std::string const&                              templateName,
            ::BlockPos const&                                 origin,
            ::Rotation                                        rotation,
            ::Mirror                                          mirror
#endif // @header-generator platform
        );
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        MCNAPI void* $ctor(
            ::gsl::not_null<Bedrock::NonOwnerPointer<StructureManager>>,
            std::string const&,
            ::BlockPos const&,
            ::Rotation
#else // @header-generator platform
        MCAPI void* $ctor(
            ::Bedrock::NotNullNonOwnerPtr<::StructureManager> structureManager,
            ::std::string const&                              templateName,
            ::BlockPos const&                                 origin,
            ::Rotation                                        rotation
#endif // @header-generator platform
        );

#if defined(LL_PLAT_A) // @header-generator platform
        MCNAPI void* $ctor(
            ::gsl::not_null<Bedrock::NonOwnerPointer<StructureManager>>,
            std::string const&,
            ::BlockPos const&,
            ::Rotation,
            ::Mirror
#else // @header-generator platform
        MCAPI void* $ctor(
            ::Bedrock::NotNullNonOwnerPtr<::StructureManager> structureManager,
            ::std::string const&                              templateName,
            ::BlockPos const&                                 origin,
            ::Rotation                                        rotation,
            ::Mirror                                          mirror
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

#if defined(LL_PLAT_A) // @header-generator platform
    class FloorRoomCollection {
#else // @header-generator platform
    class FirstFloorRoomCollection : public ::WoodlandMansionPieces::FloorRoomCollection {
#endif // @header-generator platform
    public:
        // virtual functions
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        virtual ~FloorRoomCollection();
#else // @header-generator platform
        virtual ~FirstFloorRoomCollection() /*override*/ = default;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
        virtual std::string get1x1(::Random&) = 0;
#else // @header-generator platform
        virtual ::std::string get1x1(::Random& random) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
        virtual std::string get1x1Secret(::Random&) = 0;
#else // @header-generator platform
        virtual ::std::string get1x1Secret(::Random& random) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
        virtual std::string get1x2SideEntrance(::Random&, bool) = 0;
#else // @header-generator platform
        virtual ::std::string get1x2SideEntrance(::Random& random, bool isStairsRoom) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
        virtual std::string get1x2FrontEntrance(::Random&, bool) = 0;
#else // @header-generator platform
        virtual ::std::string get1x2FrontEntrance(::Random& random, bool isStairsRoom) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
        virtual std::string get1x2Secret(::Random&) = 0;
#else // @header-generator platform
        virtual ::std::string get1x2Secret(::Random& random) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
        virtual std::string get2x2(::Random&) = 0;
#else // @header-generator platform
        virtual ::std::string get2x2(::Random& random) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
        virtual std::string get2x2Secret(::Random&) = 0;
#else // @header-generator platform
        virtual ::std::string get2x2Secret(::Random& random) /*override*/;
#endif // @header-generator platform
        // NOLINTEND

    public:
#if defined(LL_PLAT_A) // @header-generator platform
        // destructor thunk
#else // @header-generator platform
        // virtual function thunks
#endif // @header-generator platform
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        MCNAPI void $dtor();
        // NOLINTEND
    };
#else // @header-generator platform
        MCAPI ::std::string $get1x1(::Random& random);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    class SimpleGrid {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 24, std::vector<std::vector<int>>> mGrid;
        ::ll::TypedStorage<4, 4, int>                            mWidth;
        ::ll::TypedStorage<4, 4, int>                            mHeight;
        ::ll::TypedStorage<4, 4, int>                            mValueIfOutside;
        // NOLINTEND
#else // @header-generator platform
        MCAPI ::std::string $get1x1Secret(::Random& random);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    public:
        // prevent constructor by default
        SimpleGrid();
#else // @header-generator platform
        MCAPI ::std::string $get1x2SideEntrance(::Random& random, bool isStairsRoom);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI bool edgesTo(int, int, int);
#else // @header-generator platform
        MCAPI ::std::string $get1x2FrontEntrance(::Random& random, bool isStairsRoom);

        MCAPI ::std::string $get1x2Secret(::Random& random);

        MCAPI ::std::string $get2x2(::Random& random);

        MCAPI ::std::string $get2x2Secret(::Random& random);


#endif // @header-generator platform
        // NOLINTEND
    };

    class MansionGrid {
    public:
        // member variables
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::TypedStorage<8, 8, std::unique_ptr<WoodlandMansionPieces::SimpleGrid>>               mBaseGrid;
        ::ll::TypedStorage<8, 8, std::unique_ptr<WoodlandMansionPieces::SimpleGrid>>               mThirdFloorGrid;
        ::ll::TypedStorage<8, 24, std::vector<std::unique_ptr<WoodlandMansionPieces::SimpleGrid>>> mFloorRooms;
        ::ll::TypedStorage<4, 4, int>                                                              mEntranceX;
        ::ll::TypedStorage<4, 4, int>                                                              mEntranceY;
        ::ll::TypedStorage<8, 8, ::Random&>                                                        mRandom;
#else // @header-generator platform
        ::ll::TypedStorage<8, 8, ::std::unique_ptr<::WoodlandMansionPieces::SimpleGrid>> mBaseGrid;
        ::ll::TypedStorage<8, 8, ::std::unique_ptr<::WoodlandMansionPieces::SimpleGrid>> mThirdFloorGrid;
        ::ll::TypedStorage<8, 24, ::std::vector<::std::unique_ptr<::WoodlandMansionPieces::SimpleGrid>>> mFloorRooms;
        ::ll::TypedStorage<4, 4, int>                                                                    mEntranceX;
        ::ll::TypedStorage<4, 4, int>                                                                    mEntranceY;
        ::ll::TypedStorage<8, 8, ::Random&>                                                              mRandom;
#endif // @header-generator platform
        // NOLINTEND

    public:
        // prevent constructor by default
        MansionGrid& operator=(MansionGrid const&);
        MansionGrid(MansionGrid const&);
        MansionGrid();

    public:
        // member functions
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        MCNAPI bool _cleanEdges(::WoodlandMansionPieces::SimpleGrid&);
#else // @header-generator platform
        MCAPI void
        _identifyRooms(::WoodlandMansionPieces::SimpleGrid& fromGrid, ::WoodlandMansionPieces::SimpleGrid& roomGrid);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
        MCNAPI void _identifyRooms(::WoodlandMansionPieces::SimpleGrid&, ::WoodlandMansionPieces::SimpleGrid&);
#else // @header-generator platform
        MCAPI void
        _recursiveCorridor(::WoodlandMansionPieces::SimpleGrid& grid, int x, int y, uchar heading, int depth);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
        MCNAPI void _recursiveCorridor(::WoodlandMansionPieces::SimpleGrid&, int, int, uchar, int);

        MCNAPI uchar get1x2RoomDirection(::WoodlandMansionPieces::SimpleGrid const&, int, int, int, int) const;

        MCNAPI ~MansionGrid();
#else // @header-generator platform
        MCAPI uchar get1x2RoomDirection(
            ::WoodlandMansionPieces::SimpleGrid const& grid,
            int                                        x,
            int                                        y,
            int                                        floorNum,
            int                                        roomId
        ) const;
#endif // @header-generator platform
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
        // NOLINTEND
    };

    struct PlacementData {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<1, 1, ::Rotation>   mRotation;
        ::ll::TypedStorage<4, 12, ::BlockPos>  mPosition;
        ::ll::TypedStorage<8, 24, std::string> mWallType;
#else // @header-generator platform
        MCAPI static bool _cleanEdges(::WoodlandMansionPieces::SimpleGrid& grid);
#endif // @header-generator platform
        // NOLINTEND
    };

    class MansionPiecePlacer {
    public:
        // member variables
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::UntypedStorage<8, 24>         mStructureManager;
        ::ll::TypedStorage<8, 8, ::Random&> mRandom;
        ::ll::TypedStorage<4, 4, int>       mStartX;
        ::ll::TypedStorage<4, 4, int>       mStartY;
#else // @header-generator platform
        ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::StructureManager>> mStructureManager;
        ::ll::TypedStorage<8, 8, ::Random&>                                          mRandom;
        ::ll::TypedStorage<4, 4, int>                                                mStartX;
        ::ll::TypedStorage<4, 4, int>                                                mStartY;
#endif // @header-generator platform
        // NOLINTEND

    public:
        // prevent constructor by default
        MansionPiecePlacer& operator=(MansionPiecePlacer const&);
        MansionPiecePlacer(MansionPiecePlacer const&);
        MansionPiecePlacer();

    public:
        // member functions
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        MCNAPI void _createRoof(
            std::vector<std::unique_ptr<StructurePiece>>&,
            ::BlockPos const&,
            ::Rotation,
            ::WoodlandMansionPieces::SimpleGrid&,
            ::WoodlandMansionPieces::SimpleGrid*
#else // @header-generator platform
        MCAPI void _createRoof(
            ::std::vector<::std::unique_ptr<::StructurePiece>>& pieces,
            ::BlockPos const&                                   roofOrigin,
            ::Rotation                                          rotation,
            ::WoodlandMansionPieces::SimpleGrid&                grid,
            ::WoodlandMansionPieces::SimpleGrid*                aboveGrid
#endif // @header-generator platform
        );

#if defined(LL_PLAT_A) // @header-generator platform
        MCNAPI void _traverseOuterWalls(
            std::vector<std::unique_ptr<StructurePiece>>&,
            ::WoodlandMansionPieces::PlacementData&,
            ::WoodlandMansionPieces::SimpleGrid&,
            uchar,
            int,
            int,
            int,
            int
#else // @header-generator platform
        MCAPI void _traverseOuterWalls(
            ::std::vector<::std::unique_ptr<::StructurePiece>>& pieces,
            ::WoodlandMansionPieces::PlacementData&             data,
            ::WoodlandMansionPieces::SimpleGrid&                grid,
            uchar                                               gridDirection,
            int                                                 startX,
            int                                                 startY,
            int                                                 endX,
            int                                                 endY
#endif // @header-generator platform
        );

#if defined(LL_PLAT_A) // @header-generator platform
        MCNAPI void
        _traverseWallPiece(std::vector<std::unique_ptr<StructurePiece>>&, ::WoodlandMansionPieces::PlacementData&);

        MCNAPI void createMansion(
            ::BlockPos const&,
            ::Rotation,
            std::vector<std::unique_ptr<StructurePiece>>&,
            ::WoodlandMansionPieces::MansionGrid&
#else // @header-generator platform
        MCAPI void _traverseWallPiece(
            ::std::vector<::std::unique_ptr<::StructurePiece>>& pieces,
            ::WoodlandMansionPieces::PlacementData&             data
#endif // @header-generator platform
        );
#if defined(LL_PLAT_A) // @header-generator platform
        // NOLINTEND
    };
#else // @header-generator platform
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
        MCAPI void createMansion(
            ::BlockPos const&                                   origin,
            ::Rotation                                          rotation,
            ::std::vector<::std::unique_ptr<::StructurePiece>>& pieces,
            ::WoodlandMansionPieces::MansionGrid&               mansion
        );
#endif // @header-generator platform
        // NOLINTEND
    };

    class SecondFloorRoomCollection : public ::WoodlandMansionPieces::FloorRoomCollection {
    public:
        // virtual functions
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        virtual ~SecondFloorRoomCollection();
#else // @header-generator platform
        virtual ~SecondFloorRoomCollection() /*override*/ = default;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
        virtual std::string get1x1(::Random&);
#else // @header-generator platform
        virtual ::std::string get1x1(::Random& random) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
        virtual std::string get1x1Secret(::Random&);
#else // @header-generator platform
        virtual ::std::string get1x1Secret(::Random& random) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
        virtual std::string get1x2SideEntrance(::Random&, bool);
#else // @header-generator platform
        virtual ::std::string get1x2SideEntrance(::Random& random, bool isStairsRoom) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
        virtual std::string get1x2FrontEntrance(::Random&, bool);
#else // @header-generator platform
        virtual ::std::string get1x2FrontEntrance(::Random& random, bool isStairsRoom) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
        virtual std::string get1x2Secret(::Random&);
#else // @header-generator platform
        virtual ::std::string get1x2Secret(::Random& random) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
        virtual std::string get2x2(::Random&);
#else // @header-generator platform
        virtual ::std::string get2x2(::Random& random) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
        virtual std::string get2x2Secret(::Random&);
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
#else // @header-generator platform
        virtual ::std::string get2x2Secret(::Random& random) /*override*/;
#endif // @header-generator platform
        // NOLINTEND

    public:
        // virtual function thunks
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        MCNAPI std::string $get1x1(::Random&);
#else // @header-generator platform
        MCAPI ::std::string $get1x1(::Random& random);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
        MCNAPI std::string $get1x1Secret(::Random&);
#else // @header-generator platform
        MCAPI ::std::string $get1x1Secret(::Random& random);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
        MCNAPI std::string $get1x2SideEntrance(::Random&, bool);
#else // @header-generator platform
        MCAPI ::std::string $get1x2SideEntrance(::Random& random, bool isStairsRoom);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
        MCNAPI std::string $get1x2FrontEntrance(::Random&, bool);
#else // @header-generator platform
        MCAPI ::std::string $get1x2FrontEntrance(::Random& random, bool isStairsRoom);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
        MCNAPI std::string $get1x2Secret(::Random&);
#else // @header-generator platform
        MCAPI ::std::string $get1x2Secret(::Random& random);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
        MCNAPI std::string $get2x2(::Random&);
#else // @header-generator platform
        MCAPI ::std::string $get2x2(::Random& random);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
        MCNAPI std::string $get2x2Secret(::Random&);
        // NOLINTEND
#else // @header-generator platform
        MCAPI ::std::string $get2x2Secret(::Random& random);
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
    class ThirdFloorRoomCollection : public ::WoodlandMansionPieces::SecondFloorRoomCollection {
    public:
        // virtual functions
        // NOLINTBEGIN
        virtual ~ThirdFloorRoomCollection();
        // NOLINTEND
#else // @header-generator platform
    class ThirdFloorRoomCollection : public ::WoodlandMansionPieces::SecondFloorRoomCollection {};
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
#else // @header-generator platform
    using FloorRoomCollection = ::WoodlandMansionPieces::FloorRoomCollection;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    public:
        // vftables
        // NOLINTBEGIN
        MCNAPI static void** $vftable();
        // NOLINTEND
    };
#else // @header-generator platform
    using MansionGrid = ::WoodlandMansionPieces::MansionGrid;

    using SimpleGrid = ::WoodlandMansionPieces::SimpleGrid;
#endif // @header-generator platform
};
