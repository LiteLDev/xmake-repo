#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/brstd/function_ref.h"
#include "mc/world/level/block/BlockType.h"

// auto generated forward declare list
// clang-format off
class Actor;
class Block;
class BlockPos;
class BlockSource;
class Material;
class Vec3;
struct BlockAnimateTickData;
struct Brightness;
namespace BlockEvents { class BlockQueuedTickEvent; }
// clang-format on

class AbstractCandleBlock : public ::BlockType {
public:
    // prevent constructor by default
    AbstractCandleBlock();

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~AbstractCandleBlock();

    virtual bool isLavaBlocking() const;

    virtual void neighborChanged(::BlockSource&, ::BlockPos const&, ::BlockPos const&) const;

    virtual void animateTickBedrockLegacy(::BlockAnimateTickData const&) const;

    virtual bool isInteractiveBlock() const;

    virtual ::Brightness getLightEmission(::Block const&) const;

    virtual void _onHitByActivatingAttack(::BlockSource&, ::BlockPos const&, ::Actor*) const;

    virtual void entityInside(::BlockSource&, ::BlockPos const&, ::Actor&) const;

    virtual int _getNumCandles(::Block const&) const;

    virtual void _iterateCandles(::Block const&, ::BlockPos const&, ::brstd::function_ref<void (const Vec3&, int)>) const;

    virtual void _tryLightOnFire(::BlockSource&, ::BlockPos const&, ::Actor*) const;
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI AbstractCandleBlock(std::string const&, int, ::Material const&);

    MCNAPI void _addExtinguishEffects(::Block const&, ::BlockSource&, ::BlockPos const&) const;

    MCNAPI void _checkForWaterlogging(::BlockSource&, ::BlockPos const&) const;

    MCNAPI void _extinguish(::Actor*, ::Block const&, ::BlockSource&, ::BlockPos const&) const;

    MCNAPI void tick(::BlockEvents::BlockQueuedTickEvent&) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static bool _canBeLit(::Block const&, ::BlockSource&, ::BlockPos const&);

    MCNAPI static bool _isLit(::Block const&);

    MCNAPI static void _setLit(::Block const&, ::BlockSource&, ::BlockPos const&, bool const);
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
    MCNAPI bool $isLavaBlocking() const;

    MCNAPI void $neighborChanged(::BlockSource&, ::BlockPos const&, ::BlockPos const&) const;

    MCNAPI void $animateTickBedrockLegacy(::BlockAnimateTickData const&) const;

    MCNAPI bool $isInteractiveBlock() const;

    MCNAPI ::Brightness $getLightEmission(::Block const&) const;

    MCNAPI void $_onHitByActivatingAttack(::BlockSource&, ::BlockPos const&, ::Actor*) const;

    MCNAPI void $entityInside(::BlockSource&, ::BlockPos const&, ::Actor&) const;

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
