#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/Flip.h"

// auto generated forward declare list
// clang-format off
class Actor;
class Block;
class BlockPos;
class Material;
class Vec3;
// clang-format on

class FaceDirectionalActorBlock : public ::ActorBlock {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>  mHorizontalOnly;
    ::ll::TypedStorage<4, 4, float> mYRotOffset;
    // NOLINTEND

public:
    // prevent constructor by default
    FaceDirectionalActorBlock();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~FaceDirectionalActorBlock();

    virtual ::Block const& getPlacementBlock(::Actor const&, ::BlockPos const&, uchar, ::Vec3 const&, int) const;

    virtual ::Block const& getRenderBlock() const;

    virtual uchar getMappedFace(uchar, ::Block const&) const;

    virtual ::Flip getFaceFlip(uchar, ::Block const&) const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI FaceDirectionalActorBlock(std::string const&, int, ::Material const&, bool, float);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::string const&, int, ::Material const&, bool, float);
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
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
