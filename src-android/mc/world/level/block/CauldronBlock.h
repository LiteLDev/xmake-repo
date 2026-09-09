#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/optional_ref.h"
#include "mc/deps/shared_types/legacy/LevelEvent.h"
#include "mc/deps/shared_types/v1_26_20/block/MaterialType.h"
#include "mc/events/MinecraftEventing.h"
#include "mc/world/level/ShapeType.h"
#include "mc/world/level/block/BlockSupportType.h"
#include "mc/world/level/block/CauldronLiquidType.h"

// auto generated forward declare list
// clang-format off
class AABB;
class BaseGameVersion;
class Block;
class BlockActor;
class BlockPos;
class BlockSource;
class CauldronBlockActor;
class GetCollisionShapeInterface;
class HitResult;
class IConstBlockSource;
class ItemInstance;
class ItemStack;
class Level;
class Player;
class Random;
class Vec3;
struct BlockAnimateTickData;
struct Brightness;
namespace BlockEvents { class BlockPlaceEvent; }
namespace BlockEvents { class BlockPlayerInteractEvent; }
namespace BlockEvents { class BlockQueuedTickEvent; }
// clang-format on

class CauldronBlock : public ::ActorBlock {
public:
    // prevent constructor by default
    CauldronBlock();

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~CauldronBlock();

    virtual ::HitResult clip(::Block const&, ::BlockSource const&, ::BlockPos const&, ::Vec3 const&, ::Vec3 const&, ::ShapeType, ::optional_ref<const GetCollisionShapeInterface>) const;

    virtual bool addCollisionShapes(::Block const&, ::IConstBlockSource const&, ::BlockPos const&, ::AABB const*, std::vector<AABB>&, ::optional_ref<const GetCollisionShapeInterface>) const;

    virtual void addAABBs(::Block const&, ::IConstBlockSource const&, ::BlockPos const&, ::AABB const*, std::vector<AABB>&) const;

    virtual bool canProvideSupport(::Block const&, uchar, ::BlockSupportType) const;

    virtual void handlePrecipitation(::BlockSource&, ::BlockPos const&, float, float) const;

    virtual bool breaksFallingBlocks(::Block const&, ::BaseGameVersion const) const;

    virtual void neighborChanged(::BlockSource&, ::BlockPos const&, ::BlockPos const&) const;

    virtual ::ItemInstance asItemInstance(::Block const&, ::BlockActor const*) const;

    virtual bool hasComparatorSignal() const;

    virtual int getComparatorSignal(::BlockSource&, ::BlockPos const&, ::Block const&, uchar) const;

    virtual void animateTickBedrockLegacy(::BlockAnimateTickData const&) const;

    virtual bool isInteractiveBlock() const;

    virtual int getExtraRenderLayers() const;

    virtual ::Brightness getLight(::Block const&) const;

    virtual ::Brightness getLightEmission(::Block const&) const;
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI CauldronBlock(std::string const&, int);

    MCNAPI void _explodeCauldronContents(::BlockSource&, ::BlockPos const&, ushort) const;

    MCNAPI void
    _sendCauldronUsedEventToClient(::Player const&, short, ::MinecraftEventing::POIBlockInteractionType) const;

    MCNAPI void _spawnCauldronEvent(::BlockSource&, ::BlockPos const&, ::SharedTypes::Legacy::LevelEvent) const;

    MCNAPI bool _useDyeableComponent(
        ::ItemStack&,
        ::Player&,
        ::BlockPos const&,
        ::CauldronBlockActor&,
        ::BlockSource&,
        int,
        bool,
        bool,
        bool
    ) const;

    MCNAPI void _useInventory(::Player&, ::ItemStack&, ::ItemStack&, int) const;

    MCNAPI void onPlace(::BlockEvents::BlockPlaceEvent&) const;

    MCNAPI void setLiquidLevel(::BlockSource&, ::BlockPos const&, int, ::CauldronLiquidType const) const;

    MCNAPI void tick(::BlockEvents::BlockQueuedTickEvent&) const;

    MCNAPI void use(::BlockEvents::BlockPlayerInteractEvent&) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static bool
    canReceiveStalactiteDrip(::BlockSource&, ::BlockPos const&, ::SharedTypes::v1_26_20::MaterialType const);

    MCNAPI static int clampLiquidLevel(int);

    MCNAPI static void spawnBubbleParticles(::Level&, ::Vec3 const&, ::Random&, int, int);

    MCNAPI static void spawnLavaParticles(::Level&, ::Vec3 const&, ::Random&, int);

    MCNAPI static void spawnPotionParticles(::Level&, ::Vec3 const&, ::Random&, int, int);

    MCNAPI static void spawnSplashParticles(::Level&, ::Vec3 const&, ::Random&, int, int);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static int const& BASE_WATER_PIXEL();

    MCNAPI static ::BaseGameVersion const& CAULDRON_DOESNT_BREAK_FALLING_BLOCK_VERSION();

    MCNAPI static int const& FILL_LEVEL_PER_DRIP();

    MCNAPI static int const& MAX_FILL_LEVEL();

    MCNAPI static int const& MIN_FILL_LEVEL();

    MCNAPI static int const& PIXEL_PER_LEVEL();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::string const&, int);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::HitResult $clip(
        ::Block const&,
        ::BlockSource const&,
        ::BlockPos const&,
        ::Vec3 const&,
        ::Vec3 const&,
        ::ShapeType,
        ::optional_ref<const GetCollisionShapeInterface>
    ) const;

    MCNAPI bool $addCollisionShapes(
        ::Block const&,
        ::IConstBlockSource const&,
        ::BlockPos const&,
        ::AABB const*,
        std::vector<AABB>&,
        ::optional_ref<const GetCollisionShapeInterface>
    ) const;

    MCNAPI void
    $addAABBs(::Block const&, ::IConstBlockSource const&, ::BlockPos const&, ::AABB const*, std::vector<AABB>&) const;

    MCNAPI bool $canProvideSupport(::Block const&, uchar, ::BlockSupportType) const;

    MCNAPI void $handlePrecipitation(::BlockSource&, ::BlockPos const&, float, float) const;

    MCNAPI bool $breaksFallingBlocks(::Block const&, ::BaseGameVersion const) const;

    MCNAPI void $neighborChanged(::BlockSource&, ::BlockPos const&, ::BlockPos const&) const;

    MCNAPI ::ItemInstance $asItemInstance(::Block const&, ::BlockActor const*) const;

    MCNAPI bool $hasComparatorSignal() const;

    MCNAPI int $getComparatorSignal(::BlockSource&, ::BlockPos const&, ::Block const&, uchar) const;

    MCNAPI void $animateTickBedrockLegacy(::BlockAnimateTickData const&) const;

    MCNAPI bool $isInteractiveBlock() const;

    MCNAPI int $getExtraRenderLayers() const;

    MCNAPI ::Brightness $getLight(::Block const&) const;

    MCNAPI ::Brightness $getLightEmission(::Block const&) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
