#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/Flip.h"

// auto generated forward declare list
// clang-format off
class Actor;
class Block;
class BlockPos;
class Vec3;
struct Brightness;
namespace BlockEvents { class BlockPlayerInteractEvent; }
// clang-format on

class VaultBlock : public ::ActorBlock {
public:
    // prevent constructor by default
    VaultBlock();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~VaultBlock();

    virtual ::Block const& getPlacementBlock(::Actor const&, ::BlockPos const&, uchar, ::Vec3 const&, int) const;

    virtual int getVariant(::Block const&) const;

    virtual ::Block const& getRenderBlock() const;

    virtual uchar getMappedFace(uchar, ::Block const&) const;

    virtual ::Flip getFaceFlip(uchar, ::Block const&) const;

    virtual bool isInteractiveBlock() const;

    virtual ::Brightness getLightEmission(::Block const&) const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI VaultBlock(std::string const&, int);

    MCNAPI void use(::BlockEvents::BlockPlayerInteractEvent&) const;
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
    MCNAPI ::Block const& $getPlacementBlock(::Actor const&, ::BlockPos const&, uchar, ::Vec3 const&, int) const;

    MCNAPI int $getVariant(::Block const&) const;

    MCNAPI ::Block const& $getRenderBlock() const;

    MCNAPI uchar $getMappedFace(uchar, ::Block const&) const;

    MCNAPI ::Flip $getFaceFlip(uchar, ::Block const&) const;

    MCNAPI bool $isInteractiveBlock() const;

    MCNAPI ::Brightness $getLightEmission(::Block const&) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
