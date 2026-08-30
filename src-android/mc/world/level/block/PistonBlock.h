#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/Direction.h"
#include "mc/world/level/block/BlockSupportType.h"

// auto generated forward declare list
// clang-format off
class Actor;
class BaseGameVersion;
class Block;
class BlockPos;
class BlockSource;
class IConstBlockSource;
class Vec3;
namespace BlockEvents { class BlockPlaceEvent; }
namespace BlockEvents { class BlockQueuedTickEvent; }
// clang-format on

class PistonBlock : public ::ActorBlock {
public:
    // PistonBlock inner types define
    enum class Type : int {
        Normal = 0,
        Sticky = 1,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::PistonBlock::Type> mType;
    // NOLINTEND

public:
    // prevent constructor by default
    PistonBlock();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~PistonBlock();

    virtual bool canProvideSupport(::Block const&, uchar, ::BlockSupportType) const;

    virtual bool isValidAuxValue(int) const;

    virtual bool shouldConnectToRedstone(::BlockSource&, ::BlockPos const&, ::Direction::Type) const;

    virtual void setupRedstoneComponent(::BlockSource&, ::BlockPos const&) const;

    virtual bool breaksFallingBlocks(::Block const&, ::BaseGameVersion const) const;

    virtual void neighborChanged(::BlockSource&, ::BlockPos const&, ::BlockPos const&) const;

    virtual bool getSecondPart(::IConstBlockSource const&, ::BlockPos const&, ::BlockPos&) const;

    virtual ::Block const& getPlacementBlock(::Actor const&, ::BlockPos const&, uchar, ::Vec3 const&, int) const;

    virtual bool pushesUpFallingBlocks() const;

    virtual int getVariant(::Block const&) const;

    virtual uchar getMappedFace(uchar, ::Block const&) const;

    virtual bool canSurvive(::BlockSource&, ::BlockPos const&) const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI PistonBlock(std::string const&, int, ::PistonBlock::Type);

    MCNAPI void onPlace(::BlockEvents::BlockPlaceEvent&) const;

    MCNAPI void tick(::BlockEvents::BlockQueuedTickEvent&) const;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::std::add_lvalue_reference_t<::BlockPos const[6]> ARM_DIRECTION_OFFSETS();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::string const&, int, ::PistonBlock::Type);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $canProvideSupport(::Block const&, uchar, ::BlockSupportType) const;

    MCNAPI bool $isValidAuxValue(int) const;

    MCNAPI bool $shouldConnectToRedstone(::BlockSource&, ::BlockPos const&, ::Direction::Type) const;

    MCNAPI void $setupRedstoneComponent(::BlockSource&, ::BlockPos const&) const;

    MCNAPI bool $breaksFallingBlocks(::Block const&, ::BaseGameVersion const) const;

    MCNAPI void $neighborChanged(::BlockSource&, ::BlockPos const&, ::BlockPos const&) const;

    MCNAPI bool $getSecondPart(::IConstBlockSource const&, ::BlockPos const&, ::BlockPos&) const;

    MCNAPI ::Block const& $getPlacementBlock(::Actor const&, ::BlockPos const&, uchar, ::Vec3 const&, int) const;

    MCNAPI bool $pushesUpFallingBlocks() const;

    MCNAPI int $getVariant(::Block const&) const;

    MCNAPI uchar $getMappedFace(uchar, ::Block const&) const;

    MCNAPI bool $canSurvive(::BlockSource&, ::BlockPos const&) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
