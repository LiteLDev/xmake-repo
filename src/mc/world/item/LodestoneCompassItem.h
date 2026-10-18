#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/AbstractCompassItem.h"

// auto generated forward declare list
// clang-format off
class Actor;
class BlockPos;
class BlockSource;
class InteractionResult;
class ItemStack;
class ItemStackBase;
class Level;
#if defined(LL_PLAT_A) // @header-generator platform
class LodestoneBlockActor;
#else // @header-generator platform
#endif // @header-generator platform
class LodestoneCompassComponent;
class Mob;
class PositionTrackingId;
class Vec3;
struct ActorUniqueID;
struct DimensionType;
#if defined(LL_PLAT_A) // @header-generator platform
namespace PositionTrackingDB { class PositionTrackingDBServer; }
#else // @header-generator platform
#endif // @header-generator platform
namespace PositionTrackingDB { class TrackingRecord; }
// clang-format on

class LodestoneCompassItem : public ::AbstractCompassItem {
public:
#if defined(LL_PLAT_A) // @header-generator platform
    // prevent constructor by default
    LodestoneCompassItem();

public:
#else // @header-generator platform
#endif // @header-generator platform
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~LodestoneCompassItem();
#else // @header-generator platform
    virtual int getAnimationFrameFor(::Mob* holder, bool, ::ItemStack const* item, bool) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual int getAnimationFrameFor(::Mob*, bool, ::ItemStack const*, bool) const;

    virtual ::InteractionResult _useOn(::ItemStack&, ::Actor&, ::BlockPos, uchar, ::Vec3 const&) const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI LodestoneCompassItem(std::string const&, int);
#else // @header-generator platform
    virtual ::InteractionResult
    _useOn(::ItemStack& item, ::Actor& entity, ::BlockPos pos, uchar face, ::Vec3 const& clickPos) const /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::LodestoneCompassComponent* _tryGetOrAddComponent(
        ::PositionTrackingDB::TrackingRecord*,
        std::variant<ActorUniqueID, std::pair<BlockPos, DimensionType>> const&
    );
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI static ::LodestoneCompassComponent* _tryGetOrAddComponent(
        ::PositionTrackingDB::TrackingRecord*                                            record,
        ::std::variant<::ActorUniqueID, ::std::pair<::BlockPos, ::DimensionType>> const& calcId
    );

    MCAPI static int getCompassFrame(
        ::std::variant<::ActorUniqueID, ::std::pair<::BlockPos, ::DimensionType>>& calcId,
        ::ItemStack const&                                                         item,
        ::Level const&                                                             level,
        ::BlockPos const&                                                          itemPosition,
        ::DimensionType const&                                                     itemDimension
    );

    MCAPI static ::PositionTrackingId getPositionTrackingId(::ItemStackBase const& item);
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static int getCompassFrame(
        std::variant<ActorUniqueID, std::pair<BlockPos, DimensionType>>&,
        ::ItemStack const&,
        ::Level const&,
        ::BlockPos const&,
        ::DimensionType const&
    );

    MCNAPI static ::PositionTrackingId getPositionTrackingId(::ItemStackBase const&);

    MCNAPI static bool linkCompassToLodestone(::ItemStack&, ::BlockSource&, ::BlockPos);
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
#else // @header-generator platform
    MCAPI static bool linkCompassToLodestone(::ItemStack& item, ::BlockSource& region, ::BlockPos pos);
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI int $getAnimationFrameFor(::Mob*, bool, ::ItemStack const*, bool) const;
#else // @header-generator platform
    MCAPI int $getAnimationFrameFor(::Mob* holder, bool, ::ItemStack const* item, bool) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::InteractionResult $_useOn(::ItemStack&, ::Actor&, ::BlockPos, uchar, ::Vec3 const&) const;
#else // @header-generator platform
    MCAPI ::InteractionResult
    $_useOn(::ItemStack& item, ::Actor& entity, ::BlockPos pos, uchar face, ::Vec3 const& clickPos) const;


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
