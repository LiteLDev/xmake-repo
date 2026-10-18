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
#if defined(LL_PLAT_A) // @header-generator platform
class Material;
#else // @header-generator platform
#endif // @header-generator platform
namespace BlockEvents { class BlockEntityFallOnEvent; }
// clang-format on

class HoneyBlock : public ::BlockType {
public:
#if defined(LL_PLAT_A) // @header-generator platform
    // prevent constructor by default
    HoneyBlock();

public:
#else // @header-generator platform
#endif // @header-generator platform
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    virtual ~HoneyBlock();
#else // @header-generator platform
    virtual ::AABB getCollisionShape(
        ::Block const&,
        ::IConstBlockSource const&,
        ::BlockPos const& pos,
        ::optional_ref<::GetCollisionShapeInterface const>
    ) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::AABB getCollisionShape(::Block const&, ::IConstBlockSource const&, ::BlockPos const&, ::optional_ref<const GetCollisionShapeInterface>) const;
#else // @header-generator platform
    virtual void onStandOn(::EntityContext& entity, ::BlockPos const& pos) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::AABB const& getVisualShape(::Block const&, ::AABB&) const;
#else // @header-generator platform
    virtual float getBounciness(::IConstBlockSource const&, ::BlockPos const&) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void onStandOn(::EntityContext&, ::BlockPos const&) const;
#else // @header-generator platform
    virtual int getExtraRenderLayers() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual int getExtraRenderLayers() const;

    virtual float getBounciness(::IConstBlockSource const&, ::BlockPos const&) const;
    // clang-format on
#else // @header-generator platform
    virtual ::AABB const& getVisualShape(::Block const&, ::AABB& bufferAABB) const /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI HoneyBlock(std::string const&, int, ::Material const&);

    MCNAPI void onFallOn(::BlockEvents::BlockEntityFallOnEvent&) const;
#else // @header-generator platform
    MCAPI void onFallOn(::BlockEvents::BlockEntityFallOnEvent& eventData) const;
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    MCAPI static void triggerSlidingDownEffects(::Actor& entity, ::BlockPos const& pos, ::Block const& honeyBlock);
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::AABB $getCollisionShape(
#else // @header-generator platform
    MCAPI ::AABB $getCollisionShape(
#endif // @header-generator platform
        ::Block const&,
        ::IConstBlockSource const&,
#if defined(LL_PLAT_A) // @header-generator platform
        ::BlockPos const&,
        ::optional_ref<const GetCollisionShapeInterface>
#else // @header-generator platform
        ::BlockPos const& pos,
        ::optional_ref<::GetCollisionShapeInterface const>
#endif // @header-generator platform
    ) const;

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::AABB const& $getVisualShape(::Block const&, ::AABB&) const;
#else // @header-generator platform
    MCFOLD void $onStandOn(::EntityContext& entity, ::BlockPos const& pos) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $onStandOn(::EntityContext&, ::BlockPos const&) const;
#else // @header-generator platform
    MCFOLD float $getBounciness(::IConstBlockSource const&, ::BlockPos const&) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI int $getExtraRenderLayers() const;
#else // @header-generator platform
    MCFOLD int $getExtraRenderLayers() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI float $getBounciness(::IConstBlockSource const&, ::BlockPos const&) const;
#else // @header-generator platform
    MCAPI ::AABB const& $getVisualShape(::Block const&, ::AABB& bufferAABB) const;


#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void** $vftable();
#else // @header-generator platform
    MCAPI static void** $vftable();
#endif // @header-generator platform
    // NOLINTEND
};
