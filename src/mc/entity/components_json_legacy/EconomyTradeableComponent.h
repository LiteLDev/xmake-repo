#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/legacy/ActorUniqueID.h"
#include "mc/world/ContainerID.h"

// auto generated forward declare list
// clang-format off
class Actor;
class ActorInteraction;
#if defined(LL_PLAT_A) // @header-generator platform
class BaseGameVersion;
#else // @header-generator platform
#endif // @header-generator platform
class CompoundTag;
class DataLoadHelper;
class InteractionResult;
class MerchantRecipeList;
class Player;
class UpdateTradePacket;
struct IntRange;
struct Tick;
#if defined(LL_PLAT_A) // @header-generator platform
struct Trade;
#else // @header-generator platform
#endif // @header-generator platform
struct TradeTable;
// clang-format on

class EconomyTradeableComponent {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    ::ll::TypedStorage<8, 8, ::ActorUniqueID>                         mLastTradingPlayer;
    ::ll::TypedStorage<4, 4, int>                                     mUpdateMerchantTimer;
    ::ll::TypedStorage<1, 1, bool>                                    mAddRecipeOnUpdate;
    ::ll::TypedStorage<4, 4, int>                                     mRiches;
    ::ll::TypedStorage<8, 8, ::Actor&>                                mOwner;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::MerchantRecipeList>> mOffers;
    ::ll::TypedStorage<8, 32, ::std::string>                          mDisplayName;
    ::ll::TypedStorage<8, 32, ::std::string>                          mGeneratedTablePath;
    ::ll::TypedStorage<1, 1, bool>                                    mConvertedFromVillagerV1;
    ::ll::TypedStorage<4, 4, int>                                     mDiscountDegradationTimeStamp;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    EconomyTradeableComponent& operator=(EconomyTradeableComponent const&);
    EconomyTradeableComponent(EconomyTradeableComponent const&);
    EconomyTradeableComponent();

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI explicit EconomyTradeableComponent(::Actor&);
#else // @header-generator platform
    MCAPI explicit EconomyTradeableComponent(::Actor& owner);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool _generateTrades();
#else // @header-generator platform
    MCAPI bool _generateTrades();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _setMaxTradeTier(int const);
#else // @header-generator platform
    MCAPI ::TradeTable* _getTradeTable();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _setTradeTier(int const);
#else // @header-generator platform
    MCAPI void addAdditionalSaveData(::CompoundTag& tag) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void addAdditionalSaveData(::CompoundTag&) const;
#else // @header-generator platform
    MCAPI ::UpdateTradePacket createDataPacket(::ContainerID containerID);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::UpdateTradePacket createDataPacket(::ContainerID);
#else // @header-generator platform
    MCAPI void fixVillagerTierToMatchTradeList(::MerchantRecipeList* oldOffers);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void fixVillagerTierToMatchTradeList(::MerchantRecipeList*);
#else // @header-generator platform
    MCAPI ::IntRange getCurrentCuredDiscount() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::IntRange getCurrentCuredDiscount() const;
#else // @header-generator platform
    MCAPI ::InteractionResult getInteraction(::Player& player, ::ActorInteraction& interaction);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::string const& getDisplayName() const;
#else // @header-generator platform
    MCAPI ::MerchantRecipeList* getOffers();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::InteractionResult getInteraction(::Player&, ::ActorInteraction&);
#else // @header-generator platform
    MCAPI uint getTradeExpForCurrentLevel() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::MerchantRecipeList* getOffers();
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI ::std::vector<uint> getTradeExpRequirements() const;
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI int getRiches() const;
#else // @header-generator platform
    MCAPI uint getTradeTier() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI uint getTradeExpForCurrentLevel() const;
#else // @header-generator platform
    MCAPI bool hasSupplyRemaining() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::vector<uint> getTradeExpRequirements() const;
#else // @header-generator platform
    MCAPI ::std::string const& loadDisplayName();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI uint getTradeTier() const;
#else // @header-generator platform
    MCAPI void matchExpAndTier();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void handleHaggleAudioCue(bool);
#else // @header-generator platform
    MCAPI void newServerAiStep();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool hasSupplyRemaining() const;
#else // @header-generator platform
    MCAPI void notifyTrade(int recipeIndex, int numTrades);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::string const& loadDisplayName();
#else // @header-generator platform
    MCAPI void readAdditionalSaveData(::CompoundTag const& tag, ::DataLoadHelper& dataLoadHelper);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void loadOffersFromTag(::CompoundTag const*);
#else // @header-generator platform
    MCAPI void reloadComponent();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void matchExpAndTier();
#else // @header-generator platform
    MCAPI void resupplyTrades();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void newServerAiStep();
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI void setDataFromPacket(::UpdateTradePacket const& packet);
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void notifyTrade(int, int);
#else // @header-generator platform
    MCAPI void setNearbyCuredDiscount(int discount);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void readAdditionalSaveData(::CompoundTag const&, ::DataLoadHelper&);
#else // @header-generator platform
    MCAPI void setOffers(::MerchantRecipeList& offers);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void reloadComponent();
#else // @header-generator platform
    MCAPI void tickDiscountDegradationTimer(::Tick currentTick);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void resupplyTrades();
#else // @header-generator platform
    MCAPI void tryIncrementCuredDiscount();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void setCurrentTradeExp(int const);
#else // @header-generator platform
    MCAPI void tryIncrementNearbyCuredDiscount();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    MCAPI void tryToTransferOldOffers(::MerchantRecipeList* oldOffers);
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::Actor&);
#else // @header-generator platform
    MCAPI void* $ctor(::Actor& owner);
#endif // @header-generator platform
    // NOLINTEND
};
