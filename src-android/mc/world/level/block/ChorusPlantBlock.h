#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/optional_ref.h"
#include "mc/world/level/block/BlockSupportType.h"
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
namespace BlockEvents { class BlockQueuedTickEvent; }
// clang-format on

class ChorusPlantBlock : public ::BlockType {
public:
    // prevent constructor by default
    ChorusPlantBlock();

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~ChorusPlantBlock();

    virtual ::AABB getCollisionShape(::Block const&, ::IConstBlockSource const&, ::BlockPos const&, ::optional_ref<const GetCollisionShapeInterface>) const;

    virtual ::AABB const& getOutline(::Block const&, ::IConstBlockSource const&, ::BlockPos const&, ::AABB&) const;

    virtual bool canProvideSupport(::Block const&, uchar, ::BlockSupportType) const;

    virtual bool isLavaBlocking() const;

    virtual bool checkIsPathable(::Actor&, ::BlockPos const&, ::BlockPos const&) const;

    virtual bool mayPlace(::BlockSource&, ::BlockPos const&) const;

    virtual void neighborChanged(::BlockSource&, ::BlockPos const&, ::BlockPos const&) const;

    virtual bool canSurvive(::BlockSource&, ::BlockPos const&) const;
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ChorusPlantBlock(std::string const&, int);

    MCNAPI ::AABB const& _getShape(::IConstBlockSource const&, ::BlockPos const&, ::AABB&) const;

    MCNAPI bool connectsTo(::IConstBlockSource const&, ::BlockPos const&, ::BlockPos const&) const;

    MCNAPI void tick(::BlockEvents::BlockQueuedTickEvent&) const;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static float const& PLANT_ITEM_DIMENSION();
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
    MCNAPI ::AABB $getCollisionShape(
        ::Block const&,
        ::IConstBlockSource const&,
        ::BlockPos const&,
        ::optional_ref<const GetCollisionShapeInterface>
    ) const;

    MCNAPI ::AABB const& $getOutline(::Block const&, ::IConstBlockSource const&, ::BlockPos const&, ::AABB&) const;

    MCNAPI bool $canProvideSupport(::Block const&, uchar, ::BlockSupportType) const;

    MCNAPI bool $isLavaBlocking() const;

    MCNAPI bool $checkIsPathable(::Actor&, ::BlockPos const&, ::BlockPos const&) const;

    MCNAPI bool $mayPlace(::BlockSource&, ::BlockPos const&) const;

    MCNAPI void $neighborChanged(::BlockSource&, ::BlockPos const&, ::BlockPos const&) const;

    MCNAPI bool $canSurvive(::BlockSource&, ::BlockPos const&) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
