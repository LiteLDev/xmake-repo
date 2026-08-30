#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/optional_ref.h"
#include "mc/world/level/ShapeType.h"
#include "mc/world/level/block/BlockType.h"

// auto generated forward declare list
// clang-format off
class Block;
class BlockPos;
class BlockSource;
class GetCollisionShapeInterface;
class HitResult;
class Material;
class Vec3;
// clang-format on

class ClientRequestPlaceholderBlock : public ::BlockType {
public:
    // prevent constructor by default
    ClientRequestPlaceholderBlock();

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~ClientRequestPlaceholderBlock();

    virtual ::HitResult clip(::Block const&, ::BlockSource const&, ::BlockPos const&, ::Vec3 const&, ::Vec3 const&, ::ShapeType, ::optional_ref<const GetCollisionShapeInterface>) const;
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ClientRequestPlaceholderBlock(std::string const&, int, ::Material const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::string const&, int, ::Material const&);
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
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
