#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/Flip.h"
#include "mc/world/level/block/FaceDirectionalActorBlock.h"

// auto generated forward declare list
// clang-format off
class Actor;
class Block;
class BlockPos;
class JigsawBlockInfo;
class Vec3;
namespace BlockEvents { class BlockPlayerInteractEvent; }
// clang-format on

class JigsawBlock : public ::FaceDirectionalActorBlock {
public:
    // prevent constructor by default
    JigsawBlock();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~JigsawBlock();

    virtual ::Block const& getPlacementBlock(::Actor const&, ::BlockPos const&, uchar, ::Vec3 const&, int) const;

    virtual ::Block const& getRenderBlock() const;

    virtual uchar getMappedFace(uchar, ::Block const&) const;

    virtual ::Flip getFaceFlip(uchar, ::Block const&) const;

    virtual bool isInteractiveBlock() const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI JigsawBlock(std::string const&, int);

    MCNAPI void use(::BlockEvents::BlockPlayerInteractEvent&) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static bool canAttach(::JigsawBlockInfo const&, ::JigsawBlockInfo const&);
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

    MCNAPI ::Block const& $getRenderBlock() const;

    MCNAPI uchar $getMappedFace(uchar, ::Block const&) const;

    MCNAPI ::Flip $getFaceFlip(uchar, ::Block const&) const;

    MCNAPI bool $isInteractiveBlock() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
