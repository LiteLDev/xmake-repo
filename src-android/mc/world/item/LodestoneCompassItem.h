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
class LodestoneBlockActor;
class LodestoneCompassComponent;
class Mob;
class PositionTrackingId;
class Vec3;
struct ActorUniqueID;
struct DimensionType;
namespace PositionTrackingDB { class PositionTrackingDBServer; }
namespace PositionTrackingDB { class TrackingRecord; }
// clang-format on

class LodestoneCompassItem : public ::AbstractCompassItem {
public:
    // prevent constructor by default
    LodestoneCompassItem();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~LodestoneCompassItem();

    virtual int getAnimationFrameFor(::Mob*, bool, ::ItemStack const*, bool) const;

    virtual ::InteractionResult _useOn(::ItemStack&, ::Actor&, ::BlockPos, uchar, ::Vec3 const&) const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI LodestoneCompassItem(std::string const&, int);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::LodestoneCompassComponent* _tryGetOrAddComponent(
        ::PositionTrackingDB::TrackingRecord*,
        std::variant<ActorUniqueID, std::pair<BlockPos, DimensionType>> const&
    );

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
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI int $getAnimationFrameFor(::Mob*, bool, ::ItemStack const*, bool) const;

    MCNAPI ::InteractionResult $_useOn(::ItemStack&, ::Actor&, ::BlockPos, uchar, ::Vec3 const&) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
