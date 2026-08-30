#pragma once

#include "mc/_HeaderOutputPredefine.h"

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

namespace OreUI {

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

} // namespace OreUI
