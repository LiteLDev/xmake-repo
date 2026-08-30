#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/brstd/function_ref.h"
#include "mc/world/level/block/AbstractCandleBlock.h"

// auto generated forward declare list
// clang-format off
class AABB;
class Actor;
class Block;
class BlockActor;
class BlockPos;
class BlockSource;
class ItemInstance;
class Player;
class Vec3;
namespace BlockEvents { class BlockPlayerInteractEvent; }
// clang-format on

class CandleCakeBlock : public ::AbstractCandleBlock {
public:
    // prevent constructor by default
    CandleCakeBlock();

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~CandleCakeBlock();

    virtual ::AABB const& getVisualShape(::Block const&, ::AABB&) const;

    virtual bool isCandleCakeBlock() const;

    virtual bool checkIsPathable(::Actor&, ::BlockPos const&, ::BlockPos const&) const;

    virtual bool mayPlace(::BlockSource&, ::BlockPos const&, uchar) const;

    virtual void neighborChanged(::BlockSource&, ::BlockPos const&, ::BlockPos const&) const;

    virtual ::ItemInstance asItemInstance(::Block const&, ::BlockActor const*) const;

    virtual bool hasComparatorSignal() const;

    virtual int getComparatorSignal(::BlockSource&, ::BlockPos const&, ::Block const&, uchar) const;

    virtual bool canSurvive(::BlockSource&, ::BlockPos const&) const;

    virtual int _getNumCandles(::Block const&) const;

    virtual void _iterateCandles(::Block const&, ::BlockPos const&, ::brstd::function_ref<void (const Vec3&, int)>) const;

    virtual void _tryLightOnFire(::BlockSource&, ::BlockPos const&, ::Actor*) const;
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI CandleCakeBlock(std::string const&, int);

    MCNAPI void use(::BlockEvents::BlockPlayerInteractEvent&) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Block const& getCandleFromCandleCake(::Block const&);

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

    MCNAPI bool $isCandleCakeBlock() const;

    MCNAPI bool $checkIsPathable(::Actor&, ::BlockPos const&, ::BlockPos const&) const;

    MCNAPI bool $mayPlace(::BlockSource&, ::BlockPos const&, uchar) const;

    MCNAPI void $neighborChanged(::BlockSource&, ::BlockPos const&, ::BlockPos const&) const;

    MCNAPI ::ItemInstance $asItemInstance(::Block const&, ::BlockActor const*) const;

    MCNAPI bool $hasComparatorSignal() const;

    MCNAPI int $getComparatorSignal(::BlockSource&, ::BlockPos const&, ::Block const&, uchar) const;

    MCNAPI bool $canSurvive(::BlockSource&, ::BlockPos const&) const;

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
