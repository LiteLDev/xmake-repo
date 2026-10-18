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
#if defined(LL_PLAT_A) // @header-generator platform
struct Trade;
#else // @header-generator platform
#endif // @header-generator platform
struct TradeTable;
// clang-format on

class LegacyTradeableComponent {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    ::ll::TypedStorage<1, 1, bool>                                    mAddRecipeOnUpdate;
    ::ll::TypedStorage<1, 1, bool>                                    mResetLockedOnFirstTrade;
    ::ll::TypedStorage<1, 1, bool>                                    mWillingToBreed;
    ::ll::TypedStorage<4, 4, int>                                     mRiches;
    ::ll::TypedStorage<4, 4, int>                                     mTradeTier;
    ::ll::TypedStorage<4, 4, int>                                     mUpdateMerchantTimer;
    ::ll::TypedStorage<8, 8, ::ActorUniqueID>                         mLastPlayerTradeID;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::MerchantRecipeList>> mOffers;
    ::ll::TypedStorage<8, 32, ::std::string>                          mDisplayName;
    ::ll::TypedStorage<8, 24, ::std::vector<int>>                     mTradeRecipeFirstTime;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    LegacyTradeableComponent& operator=(LegacyTradeableComponent const&);
    LegacyTradeableComponent(LegacyTradeableComponent const&);
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    LegacyTradeableComponent();
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void DecrementMerchantTimer();
#else // @header-generator platform
    MCAPI ::TradeTable* _getTradeTable(::Actor& owner);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void IncrementTradeTier();
#else // @header-generator platform
    MCAPI bool _refreshTrades(::Actor& owner);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI LegacyTradeableComponent();
#else // @header-generator platform
    MCAPI void addAdditionalSaveData(::CompoundTag& tag) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::TradeTable* _getTradeTable(::Actor&);
#else // @header-generator platform
    MCAPI ::UpdateTradePacket createDataPacket(::Actor& owner, ::ContainerID containerID);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool _refreshTrades(::Actor&);
#else // @header-generator platform
    MCAPI ::InteractionResult getInteraction(::Actor& owner, ::Player& player, ::ActorInteraction& interaction);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _updateMaxTradeTier(::Actor&, int const);
#else // @header-generator platform
    MCAPI ::std::string const& loadDisplayName(::Actor& owner);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void addAdditionalSaveData(::CompoundTag&) const;
#else // @header-generator platform
    MCAPI void notifyTrade(::Actor& owner, int recipeIndex, int numTrades);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::UpdateTradePacket createDataPacket(::Actor&, ::ContainerID);
#else // @header-generator platform
    MCAPI ::LegacyTradeableComponent& operator=(::LegacyTradeableComponent&&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool getAddRecipeOnUpdate() const;
#else // @header-generator platform
    MCAPI void readAdditionalSaveData(::Actor& owner, ::CompoundTag const& tag, ::DataLoadHelper&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::string const& getDisplayName() const;
#else // @header-generator platform
    MCAPI void reloadComponent(::Actor& actor);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::InteractionResult getInteraction(::Actor&, ::Player&, ::ActorInteraction&);
#else // @header-generator platform
    MCAPI void restockAllRecipes(::Actor& owner);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::ActorUniqueID const getLastPlayerTradeID() const;
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI void setDataFromPacket(::UpdateTradePacket const& packet);
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::MerchantRecipeList* getOffers(::Actor&);
#else // @header-generator platform
    MCAPI void setOffers(::MerchantRecipeList& offers);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool getResetLockedOnFirstTrade() const;
#else // @header-generator platform
    MCAPI bool shouldConvertTrades(::Actor& owner) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI int getRiches() const;
#else // @header-generator platform
    MCAPI bool shouldPersistTrades(::Actor& owner) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI int getTradeTier() const;
#else // @header-generator platform
    MCAPI void updateTradeTier(::Actor& owner);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    MCAPI ~LegacyTradeableComponent();
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static bool isUseNewTradeScreen(::Actor const&);
#else // @header-generator platform
    MCAPI static bool isUseNewTradeScreen(::Actor const& owner);
#endif // @header-generator platform
    // NOLINTEND

public:
#if defined(LL_PLAT_A) // @header-generator platform
    // constructor thunks
#else // @header-generator platform
    // destructor thunk
#endif // @header-generator platform
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor();
#else // @header-generator platform
    MCAPI void $dtor();
#endif // @header-generator platform
    // NOLINTEND
};
