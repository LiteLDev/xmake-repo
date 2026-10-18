#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/IntRange.h"
#include "mc/world/actor/ActorComponentDescription.h"

// auto generated forward declare list
// clang-format off
struct DeserializeDataParams;
// clang-format on

struct EconomyTradeableDescription : public ::ActorComponentDescription {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::string> mDisplayName;
    ::ll::TypedStorage<8, 24, std::string> mTradeTablePath;
    ::ll::TypedStorage<1, 1, bool>         mUseNewTradeScreen;
    ::ll::TypedStorage<4, 4, int>          mHeroDemandDiscount;
    ::ll::TypedStorage<4, 8, ::IntRange>   mCuredDiscount;
    ::ll::TypedStorage<4, 8, ::IntRange>   mMaxCuredDiscount;
    ::ll::TypedStorage<4, 4, int>          mNearbyCuredDiscount;
    ::ll::TypedStorage<4, 4, int>          mMaxNearbyCuredDiscount;
    ::ll::TypedStorage<1, 1, bool>         mPersistTrades;
    ::ll::TypedStorage<1, 1, bool>         mConvertTradesEconomy;
    ::ll::TypedStorage<1, 1, bool>         mShowTradeScreen;
    ::ll::TypedStorage<1, 1, bool>         mUseLegacyPrices;
#else // @header-generator platform
    ::ll::TypedStorage<8, 32, ::std::string> mDisplayName;
    ::ll::TypedStorage<8, 32, ::std::string> mTradeTablePath;
    ::ll::TypedStorage<1, 1, bool>           mUseNewTradeScreen;
    ::ll::TypedStorage<4, 4, int>            mHeroDemandDiscount;
    ::ll::TypedStorage<4, 8, ::IntRange>     mCuredDiscount;
    ::ll::TypedStorage<4, 8, ::IntRange>     mMaxCuredDiscount;
    ::ll::TypedStorage<4, 4, int>            mNearbyCuredDiscount;
    ::ll::TypedStorage<4, 4, int>            mMaxNearbyCuredDiscount;
    ::ll::TypedStorage<1, 1, bool>           mPersistTrades;
    ::ll::TypedStorage<1, 1, bool>           mConvertTradesEconomy;
    ::ll::TypedStorage<1, 1, bool>           mShowTradeScreen;
    ::ll::TypedStorage<1, 1, bool>           mUseLegacyPrices;
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual char const* getJsonName() const;
#else // @header-generator platform
    virtual char const* getJsonName() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~EconomyTradeableDescription();

    virtual void deserializeData(::DeserializeDataParams);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    virtual void deserializeData(::DeserializeDataParams deserializeDataParams) /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI char const* $getJsonName() const;
#else // @header-generator platform
    MCAPI char const* $getJsonName() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $deserializeData(::DeserializeDataParams);
#else // @header-generator platform
    MCAPI void $deserializeData(::DeserializeDataParams deserializeDataParams);


#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
