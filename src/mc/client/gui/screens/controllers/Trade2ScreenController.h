#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/DirtyFlag.h"
#include "mc/client/gui/ViewRequest.h"
#include "mc/client/gui/screens/controllers/ContainerScreenController.h"
#include "mc/client/gui/screens/controllers/FadeInIconBehavior.h"
#include "mc/world/item/ItemInstance.h"
#include "mc/world/item/trading/MerchantRecipe.h"

// auto generated forward declare list
// clang-format off
class ClientInstanceScreenModel;
class ItemStackBase;
class Trade2ContainerManagerController;
class UIPropertyBag;
struct ActorUniqueID;
namespace Json { class Value; }
// clang-format on

class Trade2ScreenController : public ::ContainerScreenController {
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/DirtyFlag.h"
#include "mc/client/gui/ViewRequest.h"
#include "mc/client/gui/screens/controllers/ContainerScreenController.h"
#include "mc/client/gui/screens/controllers/FadeInIconBehavior.h"
#include "mc/deps/json/Value.h"
#include "mc/world/item/ItemInstance.h"
#include "mc/world/item/trading/MerchantRecipe.h"

// auto generated forward declare list
// clang-format off
class ClientInstanceScreenModel;
class ItemStackBase;
class Trade2ContainerManagerController;
class UIPropertyBag;
struct ActorUniqueID;
// clang-format on

class Trade2ScreenController : public ::ContainerScreenController {
#else // @header-generator platform
class Trade2ScreenController {
#endif // @header-generator platform
#endif // @header-generator platform
public:
    // Trade2ScreenController inner types declare
    // clang-format off
    class TradeItemCollections;
    // clang-format on

    // Trade2ScreenController inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    enum class LeftTabIndex : int {
        Inventory = 0,
        Trade     = 1,
        _count    = 2,
    };
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
    enum class LeftTabIndex : int {
        Inventory = 0,
        Trade     = 1,
        Count     = 2,
    };
#else // @header-generator platform
    enum class LeftTabIndex : int {};
#endif // @header-generator platform
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    class TradeItemCollections {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 16>                               mCollections;
        ::ll::TypedStorage<1, 2, std::optional<bool>>             mHasTradeItem1Collection;
        ::ll::TypedStorage<1, 2, std::optional<bool>>             mHasTradeItem2Collection;
        ::ll::TypedStorage<1, 2, std::optional<bool>>             mHasSellItemCollection;
        ::ll::TypedStorage<1, 2, std::optional<bool>>             mHasValidTradeItemCollections;
        ::ll::TypedStorage<1, 2, std::optional<bool>>             mHasValidTradeToggleCollections;
        ::ll::TypedStorage<4, 8, std::optional<int>>              mTierIndex;
        ::ll::TypedStorage<4, 8, std::optional<int>>              mTradeIndex;
        ::ll::TypedStorage<8, 16, std::optional<MerchantRecipe*>> mTrade;
        // NOLINTEND

    public:
        // prevent constructor by default
        TradeItemCollections();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI explicit TradeItemCollections(::UIPropertyBag const&);

        MCNAPI int getTierIndex() const;

        MCNAPI int getTradeIndex() const;

        MCNAPI bool hasSellItemCollection() const;

        MCNAPI bool hasTradeItem1Collection() const;

        MCNAPI bool hasTradeItem2Collection() const;

        MCNAPI bool hasValidTradeToggleCollections() const;
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCNAPI void* $ctor(::UIPropertyBag const&);
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, std::shared_ptr<Trade2ContainerManagerController>> mTradeContainerManagerController;
    ::ll::TypedStorage<8, 24, std::vector<int>>                                  mNumberOfTradesByTier;
    ::ll::TypedStorage<4, 4, int>                                                mSelectedLeftTab;
    ::ll::TypedStorage<4, 4, int>                                                mLastExp;
    ::ll::TypedStorage<4, 4, int>                                                mNewExp;
    ::ll::TypedStorage<4, 4, int>                                                mExpAnimationTimer;
    ::ll::TypedStorage<1, 1, bool>                                               mShowVisualOffer;
    ::ll::TypedStorage<8, 432, ::MerchantRecipe>                                 mVisualOffer;
    ::ll::TypedStorage<8, 128, ::ItemInstance>                                   mVisualBuyAItem;
    ::ll::TypedStorage<8, 128, ::ItemInstance>                                   mVisualBuyBItem;
    ::ll::TypedStorage<8, 128, ::ItemInstance>                                   mVisualSellItem;
    // NOLINTEND

public:
    // prevent constructor by default
    Trade2ScreenController();

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~Trade2ScreenController();

    virtual ::ui::DirtyFlag tick();

    virtual void onLeave();

    virtual void addStaticScreenVars(::Json::Value&);

    virtual bool _isStillValid() const;

    virtual bool _getGestureControlEnabled() const;

    virtual std::string _getButtonADescription();

    virtual ::ui::ViewRequest _onContainerSlotPressed(std::string const&, int);

    virtual void _sendFlyingItem(::ItemStackBase const&, std::string const&, int, std::string const&, int, ::FadeInIconBehavior);

    virtual ::ItemStackBase const& _getVisualItemStackImpl(std::string const&, int) const;

    virtual void _registerCoalesceOrder();

    virtual void _registerAutoPlaceOrder();
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI Trade2ScreenController(std::shared_ptr<ClientInstanceScreenModel>, ::ActorUniqueID const);

    MCNAPI void _changeLeftTab(int);

    MCNAPI int _getBaseItemCountForTrade(::Trade2ScreenController::TradeItemCollections const&) const;

    MCNAPI ::ItemInstance const& _getItemForTrade(::Trade2ScreenController::TradeItemCollections const&) const;

    MCNAPI std::string _getTradeErrorDetails(::ItemStackBase const&, bool) const;

    MCNAPI bool _hasAdjustedBuyCount(::Trade2ScreenController::TradeItemCollections const&) const;

    MCNAPI void _makeTradeDetails(bool) const;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static int const& EXP_GROWTH_TIME();

    MCNAPI static std::string_view const& SELL_ITEM_COLLECTION();

    MCNAPI static std::string_view const& TIER_COLLECTION();

    MCNAPI static std::string_view const& TRADE_COLLECTION();

    MCNAPI static std::string_view const& TRADE_ITEM_1_COLLECTION();

    MCNAPI static std::string_view const& TRADE_ITEM_2_COLLECTION();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::shared_ptr<ClientInstanceScreenModel>, ::ActorUniqueID const);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::ui::DirtyFlag $tick();

