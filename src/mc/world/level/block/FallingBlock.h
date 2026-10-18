#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/BlockType.h"

// auto generated forward declare list
// clang-format off
class Block;
class BlockPos;
class BlockSource;
#if defined(LL_PLAT_A) // @header-generator platform
class Material;
#else // @header-generator platform
#endif // @header-generator platform
struct BlockAnimateTickData;
namespace BlockEvents { class BlockPlaceEvent; }
namespace BlockEvents { class BlockQueuedTickEvent; }
namespace mce { class Color; }
// clang-format on

class FallingBlock : public ::BlockType {
public:
#if defined(LL_PLAT_A) // @header-generator platform
    // prevent constructor by default
    FallingBlock();

public:
#else // @header-generator platform
#endif // @header-generator platform
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~FallingBlock();
#else // @header-generator platform
    virtual void neighborChanged(::BlockSource& region, ::BlockPos const& pos, ::BlockPos const& neighborPos) const
        /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void neighborChanged(::BlockSource&, ::BlockPos const&, ::BlockPos const&) const;
#else // @header-generator platform
    virtual void animateTickBedrockLegacy(::BlockAnimateTickData const& tickData) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void animateTickBedrockLegacy(::BlockAnimateTickData const&) const;
#else // @header-generator platform
    virtual ::mce::Color getDustColor(::Block const& block) const = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::mce::Color getDustColor(::Block const&) const = 0;

    virtual std::string getDustParticleName(::Block const&) const = 0;
#else // @header-generator platform
    virtual ::std::string getDustParticleName(::Block const& block) const = 0;
#endif // @header-generator platform

    virtual bool falling() const;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void onLand(::BlockSource&, ::BlockPos const&) const;
#else // @header-generator platform
    virtual void onLand(::BlockSource& region, ::BlockPos const& pos) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool isFreeToFall(::BlockSource&, ::BlockPos const&) const;
#else // @header-generator platform
    virtual bool isFreeToFall(::BlockSource& region, ::BlockPos const& pos) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void startFalling(::BlockSource&, ::BlockPos const&, ::Block const&, bool) const;
#else // @header-generator platform
    virtual void
    startFalling(::BlockSource& region, ::BlockPos const& pos, ::Block const& oldBlock, bool creative) const;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI FallingBlock(std::string const&, int, ::Material const&);
#else // @header-generator platform
    MCAPI void _tickBlocksAround2D(::BlockSource& region, ::BlockPos const& pos, ::Block const& oldBlock) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _tickBlocksAround2D(::BlockSource&, ::BlockPos const&, ::Block const&) const;
#else // @header-generator platform
    MCAPI void checkSlide(::BlockSource& region, ::BlockPos const& pos) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void checkSlide(::BlockSource&, ::BlockPos const&) const;
#else // @header-generator platform
    MCAPI void onPlaceBase(::BlockEvents::BlockPlaceEvent& eventData) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void onPlaceBase(::BlockEvents::BlockPlaceEvent&) const;

    MCNAPI void tick(::BlockEvents::BlockQueuedTickEvent&) const;

    MCNAPI void triggerFallCheck(::BlockSource&, ::BlockPos const&) const;
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
    MCAPI void tick(::BlockEvents::BlockQueuedTickEvent& eventData) const;
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $neighborChanged(::BlockSource&, ::BlockPos const&, ::BlockPos const&) const;
#else // @header-generator platform
    MCAPI void $neighborChanged(::BlockSource& region, ::BlockPos const& pos, ::BlockPos const& neighborPos) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $animateTickBedrockLegacy(::BlockAnimateTickData const&) const;
#else // @header-generator platform
    MCAPI void $animateTickBedrockLegacy(::BlockAnimateTickData const& tickData) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $falling() const;
#else // @header-generator platform
    MCFOLD bool $falling() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $onLand(::BlockSource&, ::BlockPos const&) const;
#else // @header-generator platform
    MCFOLD void $onLand(::BlockSource& region, ::BlockPos const& pos) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $isFreeToFall(::BlockSource&, ::BlockPos const&) const;
#else // @header-generator platform
    MCAPI bool $isFreeToFall(::BlockSource& region, ::BlockPos const& pos) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $startFalling(::BlockSource&, ::BlockPos const&, ::Block const&, bool) const;
#else // @header-generator platform
    MCAPI void
    $startFalling(::BlockSource& region, ::BlockPos const& pos, ::Block const& oldBlock, bool creative) const;


#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
