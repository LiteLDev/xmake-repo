#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/optional_ref.h"
#include "mc/world/level/BlockPos.h"
#include "mc/world/level/block/BlockRenderLayer.h"
#include "mc/world/level/block/BlockType.h"

// auto generated forward declare list
// clang-format off
class AABB;
class Actor;
class Block;
class BlockSource;
class GetCollisionShapeInterface;
class IConstBlockSource;
struct BlockGraphicsModeChangeContext;
namespace BlockEvents { class BlockPlaceEvent; }
namespace BlockEvents { class BlockQueuedTickEvent; }
namespace BlockEvents { class BlockRedstoneUpdateEvent; }
// clang-format on

class BaseRailBlock : public ::BlockType {
public:
    // BaseRailBlock inner types declare
    // clang-format off
    class Rail;
    // clang-format on

    // BaseRailBlock inner types define
    class Rail {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, ::BlockSource&>         mRegion;
        ::ll::TypedStorage<4, 12, ::BlockPos>            mPos;
        ::ll::TypedStorage<1, 1, bool>                   mUsesDataBit;
        ::ll::TypedStorage<8, 24, std::vector<BlockPos>> mConnections;
        // NOLINTEND

    public:
        // prevent constructor by default
        Rail& operator=(Rail const&);
        Rail(Rail const&);
        Rail();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI Rail(::BlockSource&, ::BlockPos const&);

        MCNAPI std::shared_ptr<BaseRailBlock::Rail> getRail(::BlockPos const&);

        MCNAPI bool hasNeighborRail(::BlockPos const&);

        MCNAPI void place(int, bool);

        MCNAPI void removeSoftConnections();

        MCNAPI void updateConnections(int);
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCNAPI void* $ctor(::BlockSource&, ::BlockPos const&);
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool const> mUsesDataBit;
    // NOLINTEND

public:
    // prevent constructor by default
    BaseRailBlock();

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~BaseRailBlock();

    virtual ::AABB getCollisionShape(::Block const&, ::IConstBlockSource const&, ::BlockPos const&, ::optional_ref<const GetCollisionShapeInterface>) const;

    virtual ::AABB const& getVisualShape(::Block const&, ::AABB&) const;

    virtual bool isLavaBlocking() const;

    virtual bool isRailBlock() const;

    virtual void setupRedstoneComponent(::BlockSource&, ::BlockPos const&) const;

    virtual bool mayPlace(::BlockSource&, ::BlockPos const&) const;

    virtual void neighborChanged(::BlockSource&, ::BlockPos const&, ::BlockPos const&) const;

    virtual void onGraphicsModeChanged(::BlockGraphicsModeChangeContext const&);

    virtual bool canSpawnOn(::Actor*) const;

    virtual bool canSurvive(::BlockSource&, ::BlockPos const&) const;

    virtual ::BlockRenderLayer getRenderLayer(::Block const&, ::BlockSource&, ::BlockPos const&) const;

    virtual void tick(::BlockEvents::BlockQueuedTickEvent&) const;

    virtual void _onRedstoneUpdate(::BlockEvents::BlockRedstoneUpdateEvent&) const;
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI BaseRailBlock(std::string const&, int, bool);

    MCNAPI void _onRedstoneUpdateBase(::BlockEvents::BlockRedstoneUpdateEvent&) const;

    MCNAPI void onPlace(::BlockEvents::BlockPlaceEvent&) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void _createCircuitComponent(::BlockSource&, ::BlockPos const&);

    MCNAPI static bool isCorner(::BlockSource const&, ::BlockPos const&);

    MCNAPI static bool isFacingWestEast(::BlockSource const&, ::BlockPos const&);

    MCNAPI static bool isRail(::Block const&);

    MCNAPI static bool isRail(::IConstBlockSource const&, ::BlockPos const&);

    MCNAPI static bool isSlope(int);

    MCNAPI static bool isSlope(::Block const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::string const&, int, bool);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::AABB $getCollisionShape(
        ::Block const&,
        ::IConstBlockSource const&,
        ::BlockPos const&,
        ::optional_ref<const GetCollisionShapeInterface>
    ) const;

    MCNAPI ::AABB const& $getVisualShape(::Block const&, ::AABB&) const;

    MCNAPI bool $isLavaBlocking() const;

    MCNAPI bool $isRailBlock() const;

    MCNAPI void $setupRedstoneComponent(::BlockSource&, ::BlockPos const&) const;

    MCNAPI bool $mayPlace(::BlockSource&, ::BlockPos const&) const;

    MCNAPI void $neighborChanged(::BlockSource&, ::BlockPos const&, ::BlockPos const&) const;

    MCNAPI void $onGraphicsModeChanged(::BlockGraphicsModeChangeContext const&);

    MCNAPI bool $canSpawnOn(::Actor*) const;

    MCNAPI bool $canSurvive(::BlockSource&, ::BlockPos const&) const;

    MCNAPI ::BlockRenderLayer $getRenderLayer(::Block const&, ::BlockSource&, ::BlockPos const&) const;

    MCNAPI void $tick(::BlockEvents::BlockQueuedTickEvent&) const;

    MCNAPI void $_onRedstoneUpdate(::BlockEvents::BlockRedstoneUpdateEvent&) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
