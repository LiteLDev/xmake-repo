#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/optional_ref.h"
#include "mc/world/level/block/BlockRenderLayer.h"

// auto generated forward declare list
// clang-format off
class AABB;
class Actor;
class Block;
class BlockActor;
class BlockPos;
class BlockSource;
class GetCollisionShapeInterface;
class IConstBlockSource;
class ItemInstance;
struct BlockAnimateTickData;
namespace BlockEvents { class BlockEntityFallOnEvent; }
// clang-format on

class EndPortalBlock : public ::ActorBlock {
public:
    // prevent constructor by default
    EndPortalBlock();

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~EndPortalBlock();

    virtual bool addCollisionShapes(::Block const&, ::IConstBlockSource const&, ::BlockPos const&, ::AABB const*, std::vector<AABB>&, ::optional_ref<const GetCollisionShapeInterface>) const;

    virtual bool isLavaBlocking() const;

    virtual bool canRenderSelectionOverlay(::BlockRenderLayer) const;

    virtual ::ItemInstance asItemInstance(::Block const&, ::BlockActor const*) const;

    virtual void animateTickBedrockLegacy(::BlockAnimateTickData const&) const;

    virtual void entityInside(::BlockSource&, ::BlockPos const&, ::Actor&) const;
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI EndPortalBlock(std::string const&, int);

    MCNAPI void onFallOn(::BlockEvents::BlockEntityFallOnEvent&) const;
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

    MCNAPI bool $isLavaBlocking() const;

    MCNAPI bool $canRenderSelectionOverlay(::BlockRenderLayer) const;

    MCNAPI ::ItemInstance $asItemInstance(::Block const&, ::BlockActor const*) const;

    MCNAPI void $animateTickBedrockLegacy(::BlockAnimateTickData const&) const;

    MCNAPI void $entityInside(::BlockSource&, ::BlockPos const&, ::Actor&) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
