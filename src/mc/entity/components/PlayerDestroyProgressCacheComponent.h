#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/ItemDescriptor.h"

struct PlayerDestroyProgressCacheComponent {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<1, 2, std::optional<bool>>  mCurrentToolIsOptimalToolForMining;
    ::ll::TypedStorage<4, 8, std::optional<float>> mCurrentToolBlockDestroySpeed;
    ::ll::TypedStorage<8, 8, ulong>                mLastBlockBeingDestroyed;
    ::ll::TypedStorage<8, 16, ::ItemDescriptor>    mLastItemUsedToDestroy;
#else // @header-generator platform
    ::ll::TypedStorage<1, 2, ::std::optional<bool>>  mCurrentToolIsOptimalToolForMining;
    ::ll::TypedStorage<4, 8, ::std::optional<float>> mCurrentToolBlockDestroySpeed;
    ::ll::TypedStorage<8, 8, uint64>                 mLastBlockBeingDestroyed;
    ::ll::TypedStorage<8, 16, ::ItemDescriptor>      mLastItemUsedToDestroy;
#endif // @header-generator platform
    // NOLINTEND

public:
#if defined(LL_PLAT_A) // @header-generator platform
    // prevent constructor by default
    PlayerDestroyProgressCacheComponent& operator=(PlayerDestroyProgressCacheComponent const&);
    PlayerDestroyProgressCacheComponent();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void reset();
    // NOLINTEND
#else // @header-generator platform
    void reset() {
        mCurrentToolIsOptimalToolForMining->reset();
        mCurrentToolBlockDestroySpeed->reset();
        mLastBlockBeingDestroyed = 0xFFFFFFFF;
        mLastItemUsedToDestroy   = ItemDescriptor();
    }
#endif // @header-generator platform
};
