#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/IStoreAdapter.h"
#include "mc/QueryProductsResult.h"
#include "mc/QueryPurchasesResult.h"

// auto generated forward declare list
// clang-format off
class GameStore;
class ICommerceStore;
class StoreListener;
class TaskGroup;
// clang-format on

class StoreAdapter : public ::IStoreAdapter {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>                                            mGameStore;
    ::ll::TypedStorage<8, 8, std::unique_ptr<ICommerceStore>>             mCommerceStore;
    ::ll::TypedStorage<8, 64, ::QueryProductsResult>                      mProductsResult;
    ::ll::TypedStorage<8, 64, ::QueryPurchasesResult>                     mPurchasesResult;
    ::ll::UntypedStorage<8, 8>                                            mOfferRepo;
    ::ll::TypedStorage<8, 8, ::gsl::not_null<std::unique_ptr<TaskGroup>>> mTaskGroup;
    // NOLINTEND

public:
    // prevent constructor by default
    StoreAdapter& operator=(StoreAdapter const&);
    StoreAdapter(StoreAdapter const&);
    StoreAdapter();
};
