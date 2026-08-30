#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/optional_ref.h"
#include "mc/world/level/block/BlockSupportType.h"
#include "mc/world/level/block/SignBlock.h"

// auto generated forward declare list
// clang-format off
class AABB;
class Actor;
class Block;
class BlockPos;
class BlockSource;
class GetCollisionShapeInterface;
class IConstBlockSource;
class ItemInstance;
// clang-format on

class HangingSignBlock : public ::SignBlock {
public:
    // prevent constructor by default
    HangingSignBlock();

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~HangingSignBlock();

    virtual ::AABB getCollisionShape(::Block const&, ::IConstBlockSource const&, ::BlockPos const&, ::optional_ref<const GetCollisionShapeInterface>) const;

    virtual ::AABB const& getVisualShape(::Block const&, ::AABB&) const;

    virtual bool canProvideSupport(::Block const&, uchar, ::BlockSupportType) const;

    virtual bool checkIsPathable(::Actor&, ::BlockPos const&, ::BlockPos const&) const;

    virtual bool mayPlace(::BlockSource&, ::BlockPos const&, uchar) const;

    virtual bool canSurvive(::BlockSource&, ::BlockPos const&) const;

    virtual float getYRotationInDegrees(::Block const&) const;

    virtual ::ItemInstance _getItemInstance() const;
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI HangingSignBlock(std::string const&, int, bool, ::SignBlock::SignType);

    MCNAPI bool _canAttachTo(::BlockSource&, ::BlockPos const, uchar, uchar) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static bool _isDoubleChainAttached(::Block const&);

    MCNAPI static bool _isHangingSign(::Block const&);

    MCNAPI static bool _isVShapedChainAttached(::Block const&);

    MCNAPI static bool isDoubleChainHangingSign(::Block const&);

    MCNAPI static bool isSideAttachedHangingSign(::Block const&);

    MCNAPI static bool isVShapedHangingSign(::Block const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::string const&, int, bool, ::SignBlock::SignType);
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

    MCNAPI bool $canProvideSupport(::Block const&, uchar, ::BlockSupportType) const;

    MCNAPI bool $checkIsPathable(::Actor&, ::BlockPos const&, ::BlockPos const&) const;

    MCNAPI bool $mayPlace(::BlockSource&, ::BlockPos const&, uchar) const;

    MCNAPI bool $canSurvive(::BlockSource&, ::BlockPos const&) const;

    MCNAPI float $getYRotationInDegrees(::Block const&) const;

    MCNAPI ::ItemInstance $_getItemInstance() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
