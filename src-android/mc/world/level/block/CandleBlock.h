#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/brstd/function_ref.h"
#include "mc/world/level/block/AbstractCandleBlock.h"
#include "mc/world/level/block/BlockSupportType.h"

// auto generated forward declare list
// clang-format off
class AABB;
class Actor;
class Block;
class BlockActor;
class BlockPos;
class BlockSource;
class ItemInstance;
class Vec3;
namespace BlockEvents { class BlockPlayerInteractEvent; }
// clang-format on

class CandleBlock : public ::AbstractCandleBlock {
public:
    // prevent constructor by default
    CandleBlock();

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~CandleBlock();

    virtual ::AABB const& getVisualShape(::Block const&, ::AABB&) const;

    virtual bool canProvideSupport(::Block const&, uchar, ::BlockSupportType) const;

    virtual ::ItemInstance asItemInstance(::Block const&, ::BlockActor const*) const;

    virtual bool isInteractiveBlock() const;

    virtual int _getNumCandles(::Block const&) const;

    virtual void _iterateCandles(::Block const&, ::BlockPos const&, ::brstd::function_ref<void (const Vec3&, int)>) const;

    virtual void _tryLightOnFire(::BlockSource&, ::BlockPos const&, ::Actor*) const;
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI CandleBlock(std::string const&, int);

    MCNAPI void use(::BlockEvents::BlockPlayerInteractEvent&) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void _forEachCandle(::Block const&, ::BlockPos const&, ::brstd::function_ref<void(const Vec3&, int)>);

    MCNAPI static bool tryLightFire(::BlockSource&, ::BlockPos const&, ::Actor*);
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
    MCNAPI ::AABB const& $getVisualShape(::Block const&, ::AABB&) const;

    MCNAPI bool $canProvideSupport(::Block const&, uchar, ::BlockSupportType) const;

    MCNAPI ::ItemInstance $asItemInstance(::Block const&, ::BlockActor const*) const;

    MCNAPI bool $isInteractiveBlock() const;

    MCNAPI int $_getNumCandles(::Block const&) const;

    MCNAPI void
    $_iterateCandles(::Block const&, ::BlockPos const&, ::brstd::function_ref<void(const Vec3&, int)>) const;

    MCNAPI void $_tryLightOnFire(::BlockSource&, ::BlockPos const&, ::Actor*) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