    MCNAPI void $onLeave();

    MCNAPI void $addStaticScreenVars(::Json::Value&);

    MCNAPI bool $_isStillValid() const;

    MCNAPI bool $_getGestureControlEnabled() const;

    MCNAPI std::string $_getButtonADescription();

    MCNAPI ::ui::ViewRequest $_onContainerSlotPressed(std::string const&, int);

    MCNAPI void
    $_sendFlyingItem(::ItemStackBase const&, std::string const&, int, std::string const&, int, ::FadeInIconBehavior);

    MCNAPI ::ItemStackBase const& $_getVisualItemStackImpl(std::string const&, int) const;

    MCNAPI void $_registerCoalesceOrder();

    MCNAPI void $_registerAutoPlaceOrder();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
    class TradeItemCollections {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 16, ::Json::Value const>                mCollections;
        ::ll::TypedStorage<1, 2, ::std::optional<bool>>               mHasTradeItem1Collection;
        ::ll::TypedStorage<1, 2, ::std::optional<bool>>               mHasTradeItem2Collection;
        ::ll::TypedStorage<1, 2, ::std::optional<bool>>               mHasSellItemCollection;
        ::ll::TypedStorage<1, 2, ::std::optional<bool>>               mHasValidTradeItemCollections;
        ::ll::TypedStorage<1, 2, ::std::optional<bool>>               mHasValidTradeToggleCollections;
        ::ll::TypedStorage<4, 8, ::std::optional<int>>                mTierIndex;
        ::ll::TypedStorage<4, 8, ::std::optional<int>>                mTradeIndex;
        ::ll::TypedStorage<8, 16, ::std::optional<::MerchantRecipe*>> mTrade;
        // NOLINTEND

    public:
        // prevent constructor by default
        TradeItemCollections();

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI explicit TradeItemCollections(::UIPropertyBag const& bag);

        MCAPI int getTierIndex() const;

        MCAPI int getTradeIndex() const;

        MCAPI bool hasSellItemCollection() const;

        MCAPI bool hasTradeItem1Collection() const;

