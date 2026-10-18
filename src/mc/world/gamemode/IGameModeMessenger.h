#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Block;
class BlockPos;
class ItemStack;
// clang-format on

struct IGameModeMessenger {
public:
    // IGameModeMessenger inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    using BlockBreakCaptureToken = ::gsl::final_action<std::function<void()>>;
#else // @header-generator platform
    using BlockBreakCallback = ::std::function<void(::ItemStack const&, ::ItemStack const&, ::BlockPos const&)>;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    using BlockBreakCallback = std::function<void(const ItemStack&, const ItemStack&, const BlockPos&)>;
#else // @header-generator platform
    using BlockBreakCaptureToken = ::gsl::final_action<::std::function<void()>>;
#endif // @header-generator platform

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
#else // @header-generator platform
#endif // @header-generator platform
    virtual ~IGameModeMessenger() = default;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::gsl::final_action<std::function<void ()>> createBlockBreakCaptureScope(std::function<void (const ItemStack&, const ItemStack&, const BlockPos&)>) = 0;
#else // @header-generator platform
    virtual ::gsl::final_action<::std::function<void()>> createBlockBreakCaptureScope(
        ::std::function<void(::ItemStack const&, ::ItemStack const&, ::BlockPos const&)> callback
    ) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void sendDenyDestroyBlock(::BlockPos const&, int) = 0;
#else // @header-generator platform
    virtual void sendDenyDestroyBlock(::BlockPos const& pos, int face) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void sendStartDestroyBlock(::BlockPos const&, int) = 0;
#else // @header-generator platform
    virtual void sendStartDestroyBlock(::BlockPos const& pos, int face) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool sendTryDestroyBlock(::BlockPos const&, int, std::function<bool (std::optional<ItemStack>&)> const&) = 0;
#else // @header-generator platform
    virtual bool sendTryDestroyBlock(
        ::BlockPos const&                                           pos,
        int                                                         face,
        ::std::function<bool(::std::optional<::ItemStack>&)> const& tryDestroy
    ) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void sendDestroyBlock(::Block const&, ::BlockPos const&, int) = 0;
#else // @header-generator platform
    virtual void sendDestroyBlock(::Block const& oldBlock, ::BlockPos const& pos, int variantData) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void sendChangeContinueDestroyBlock(::BlockPos const&, int) = 0;
#else // @header-generator platform
    virtual void sendChangeContinueDestroyBlock(::BlockPos const& pos, int face) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void sendContinueDestroyAboutToDestroyBlock(::BlockPos const&, int) = 0;
#else // @header-generator platform
    virtual void sendContinueDestroyAboutToDestroyBlock(::BlockPos const& pos, int face) = 0;
#endif // @header-generator platform

    virtual void sendStopDestroyBlock(::BlockPos const&, float) = 0;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void sendStartItemUseOn(::BlockPos const&, ::BlockPos const&, int) = 0;
#else // @header-generator platform
    virtual void sendStartItemUseOn(::BlockPos const& pos, ::BlockPos const& buildPos, int face) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void sendStopItemUseOn(::BlockPos const&) = 0;
#else // @header-generator platform
    virtual void sendStopItemUseOn(::BlockPos const& pos) = 0;
#endif // @header-generator platform

    virtual void tryRotateTowardsAimAssist() = 0;
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format on
#else // @header-generator platform
#endif // @header-generator platform
    // NOLINTEND
};
