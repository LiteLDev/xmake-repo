#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/optional_ref.h"
#include "mc/world/Direction.h"
#include "mc/world/level/block/BlockSupportType.h"
#include "mc/world/level/block/BlockType.h"

// auto generated forward declare list
// clang-format off
class AABB;
class Actor;
class Block;
class BlockActor;
class BlockPos;
class BlockSource;
class GetCollisionShapeInterface;
class IConstBlockSource;
class ItemInstance;
class Material;
class Player;
namespace BlockEvents { class BlockPlayerInteractEvent; }
namespace BlockEvents { class BlockQueuedTickEvent; }
namespace BlockEvents { class BlockRedstoneUpdateEvent; }
// clang-format on

class DoorBlock : public ::BlockType {
public:
    // DoorBlock inner types define
    enum DoorType : uint {
        OAK                    = 0,
        SPRUCE                 = 1,
        BIRCH                  = 2,
        JUNGLE                 = 3,
        ACACIA                 = 4,
        DARKOAK                = 5,
        IRON                   = 6,
        CRIMSON                = 7,
        BLUE_NETHERSHROOM      = 8,
        MANGROVE               = 9,
        BAMBOO                 = 10,
        CHERRY                 = 11,
        COPPER                 = 12,
        EXPOSED_COPPER         = 13,
        WEATHERED_COPPER       = 14,
        OXIDIZED_COPPER        = 15,
        WAXED_COPPER           = 16,
        WAXED_EXPOSED_COPPER   = 17,
        WAXED_WEATHERED_COPPER = 18,
        WAXED_OXIDIZED_COPPER  = 19,
        PALE_OAK               = 20,
        POPLAR                 = 21,
        COUNT                  = 22,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::DoorBlock::DoorType> mType;
    // NOLINTEND

public:
    // prevent constructor by default
    DoorBlock();

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~DoorBlock();

    virtual ::Block const* getNextBlockPermutation(::Block const&) const;

    virtual ::AABB getCollisionShape(::Block const&, ::IConstBlockSource const&, ::BlockPos const&, ::optional_ref<const GetCollisionShapeInterface>) const;

    virtual ::AABB const& getOutline(::Block const&, ::IConstBlockSource const&, ::BlockPos const&, ::AABB&) const;

    virtual ::AABB const& getVisualShapeInWorld(::Block const&, ::IConstBlockSource const&, ::BlockPos const&, ::AABB&) const;

    virtual bool getLiquidClipVolume(::Block const&, ::BlockSource&, ::BlockPos const&, ::AABB&) const;

    virtual bool canFillAtPos(::BlockSource&, ::BlockPos const&, ::Block const&) const;

    virtual void onFillBlock(::BlockSource&, ::BlockPos const&, ::Block const&) const;

    virtual bool checkIsPathable(::Actor&, ::BlockPos const&, ::BlockPos const&) const;

    virtual bool mayPlace(::BlockSource&, ::BlockPos const&) const;

    virtual void neighborChanged(::BlockSource&, ::BlockPos const&, ::BlockPos const&) const;

    virtual bool getSecondPart(::IConstBlockSource const&, ::BlockPos const&, ::BlockPos&) const;

    virtual ::Block const* playerWillDestroy(::Player&, ::BlockPos const&, ::Block const&) const;

    virtual ::ItemInstance asItemInstance(::Block const&, ::BlockActor const*) const;

    virtual int getVariant(::Block const&) const;

    virtual bool isInteractiveBlock() const;

    virtual bool canSurvive(::BlockSource&, ::BlockPos const&) const;

    virtual void _onHitByActivatingAttack(::BlockSource&, ::BlockPos const&, ::Actor*) const;

    virtual void _useDoor(::BlockEvents::BlockPlayerInteractEvent&) const;
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI DoorBlock(std::string const&, int, ::Material const&, ::DoorBlock::DoorType);

    MCNAPI void _onRedstoneUpdate(::BlockEvents::BlockRedstoneUpdateEvent&) const;

    MCNAPI ::Direction::Type getBlockedDirection(::IConstBlockSource const&, ::BlockPos const&) const;

    MCNAPI ::Direction::Type getDir(::IConstBlockSource const&, ::BlockPos const&) const;

    MCNAPI float getDoorThickness() const;

    MCNAPI bool hasRightHinge(::IConstBlockSource const&, ::BlockPos const&) const;

    MCNAPI bool isToggled(::IConstBlockSource const&, ::BlockPos const&) const;

    MCNAPI void setToggled(::BlockSource&, ::BlockPos const&, ::Actor*, bool) const;

    MCNAPI bool shouldFlipTexture(::BlockSource&, ::BlockPos const&, uchar) const;

    MCNAPI void tick(::BlockEvents::BlockQueuedTickEvent&) const;

    MCNAPI void use(::BlockEvents::BlockPlayerInteractEvent&) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static bool _isDoorToggled(::IConstBlockSource const&, ::BlockType const&, ::BlockPos const&);

    MCNAPI static void _onSetupRedstoneComponent(::BlockSource&, ::BlockPos const&);

    MCNAPI static void
    getDoorBlocks(::IConstBlockSource const&, ::BlockType const&, ::BlockPos const&, ::Block const*&, ::Block const*&);

    MCNAPI static uchar getDoorFacing(int);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::string const&, int, ::Material const&, ::DoorBlock::DoorType);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::Block const* $getNextBlockPermutation(::Block const&) const;

    MCNAPI ::AABB $getCollisionShape(
        ::Block const&,
        ::IConstBlockSource const&,
        ::BlockPos const&,
        ::optional_ref<const GetCollisionShapeInterface>
    ) const;

    MCNAPI ::AABB const& $getOutline(::Block const&, ::IConstBlockSource const&, ::BlockPos const&, ::AABB&) const;

    MCNAPI ::AABB const&
    $getVisualShapeInWorld(::Block const&, ::IConstBlockSource const&, ::BlockPos const&, ::AABB&) const;

    MCNAPI bool $getLiquidClipVolume(::Block const&, ::BlockSource&, ::BlockPos const&, ::AABB&) const;

    MCNAPI bool $canFillAtPos(::BlockSource&, ::BlockPos const&, ::Block const&) const;

    MCNAPI void $onFillBlock(::BlockSource&, ::BlockPos const&, ::Block const&) const;

    MCNAPI bool $checkIsPathable(::Actor&, ::BlockPos const&, ::BlockPos const&) const;

    MCNAPI bool $mayPlace(::BlockSource&, ::BlockPos const&) const;

    MCNAPI void $neighborChanged(::BlockSource&, ::BlockPos const&, ::BlockPos const&) const;

    MCNAPI bool $getSecondPart(::IConstBlockSource const&, ::BlockPos const&, ::BlockPos&) const;

    MCNAPI ::Block const* $playerWillDestroy(::Player&, ::BlockPos const&, ::Block const&) const;

    MCNAPI ::ItemInstance $asItemInstance(::Block const&, ::BlockActor const*) const;

    MCNAPI int $getVariant(::Block const&) const;

    MCNAPI bool $isInteractiveBlock() const;

    MCNAPI bool $canSurvive(::BlockSource&, ::BlockPos const&) const;

    MCNAPI void $_onHitByActivatingAttack(::BlockSource&, ::BlockPos const&, ::Actor*) const;

    MCNAPI void $_useDoor(::BlockEvents::BlockPlayerInteractEvent&) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
