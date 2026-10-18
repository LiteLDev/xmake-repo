#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace StorageItemUtility {

class StorageItemWeightData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int> mOwnWeight;
    ::ll::TypedStorage<4, 4, int> mContentsWeight;
    ::ll::TypedStorage<4, 4, int> mContentsWeightLimit;
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    StorageItemWeightData();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI int getContentsWeight() const;

    MCNAPI int getRemainingWeight() const;

    MCNAPI int getTotalWeight() const;

    MCNAPI int getWeightCapacity() const;

    MCNAPI bool isEmpty() const;

    MCNAPI bool isFull() const;
    // NOLINTEND
#else // @header-generator platform
#endif // @header-generator platform
};

} // namespace StorageItemUtility
