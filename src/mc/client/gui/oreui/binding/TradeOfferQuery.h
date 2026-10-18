#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/oreui/binding/QueryBase.h"
#include "mc/client/gui/oreui/binding/properties/Property.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
namespace GameplayUI { struct GameplayUIContext; }
namespace OreUI { class ClientDependencies; }
namespace OreUI { class GameDependencies; }
// clang-format on

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/oreui/binding/QueryBase.h"
#include "mc/client/gui/oreui/binding/properties/Property.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
namespace GameplayUI { struct GameplayUIContext; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace OreUI {

#if defined(LL_PLAT_A) // @header-generator platform
class TradeOfferQuery : public ::OreUI::QueryBase<OreUI::TradeOfferQuery> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 152>  mIsOutOfUses;
    ::ll::UntypedStorage<8, 168>  mBuyAItemName;
    ::ll::UntypedStorage<8, 168>  mBuyBItemName;
    ::ll::UntypedStorage<8, 168>  mSellItemName;
    ::ll::UntypedStorage<8, 152>  mBuyAItemAmount;
    ::ll::UntypedStorage<8, 152>  mBuyBItemAmount;
    ::ll::UntypedStorage<8, 152>  mSellItemAmount;
    ::ll::UntypedStorage<8, 168>  mBuyAItemId;
    ::ll::UntypedStorage<8, 168>  mBuyBItemId;
    ::ll::UntypedStorage<8, 168>  mSellItemId;
    ::ll::UntypedStorage<8, 152>  mHasSecondaryBuyItem;
    ::ll::UntypedStorage<8, 152>  mPlayerHasItemsForTrade;
    ::ll::UntypedStorage<8, 152>  mIsSelectedTrade;
    ::ll::TypedStorage<4, 4, int> mTradeTier;
    ::ll::TypedStorage<4, 4, int> mTradeIndex;
    ::ll::UntypedStorage<8, 24>   mContext;
    // NOLINTEND

public:
    // prevent constructor by default
    TradeOfferQuery();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~TradeOfferQuery();

    virtual void update(double);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::std::add_lvalue_reference_t<char const[31]> NAME();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $update(double);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
class TradeOfferQuery : public ::OreUI::QueryBase<::OreUI::TradeOfferQuery> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 176, ::OreUI::Property<bool>>                                       mIsOutOfUses;
    ::ll::TypedStorage<8, 200, ::OreUI::Property<::std::string>>                              mBuyAItemName;
    ::ll::TypedStorage<8, 200, ::OreUI::Property<::std::string>>                              mBuyBItemName;
    ::ll::TypedStorage<8, 200, ::OreUI::Property<::std::string>>                              mSellItemName;
    ::ll::TypedStorage<8, 176, ::OreUI::Property<int>>                                        mBuyAItemAmount;
    ::ll::TypedStorage<8, 176, ::OreUI::Property<int>>                                        mBuyBItemAmount;
    ::ll::TypedStorage<8, 176, ::OreUI::Property<int>>                                        mSellItemAmount;
    ::ll::TypedStorage<8, 200, ::OreUI::Property<::std::string>>                              mBuyAItemId;
    ::ll::TypedStorage<8, 200, ::OreUI::Property<::std::string>>                              mBuyBItemId;
    ::ll::TypedStorage<8, 200, ::OreUI::Property<::std::string>>                              mSellItemId;
    ::ll::TypedStorage<8, 176, ::OreUI::Property<bool>>                                       mHasSecondaryBuyItem;
    ::ll::TypedStorage<8, 176, ::OreUI::Property<bool>>                                       mPlayerHasItemsForTrade;
    ::ll::TypedStorage<8, 176, ::OreUI::Property<bool>>                                       mIsSelectedTrade;
    ::ll::TypedStorage<4, 4, int>                                                             mTradeTier;
    ::ll::TypedStorage<4, 4, int>                                                             mTradeIndex;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::GameplayUI::GameplayUIContext>> mContext;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void update(double) /*override*/;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::add_lvalue_reference_t<char const[31]> NAME();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $update(double);
    // NOLINTEND
};
#else // @header-generator platform
class TradeOfferQuery {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace OreUI
