#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/world/Direction.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/world/level/block/BlockType.h"

// auto generated forward declare list
// clang-format off
class Actor;
class Block;
class BlockActor;
class BlockPos;
class BlockSource;
class IConstBlockSource;
class ItemInstance;
class Player;
#if defined(LL_PLAT_A) // @header-generator platform
class Vec3;
#else // @header-generator platform
#endif // @header-generator platform
namespace BlockEvents { class BlockEntityFallOnEvent; }
namespace BlockEvents { class BlockPlaceEvent; }
namespace BlockEvents { class BlockPlayerInteractEvent; }
namespace mce { class Color; }
// clang-format on

class BedBlock : public ::BlockType {
public:
    // prevent constructor by default
    BedBlock();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~BedBlock();
#else // @header-generator platform
    virtual bool isInteractiveBlock() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Block const* getNextBlockPermutation(::Block const&) const;
#else // @header-generator platform
    virtual int getVariant(::Block const& block) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool canFillAtPos(::BlockSource&, ::BlockPos const&, ::Block const&) const;
#else // @header-generator platform
    virtual uchar getMappedFace(uchar face, ::Block const& block) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Block const& sanitizeFillBlock(::Block const&) const;
#else // @header-generator platform
    virtual ::Block const* getNextBlockPermutation(::Block const& currentBlock) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void onFillBlock(::BlockSource&, ::BlockPos const&, ::Block const&) const;
#else // @header-generator platform
    virtual ::Block const* playerWillDestroy(::Player& player, ::BlockPos const& pos, ::Block const& block) const
        /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool checkIsPathable(::Actor&, ::BlockPos const&, ::BlockPos const&) const;
#else // @header-generator platform
    virtual void neighborChanged(::BlockSource& region, ::BlockPos const& pos, ::BlockPos const& neighborPos) const
        /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void neighborChanged(::BlockSource&, ::BlockPos const&, ::BlockPos const&) const;
#else // @header-generator platform
    virtual ::ItemInstance asItemInstance(::Block const&, ::BlockActor const* blockActor) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool getSecondPart(::IConstBlockSource const&, ::BlockPos const&, ::BlockPos&) const;
#else // @header-generator platform
    virtual bool getSecondPart(::IConstBlockSource const& region, ::BlockPos const& pos, ::BlockPos& out) const
        /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Block const* playerWillDestroy(::Player&, ::BlockPos const&, ::Block const&) const;
#else // @header-generator platform
    virtual bool canFillAtPos(::BlockSource& region, ::BlockPos const& pos, ::Block const& block) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::ItemInstance asItemInstance(::Block const&, ::BlockActor const*) const;
#else // @header-generator platform
    virtual ::Block const& sanitizeFillBlock(::Block const& block) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool canSpawnAt(::BlockSource const&, ::BlockPos const&) const;
#else // @header-generator platform
    virtual void onFillBlock(::BlockSource& region, ::BlockPos const& pos, ::Block const& block) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual int telemetryVariant(::BlockSource&, ::BlockPos const&) const;
#else // @header-generator platform
    virtual int telemetryVariant(::BlockSource& region, ::BlockPos const& pos) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual int getVariant(::Block const&) const;
#else // @header-generator platform
    virtual bool checkIsPathable(::Actor& entity, ::BlockPos const& lastPathPos, ::BlockPos const& pathPos) const
        /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual uchar getMappedFace(uchar, ::Block const&) const;
#else // @header-generator platform
    virtual bool canSpawnAt(::BlockSource const& region, ::BlockPos const& pos) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool isInteractiveBlock() const;
#else // @header-generator platform
    virtual ::mce::Color getMapColor(::BlockSource& source, ::BlockPos const& pos, ::Block const& block) const
        /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual float getBounciness(::IConstBlockSource const&, ::BlockPos const&) const;

    virtual ::mce::Color getMapColor(::BlockSource&, ::BlockPos const&, ::Block const&) const;
#else // @header-generator platform
    virtual float getBounciness(::IConstBlockSource const&, ::BlockPos const&) const /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI BedBlock(std::string const&, int);
#else // @header-generator platform
    MCAPI BedBlock(::std::string const& nameId, int id);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void onFallOn(::BlockEvents::BlockEntityFallOnEvent&) const;
#else // @header-generator platform
    MCAPI void onFallOn(::BlockEvents::BlockEntityFallOnEvent& eventData) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void onPlace(::BlockEvents::BlockPlaceEvent&) const;
#else // @header-generator platform
    MCFOLD void onPlace(::BlockEvents::BlockPlaceEvent& eventData) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void use(::BlockEvents::BlockPlayerInteractEvent&) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static std::optional<BlockPos>
    findWakeupPosition(::BlockSource const&, ::BlockPos const&, std::optional<Vec3> const&);

