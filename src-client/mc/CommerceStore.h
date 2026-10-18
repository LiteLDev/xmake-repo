#if defined(LL_PLAT_C) || defined(LL_PLAT_A) // @header-generator platform
#if defined(LL_PLAT_A) // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/ICommerceStore.h"

// auto generated forward declare list
// clang-format off
class TaskGroup;
// clang-format on

class CommerceStore : public ::ICommerceStore {
public:
    // CommerceStore inner types define
    enum class State : int {
        Initializing   = 0,
        Idle           = 1,
        QueryProducts  = 2,
        Purchase       = 3,
        QueryPurchases = 4,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::CommerceStore::State>                      mState;
    ::ll::TypedStorage<8, 8, ::gsl::not_null<std::unique_ptr<TaskGroup>>> mTaskGroup;
    ::ll::UntypedStorage<8, 8>                                            mPlatformStore;
    ::ll::TypedStorage<1, 1, bool>                                        mAvailable;
    ::ll::TypedStorage<1, 1, bool>                                        mEduMode;
    ::ll::TypedStorage<1, 1, bool>                                        mOffersCreated;
    // NOLINTEND
};
#else // @header-generator platform
#endif // @header-generator platform
#else // @header-generator platform
#endif // @header-generator platform
