#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/optional_ref.h"
#include "mc/world/level/block/BlockRenderLayer.h"

// auto generated forward declare list
// clang-format off
class AABB;
class Block;
class BlockActor;
class BlockPos;
class GetCollisionShapeInterface;
class IConstBlockSource;
class ItemInstance;
struct BlockAnimateTickData;
// clang-format on

class EndGatewayBlock : public ::ActorBlock {
public:
    // prevent constructor by default
    EndGatewayBlock();

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~EndGatewayBlock();

    virtual bool addCollisionShapes(::Block const&, ::IConstBlockSource const&, ::BlockPos const&, ::AABB const*, std::vector<AABB>&, ::optional_ref<const GetCollisionShapeInterface>) const;

    virtual bool canRenderSelectionOverlay(::BlockRenderLayer) const;

    virtual ::ItemInstance asItemInstance(::Block const&, ::BlockActor const*) const;

    virtual void animateTickBedrockLegacy(::BlockAnimateTickData const&) const;
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI EndGatewayBlock(std::string const&, int);
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
    MCNAPI bool $addCollisionShapes(
        ::Block const&,
        ::IConstBlockSource const&,
        ::BlockPos const&,
        ::AABB const*,
        std::vector<AABB>&,
        ::optional_ref<const GetCollisionShapeInterface>
    ) const;

    MCNAPI bool $canRenderSelectionOverlay(::BlockRenderLayer) const;

    MCNAPI ::ItemInstance $asItemInstance(::Block const&, ::BlockActor const*) const;

    MCNAPI void $animateTickBedrockLegacy(::BlockAnimateTickData const&) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