    MCNAPI static float getSleepRotation(::Block const&);

    MCNAPI static bool isBedBlock(::BlockType const&);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ushort const& HEAD_PIECE_DATA();

    MCNAPI static ushort const& OCCUPIED_DATA();
#else // @header-generator platform
    MCAPI void use(::BlockEvents::BlockPlayerInteractEvent& eventData) const;
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(std::string const&, int);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI void* $ctor(::std::string const& nameId, int id);
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Block const* $getNextBlockPermutation(::Block const&) const;
#else // @header-generator platform
    MCFOLD bool $isInteractiveBlock() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $canFillAtPos(::BlockSource&, ::BlockPos const&, ::Block const&) const;
#else // @header-generator platform
    MCAPI int $getVariant(::Block const& block) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Block const& $sanitizeFillBlock(::Block const&) const;
#else // @header-generator platform
    MCAPI uchar $getMappedFace(uchar face, ::Block const& block) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $onFillBlock(::BlockSource&, ::BlockPos const&, ::Block const&) const;
#else // @header-generator platform
    MCFOLD ::Block const* $getNextBlockPermutation(::Block const& currentBlock) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $checkIsPathable(::Actor&, ::BlockPos const&, ::BlockPos const&) const;
#else // @header-generator platform
    MCAPI ::Block const* $playerWillDestroy(::Player& player, ::BlockPos const& pos, ::Block const& block) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $neighborChanged(::BlockSource&, ::BlockPos const&, ::BlockPos const&) const;
#else // @header-generator platform
    MCFOLD void $neighborChanged(::BlockSource& region, ::BlockPos const& pos, ::BlockPos const& neighborPos) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $getSecondPart(::IConstBlockSource const&, ::BlockPos const&, ::BlockPos&) const;
#else // @header-generator platform
    MCAPI ::ItemInstance $asItemInstance(::Block const&, ::BlockActor const* blockActor) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Block const* $playerWillDestroy(::Player&, ::BlockPos const&, ::Block const&) const;
#else // @header-generator platform
    MCFOLD bool $getSecondPart(::IConstBlockSource const& region, ::BlockPos const& pos, ::BlockPos& out) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::ItemInstance $asItemInstance(::Block const&, ::BlockActor const*) const;
#else // @header-generator platform
    MCAPI bool $canFillAtPos(::BlockSource& region, ::BlockPos const& pos, ::Block const& block) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $canSpawnAt(::BlockSource const&, ::BlockPos const&) const;
#else // @header-generator platform
    MCFOLD ::Block const& $sanitizeFillBlock(::Block const& block) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI int $telemetryVariant(::BlockSource&, ::BlockPos const&) const;
#else // @header-generator platform
    MCFOLD void $onFillBlock(::BlockSource& region, ::BlockPos const& pos, ::Block const& block) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI int $getVariant(::Block const&) const;
#else // @header-generator platform
    MCAPI int $telemetryVariant(::BlockSource& region, ::BlockPos const& pos) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI uchar $getMappedFace(uchar, ::Block const&) const;
#else // @header-generator platform
    MCAPI bool $checkIsPathable(::Actor& entity, ::BlockPos const& lastPathPos, ::BlockPos const& pathPos) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $isInteractiveBlock() const;
#else // @header-generator platform
    MCFOLD bool $canSpawnAt(::BlockSource const& region, ::BlockPos const& pos) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI float $getBounciness(::IConstBlockSource const&, ::BlockPos const&) const;
#else // @header-generator platform
    MCAPI ::mce::Color $getMapColor(::BlockSource& source, ::BlockPos const& pos, ::Block const& block) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::mce::Color $getMapColor(::BlockSource&, ::BlockPos const&, ::Block const&) const;
#else // @header-generator platform
    MCAPI float $getBounciness(::IConstBlockSource const&, ::BlockPos const&) const;


#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void** $vftable();
#else // @header-generator platform
    MCAPI static void** $vftable();
#endif // @header-generator platform
    // NOLINTEND
};
