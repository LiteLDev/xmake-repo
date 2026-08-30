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
class BlockSource;
class GetCollisionShapeInterface;
class IConstBlockSource;
class Material;
namespace BlockEvents { class BlockQueuedTickEvent; }
// clang-format on

class BasePressurePlateBlock : public ::BlockType {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string> texture;
    // NOLINTEND

public:
    // prevent constructor by default
    BasePressurePlateBlock();

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~BasePressurePlateBlock();

    virtual ::AABB getCollisionShape(::Block const&, ::IConstBlockSource const&, ::BlockPos const&, ::optional_ref<const GetCollisionShapeInterface>) const;

    virtual ::AABB const& getVisualShape(::Block const&, ::AABB&) const;

    virtual bool checkIsPathable(::Actor&, ::BlockPos const&, ::BlockPos const&) const;

    virtual bool mayPlace(::BlockSource&, ::BlockPos const&) const;

    virtual void neighborChanged(::BlockSource&, ::BlockPos const&, ::BlockPos const&) const;

    virtual bool isAttachedTo(::BlockSource&, ::BlockPos const&, ::BlockPos&) const;

    virtual bool shouldTriggerEntityInside(::BlockSource&, ::BlockPos const&, ::Actor&) const;

    virtual int getVariant(::Block const&) const;

    virtual bool canSpawnOn(::Actor*) const;

    virtual bool canSurvive(::BlockSource&, ::BlockPos const&) const;

    virtual void entityInside(::BlockSource&, ::BlockPos const&, ::Actor&) const;

    virtual int getTickDelay() const;

    virtual int getSignalStrength(::BlockSource&, ::BlockPos const&) const = 0;

    virtual int getSignalForData(int) const = 0;

    virtual int getRedstoneSignal(int) const = 0;

    virtual ::AABB const getSensitiveAABB(::BlockPos const&) const;
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI BasePressurePlateBlock(std::string const&, int, ::Material const&);

    MCNAPI void checkPressed(::BlockSource&, ::BlockPos const&, ::Actor*, int, int) const;

    MCNAPI void tick(::BlockEvents::BlockQueuedTickEvent&) const;
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

    MCNAPI bool $checkIsPathable(::Actor&, ::BlockPos const&, ::BlockPos const&) const;

    MCNAPI bool $mayPlace(::BlockSource&, ::BlockPos const&) const;

    MCNAPI void $neighborChanged(::BlockSource&, ::BlockPos const&, ::BlockPos const&) const;

    MCNAPI bool $isAttachedTo(::BlockSource&, ::BlockPos const&, ::BlockPos&) const;

    MCNAPI bool $shouldTriggerEntityInside(::BlockSource&, ::BlockPos const&, ::Actor&) const;

    MCNAPI int $getVariant(::Block const&) const;

    MCNAPI bool $canSpawnOn(::Actor*) const;

    MCNAPI bool $canSurvive(::BlockSource&, ::BlockPos const&) const;

    MCNAPI void $entityInside(::BlockSource&, ::BlockPos const&, ::Actor&) const;

    MCNAPI int $getTickDelay() const;

    MCNAPI ::AABB const $getSensitiveAABB(::BlockPos const&) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
