#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/legacy/ActorUniqueID.h"
#include "mc/world/ContainerID.h"

// auto generated forward declare list
// clang-format off
class Actor;
class ActorInteraction;
class BaseGameVersion;
class CompoundTag;
class DataLoadHelper;
class InteractionResult;
class MerchantRecipeList;
class Player;
class UpdateTradePacket;
struct IntRange;
struct Tick;
struct Trade;
struct TradeTable;
// clang-format on

class EconomyTradeableComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::ActorUniqueID>                     mLastTradingPlayer;
    ::ll::TypedStorage<4, 4, int>                                 mUpdateMerchantTimer;
    ::ll::TypedStorage<1, 1, bool>                                mAddRecipeOnUpdate;
    ::ll::TypedStorage<4, 4, int>                                 mRiches;
    ::ll::TypedStorage<8, 8, ::Actor&>                            mOwner;
    ::ll::TypedStorage<8, 8, std::unique_ptr<MerchantRecipeList>> mOffers;
    ::ll::TypedStorage<8, 24, std::string>                        mDisplayName;
    ::ll::TypedStorage<8, 24, std::string>                        mGeneratedTablePath;
    ::ll::TypedStorage<1, 1, bool>                                mConvertedFromVillagerV1;
    ::ll::TypedStorage<4, 4, int>                                 mDiscountDegradationTimeStamp;
    // NOLINTEND

public:
    // prevent constructor by default
    EconomyTradeableComponent& operator=(EconomyTradeableComponent const&);
    EconomyTradeableComponent(EconomyTradeableComponent const&);
    EconomyTradeableComponent();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit EconomyTradeableComponent(::Actor&);

    MCNAPI bool _generateTrades();

    MCNAPI void _setMaxTradeTier(int const);

    MCNAPI void _setTradeTier(int const);

    MCNAPI void addAdditionalSaveData(::CompoundTag&) const;

    MCNAPI ::UpdateTradePacket createDataPacket(::ContainerID);

    MCNAPI void fixVillagerTierToMatchTradeList(::MerchantRecipeList*);

    MCNAPI ::IntRange getCurrentCuredDiscount() const;

    MCNAPI std::string const& getDisplayName() const;

    MCNAPI ::InteractionResult getInteraction(::Player&, ::ActorInteraction&);

    MCNAPI ::MerchantRecipeList* getOffers();

    MCNAPI int getRiches() const;

    MCNAPI uint getTradeExpForCurrentLevel() const;

    MCNAPI std::vector<uint> getTradeExpRequirements() const;

    MCNAPI uint getTradeTier() const;

    MCNAPI void handleHaggleAudioCue(bool);

    MCNAPI bool hasSupplyRemaining() const;

    MCNAPI std::string const& loadDisplayName();

    MCNAPI void loadOffersFromTag(::CompoundTag const*);

    MCNAPI void matchExpAndTier();

    MCNAPI void newServerAiStep();

    MCNAPI void notifyTrade(int, int);

    MCNAPI void readAdditionalSaveData(::CompoundTag const&, ::DataLoadHelper&);

    MCNAPI void reloadComponent();

    MCNAPI void resupplyTrades();

    MCNAPI void setCurrentTradeExp(int const);

    MCNAPI void setDataFromPacket(::UpdateTradePacket const&);

    MCNAPI void setNearbyCuredDiscount(int);

    MCNAPI void setOffers(::MerchantRecipeList&);

    MCNAPI void setRiches(int);

    MCNAPI bool shouldConvertTrades() const;

    MCNAPI bool shouldPersistTrades() const;

    MCNAPI bool showTradeScreen();

    MCNAPI void tickDiscountDegradationTimer(::Tick);

    MCNAPI void tryIncrementCuredDiscount();

    MCNAPI void tryIncrementNearbyCuredDiscount();

    MCNAPI void tryToTransferOldOffers(::MerchantRecipeList*);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static bool isUseNewTradeScreen(::Actor const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Actor&);
    // NOLINTEND
};
