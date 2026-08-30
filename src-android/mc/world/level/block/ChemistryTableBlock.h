#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Actor;
class BaseGameVersion;
class Block;
class BlockPos;
class BlockSource;
class ChemistryTableBlockActor;
class HashedString;
class Player;
class Vec3;
namespace BlockEvents { class BlockPlayerInteractEvent; }
// clang-format on

class ChemistryTableBlock : public ::ActorBlock {
public:
    // prevent constructor by default
    ChemistryTableBlock();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ChemistryTableBlock();

    virtual bool isCraftingBlock() const;

    virtual bool isLavaBlocking() const;

    virtual void onFillBlock(::BlockSource&, ::BlockPos const&, ::Block const&) const;

    virtual bool canBeUsedInCommands(::BaseGameVersion const&) const;

    virtual ::Block const& getPlacementBlock(::Actor const&, ::BlockPos const&, uchar, ::Vec3 const&, int) const;

    virtual uchar getMappedFace(uchar, ::Block const&) const;

    virtual void onRemove(::BlockSource&, ::BlockPos const&) const;

    virtual bool isInteractiveBlock() const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ChemistryTableBlock(std::string const&, int);

    MCNAPI void use(::BlockEvents::BlockPlayerInteractEvent&) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static bool isUIValidForPlayer(::BlockPos const&, ::Player&, float, ::HashedString const&);
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
    MCNAPI bool $isCraftingBlock() const;

    MCNAPI bool $isLavaBlocking() const;

    MCNAPI void $onFillBlock(::BlockSource&, ::BlockPos const&, ::Block const&) const;

    MCNAPI bool $canBeUsedInCommands(::BaseGameVersion const&) const;

    MCNAPI ::Block const& $getPlacementBlock(::Actor const&, ::BlockPos const&, uchar, ::Vec3 const&, int) const;

    MCNAPI uchar $getMappedFace(uchar, ::Block const&) const;

    MCNAPI void $onRemove(::BlockSource&, ::BlockPos const&) const;

    MCNAPI bool $isInteractiveBlock() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
