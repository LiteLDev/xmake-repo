#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/legacy/ActorUniqueID.h"
#include "mc/world/ContainerID.h"

// auto generated forward declare list
// clang-format off
class Actor;
class ActorInteraction;
class CompoundTag;
class DataLoadHelper;
class InteractionResult;
class MerchantRecipeList;
class Player;
class UpdateTradePacket;
struct Trade;
struct TradeTable;
// clang-format on

class LegacyTradeableComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>                                mAddRecipeOnUpdate;
    ::ll::TypedStorage<1, 1, bool>                                mResetLockedOnFirstTrade;
    ::ll::TypedStorage<1, 1, bool>                                mWillingToBreed;
    ::ll::TypedStorage<4, 4, int>                                 mRiches;
    ::ll::TypedStorage<4, 4, int>                                 mTradeTier;
    ::ll::TypedStorage<4, 4, int>                                 mUpdateMerchantTimer;
    ::ll::TypedStorage<8, 8, ::ActorUniqueID>                     mLastPlayerTradeID;
    ::ll::TypedStorage<8, 8, std::unique_ptr<MerchantRecipeList>> mOffers;
    ::ll::TypedStorage<8, 24, std::string>                        mDisplayName;
    ::ll::TypedStorage<8, 24, std::vector<int>>                   mTradeRecipeFirstTime;
    // NOLINTEND

public:
    // prevent constructor by default
    LegacyTradeableComponent& operator=(LegacyTradeableComponent const&);
    LegacyTradeableComponent(LegacyTradeableComponent const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void DecrementMerchantTimer();

    MCNAPI void IncrementTradeTier();

    MCNAPI LegacyTradeableComponent();

    MCNAPI ::TradeTable* _getTradeTable(::Actor&);

    MCNAPI bool _refreshTrades(::Actor&);

    MCNAPI void _updateMaxTradeTier(::Actor&, int const);

    MCNAPI void addAdditionalSaveData(::CompoundTag&) const;

    MCNAPI ::UpdateTradePacket createDataPacket(::Actor&, ::ContainerID);

    MCNAPI bool getAddRecipeOnUpdate() const;

    MCNAPI std::string const& getDisplayName() const;

    MCNAPI ::InteractionResult getInteraction(::Actor&, ::Player&, ::ActorInteraction&);

    MCNAPI ::ActorUniqueID const getLastPlayerTradeID() const;

    MCNAPI ::MerchantRecipeList* getOffers(::Actor&);

    MCNAPI bool getResetLockedOnFirstTrade() const;

    MCNAPI int getRiches() const;

    MCNAPI int getTradeTier() const;

    MCNAPI int getUpdateMerchantTimer() const;

    MCNAPI void handleHaggleAudioCue(::Actor&, bool);

    MCNAPI void initFromDefinition(::Actor&);

    MCNAPI std::string const& loadDisplayName(::Actor&);

    MCNAPI void loadOffersFromTag(::CompoundTag const*);

    MCNAPI void notifyTrade(::Actor&, int, int);

    MCNAPI void readAdditionalSaveData(::Actor&, ::CompoundTag const&, ::DataLoadHelper&);

    MCNAPI void reloadComponent(::Actor&);

    MCNAPI void restockAllRecipes(::Actor&);

    MCNAPI void setAddRecipeOnUpdate(bool);

    MCNAPI void setDataFromPacket(::UpdateTradePacket const&);

    MCNAPI void setOffers(::MerchantRecipeList&);

    MCNAPI void setResetLockedOnFirstTrade(bool);

    MCNAPI void setRiches(int);

    MCNAPI void setTradeTier(int);

    MCNAPI bool shouldConvertTrades(::Actor&) const;

    MCNAPI bool shouldPersistTrades(::Actor&) const;

    MCNAPI void updateTradeTier(::Actor&);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static bool isUseNewTradeScreen(::Actor const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND
};
