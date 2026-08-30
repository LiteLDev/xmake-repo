#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/optional_ref.h"
#include "mc/world/level/block/BlockType.h"

// auto generated forward declare list
// clang-format off
class AABB;
class Actor;
class Block;
class BlockPos;
class EntityContext;
class GetCollisionShapeInterface;
class IConstBlockSource;
class Material;
namespace BlockEvents { class BlockEntityFallOnEvent; }
// clang-format on

class HoneyBlock : public ::BlockType {
public:
    // prevent constructor by default
    HoneyBlock();

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~HoneyBlock();

    virtual ::AABB getCollisionShape(::Block const&, ::IConstBlockSource const&, ::BlockPos const&, ::optional_ref<const GetCollisionShapeInterface>) const;

    virtual ::AABB const& getVisualShape(::Block const&, ::AABB&) const;

    virtual void onStandOn(::EntityContext&, ::BlockPos const&) const;

    virtual int getExtraRenderLayers() const;

    virtual float getBounciness(::IConstBlockSource const&, ::BlockPos const&) const;
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI HoneyBlock(std::string const&, int, ::Material const&);

    MCNAPI void onFallOn(::BlockEvents::BlockEntityFallOnEvent&) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void triggerSlidingDownEffects(::Actor&, ::BlockPos const&, ::Block const&);
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
    MCNAPI ::AABB $getCollisionShape(
        ::Block const&,
        ::IConstBlockSource const&,
        ::BlockPos const&,
        ::optional_ref<const GetCollisionShapeInterface>
    ) const;

    MCNAPI ::AABB const& $getVisualShape(::Block const&, ::AABB&) const;

    MCNAPI void $onStandOn(::EntityContext&, ::BlockPos const&) const;

    MCNAPI int $getExtraRenderLayers() const;

    MCNAPI float $getBounciness(::IConstBlockSource const&, ::BlockPos const&) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
