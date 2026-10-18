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
#if defined(LL_PLAT_A) // @header-generator platform
class Material;
#else // @header-generator platform
#endif // @header-generator platform
class Vec3;
struct BlockAnimateTickData;
struct Brightness;
namespace BlockEvents { class BlockQueuedTickEvent; }
// clang-format on

class AbstractCandleBlock : public ::BlockType {
public:
#if defined(LL_PLAT_A) // @header-generator platform
    // prevent constructor by default
    AbstractCandleBlock();

public:
#else // @header-generator platform
#endif // @header-generator platform
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    virtual ~AbstractCandleBlock();
#else // @header-generator platform
    virtual bool isInteractiveBlock() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool isLavaBlocking() const;
#else // @header-generator platform
    virtual bool isLavaBlocking() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void neighborChanged(::BlockSource&, ::BlockPos const&, ::BlockPos const&) const;
#else // @header-generator platform
    virtual void neighborChanged(::BlockSource& region, ::BlockPos const& pos, ::BlockPos const& neighborPos) const
        /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void animateTickBedrockLegacy(::BlockAnimateTickData const&) const;
#else // @header-generator platform
    virtual void animateTickBedrockLegacy(::BlockAnimateTickData const& tickData) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool isInteractiveBlock() const;
#else // @header-generator platform
    virtual ::Brightness getLightEmission(::Block const& block) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Brightness getLightEmission(::Block const&) const;
#else // @header-generator platform
    virtual void entityInside(::BlockSource& region, ::BlockPos const& pos, ::Actor& entity) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void _onHitByActivatingAttack(::BlockSource&, ::BlockPos const&, ::Actor*) const;
#else // @header-generator platform
    virtual void _onHitByActivatingAttack(::BlockSource& region, ::BlockPos const& pos, ::Actor*) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void entityInside(::BlockSource&, ::BlockPos const&, ::Actor&) const;
#else // @header-generator platform
    virtual int _getNumCandles(::Block const& block) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual int _getNumCandles(::Block const&) const;
#else // @header-generator platform
    virtual void _iterateCandles(
        ::Block const&                                  block,
        ::BlockPos const&                               pos,
        ::brstd::function_ref<void(::Vec3 const&, int)> callback
    ) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void _iterateCandles(::Block const&, ::BlockPos const&, ::brstd::function_ref<void (const Vec3&, int)>) const;

    virtual void _tryLightOnFire(::BlockSource&, ::BlockPos const&, ::Actor*) const;
    // clang-format on
#else // @header-generator platform
    virtual void _tryLightOnFire(::BlockSource& region, ::BlockPos const& pos, ::Actor* sourceActor) const;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI AbstractCandleBlock(std::string const&, int, ::Material const&);
#else // @header-generator platform
    MCAPI void _addExtinguishEffects(::Block const&, ::BlockSource& region, ::BlockPos const& pos) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _addExtinguishEffects(::Block const&, ::BlockSource&, ::BlockPos const&) const;
#else // @header-generator platform
    MCAPI void _checkForWaterlogging(::BlockSource& region, ::BlockPos const& pos) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _checkForWaterlogging(::BlockSource&, ::BlockPos const&) const;
#else // @header-generator platform
    MCAPI void
    _extinguish(::Actor* extinguisher, ::Block const& block, ::BlockSource& region, ::BlockPos const& pos) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _extinguish(::Actor*, ::Block const&, ::BlockSource&, ::BlockPos const&) const;

    MCNAPI void tick(::BlockEvents::BlockQueuedTickEvent&) const;
#else // @header-generator platform
    MCAPI void tick(::BlockEvents::BlockQueuedTickEvent& eventData) const;
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static bool _canBeLit(::Block const&, ::BlockSource&, ::BlockPos const&);
#else // @header-generator platform
    MCAPI static bool _canBeLit(::Block const& block, ::BlockSource& region, ::BlockPos const& pos);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    MCAPI static bool _isLit(::Block const& block);
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $isLavaBlocking() const;
#else // @header-generator platform
    MCFOLD bool $isInteractiveBlock() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $neighborChanged(::BlockSource&, ::BlockPos const&, ::BlockPos const&) const;
#else // @header-generator platform
    MCFOLD bool $isLavaBlocking() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $animateTickBedrockLegacy(::BlockAnimateTickData const&) const;
#else // @header-generator platform
    MCAPI void $neighborChanged(::BlockSource& region, ::BlockPos const& pos, ::BlockPos const& neighborPos) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $isInteractiveBlock() const;
#else // @header-generator platform
    MCAPI void $animateTickBedrockLegacy(::BlockAnimateTickData const& tickData) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Brightness $getLightEmission(::Block const&) const;
#else // @header-generator platform
    MCAPI ::Brightness $getLightEmission(::Block const& block) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $_onHitByActivatingAttack(::BlockSource&, ::BlockPos const&, ::Actor*) const;
#else // @header-generator platform
    MCAPI void $entityInside(::BlockSource& region, ::BlockPos const& pos, ::Actor& entity) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $entityInside(::BlockSource&, ::BlockPos const&, ::Actor&) const;
#else // @header-generator platform
    MCAPI void $_onHitByActivatingAttack(::BlockSource& region, ::BlockPos const& pos, ::Actor*) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI int $_getNumCandles(::Block const&) const;
#else // @header-generator platform
    MCFOLD int $_getNumCandles(::Block const& block) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void
    $_iterateCandles(::Block const&, ::BlockPos const&, ::brstd::function_ref<void(const Vec3&, int)>) const;
#else // @header-generator platform
    MCFOLD void $_iterateCandles(
        ::Block const&                                  block,
        ::BlockPos const&                               pos,
        ::brstd::function_ref<void(::Vec3 const&, int)> callback
    ) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $_tryLightOnFire(::BlockSource&, ::BlockPos const&, ::Actor*) const;
#else // @header-generator platform
    MCFOLD void $_tryLightOnFire(::BlockSource& region, ::BlockPos const& pos, ::Actor* sourceActor) const;


#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
