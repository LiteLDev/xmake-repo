#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/optional_ref.h"
#include "mc/world/level/block/AnvilDamage.h"
#include "mc/world/level/block/BlockSupportType.h"
#include "mc/world/level/block/FallingBlock.h"

// auto generated forward declare list
// clang-format off
class AABB;
class BaseGameVersion;
class Block;
class BlockPos;
class BlockSource;
class GetCollisionShapeInterface;
class HashedString;
class IConstBlockSource;
class IRandom;
class Player;
struct BlockAnimateTickData;
namespace BlockEvents { class BlockPlayerInteractEvent; }
namespace mce { class Color; }
// clang-format on

class AnvilBlock : public ::FallingBlock {
public:
    // prevent constructor by default
    AnvilBlock();

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~AnvilBlock();

    virtual ::AABB getCollisionShape(::Block const&, ::IConstBlockSource const&, ::BlockPos const&, ::optional_ref<const GetCollisionShapeInterface>) const;

    virtual ::AABB const& getOutline(::Block const&, ::IConstBlockSource const&, ::BlockPos const&, ::AABB&) const;

    virtual bool canProvideSupport(::Block const&, uchar, ::BlockSupportType) const;

    virtual bool isCraftingBlock() const;

    virtual bool breaksFallingBlocks(::Block const&, ::BaseGameVersion const) const;

    virtual void animateTick(::BlockAnimateTickData const&) const;

    virtual bool isInteractiveBlock() const;

    virtual ::mce::Color getDustColor(::Block const&) const;

    virtual std::string getDustParticleName(::Block const&) const;

    virtual bool falling() const;

    virtual void onLand(::BlockSource&, ::BlockPos const&) const;
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI AnvilBlock(std::string const&, int);

    MCNAPI void use(::BlockEvents::BlockPlayerInteractEvent&) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::AABB const& _getShape(::BlockPos const&, ::Block const&, ::AABB&);

    MCNAPI static int getDamageForName(::HashedString const&);

    MCNAPI static ::HashedString const& getNameForDamage(int);

    MCNAPI static void tryApplyCraftingDamage(::Player const&, ::BlockPos const&, ::IRandom&);
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

    MCNAPI bool $isCraftingBlock() const;

    MCNAPI bool $breaksFallingBlocks(::Block const&, ::BaseGameVersion const) const;

    MCNAPI void $animateTick(::BlockAnimateTickData const&) const;

    MCNAPI bool $isInteractiveBlock() const;

    MCNAPI ::mce::Color $getDustColor(::Block const&) const;

    MCNAPI std::string $getDustParticleName(::Block const&) const;

    MCNAPI bool $falling() const;

    MCNAPI void $onLand(::BlockSource&, ::BlockPos const&) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