        MCAPI bool hasTradeItem2Collection() const;

        MCAPI bool hasValidTradeToggleCollections() const;
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCAPI void* $ctor(::UIPropertyBag const& bag);
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::Trade2ContainerManagerController>> mTradeContainerManagerController;
    ::ll::TypedStorage<8, 24, ::std::vector<int>>                                    mNumberOfTradesByTier;
    ::ll::TypedStorage<4, 4, int>                                                    mSelectedLeftTab;
    ::ll::TypedStorage<4, 4, int>                                                    mLastExp;
    ::ll::TypedStorage<4, 4, int>                                                    mNewExp;
    ::ll::TypedStorage<4, 4, int>                                                    mExpAnimationTimer;
    ::ll::TypedStorage<1, 1, bool>                                                   mShowVisualOffer;
    ::ll::TypedStorage<8, 432, ::MerchantRecipe>                                     mVisualOffer;
    ::ll::TypedStorage<8, 128, ::ItemInstance>                                       mVisualBuyAItem;
    ::ll::TypedStorage<8, 128, ::ItemInstance>                                       mVisualBuyBItem;
    ::ll::TypedStorage<8, 128, ::ItemInstance>                                       mVisualSellItem;
    // NOLINTEND

public:
    // prevent constructor by default
    Trade2ScreenController();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~Trade2ScreenController() /*override*/ = default;

    virtual ::ui::DirtyFlag tick() /*override*/;

    virtual void addStaticScreenVars(::Json::Value& globalVars) /*override*/;

    virtual void onLeave() /*override*/;

    virtual ::ui::ViewRequest _onContainerSlotPressed(::std::string const& collectionName, int index) /*override*/;

    virtual bool _getGestureControlEnabled() const /*override*/;

    virtual void _registerCoalesceOrder() /*override*/;

    virtual void _registerAutoPlaceOrder() /*override*/;

    virtual bool _isStillValid() const /*override*/;

    virtual ::ItemStackBase const&
    _getVisualItemStackImpl(::std::string const& collectionName, int collectionIndex) const /*override*/;

    virtual void _sendFlyingItem(
        ::ItemStackBase const& item,
        ::std::string const&   fromName,
        int                    fromIndex,
        ::std::string const&   toName,
        int                    toIndex,
        ::FadeInIconBehavior   fadeInIconBehavior
    ) /*override*/;

    virtual ::std::string _getButtonADescription() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI Trade2ScreenController(::std::shared_ptr<::ClientInstanceScreenModel> pModel, ::ActorUniqueID uniqueID);

    MCAPI void _changeLeftTab(int dir);

    MCAPI int _getBaseItemCountForTrade(::Trade2ScreenController::TradeItemCollections const& tic) const;

    MCAPI ::ItemInstance const& _getItemForTrade(::Trade2ScreenController::TradeItemCollections const& tic) const;

    MCAPI ::std::string _getTradeErrorDetails(::ItemStackBase const& item, bool itemA) const;

    MCAPI bool _hasAdjustedBuyCount(::Trade2ScreenController::TradeItemCollections const& tic) const;

    MCAPI void _makeTradeDetails(bool itemA) const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::shared_ptr<::ClientInstanceScreenModel> pModel, ::ActorUniqueID uniqueID);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::ui::DirtyFlag $tick();

    MCAPI void $addStaticScreenVars(::Json::Value& globalVars);

    MCAPI void $onLeave();

    MCAPI ::ui::ViewRequest $_onContainerSlotPressed(::std::string const& collectionName, int index);

    MCFOLD bool $_getGestureControlEnabled() const;

    MCAPI void $_registerCoalesceOrder();

    MCAPI void $_registerAutoPlaceOrder();

    MCFOLD bool $_isStillValid() const;

    MCAPI ::ItemStackBase const&
    $_getVisualItemStackImpl(::std::string const& collectionName, int collectionIndex) const;

    MCAPI void $_sendFlyingItem(
        ::ItemStackBase const& item,
        ::std::string const&   fromName,
        int                    fromIndex,
        ::std::string const&   toName,
        int                    toIndex,
        ::FadeInIconBehavior   fadeInIconBehavior
    );

    MCAPI ::std::string $_getButtonADescription();
    // NOLINTEND
#else // @header-generator platform
    class TradeItemCollections {};
#endif // @header-generator platform
#endif // @header-generator platform
};
