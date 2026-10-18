#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/game/MinecraftGameFeatures.h"
#include "mc/client/store/iap/TrialUpgradePurchaseTier.h"
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/pub_sub/Publisher.h"
#include "mc/deps/core/utility/pub_sub/ReturnPolicyType.h"
#include "mc/world/level/GameType.h"

// auto generated forward declare list
// clang-format off
class FlightingService;
class IOfferRepository;
class OptionRegistry;
class PropertyBag;
namespace Bedrock::PubSub { class Subscription; }
namespace Bedrock::PubSub::ThreadModel { struct SingleThreaded; }
// clang-format on

class TrialManager : public ::Bedrock::EnableNonOwnerReferences {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24>                                             mOfferRepository;
    ::ll::TypedStorage<8, 16, std::weak_ptr<OptionRegistry>>                mOptions;
    ::ll::UntypedStorage<8, 24>                                             mFlightingService;
    ::ll::TypedStorage<8, 24, std::map<MinecraftGameFeatures, bool>>        mTrialModeFeatures;
    ::ll::TypedStorage<8, 24, std::map<MinecraftGameFeatures, bool>>        mFullGameFeatures;
    ::ll::TypedStorage<8, 40, std::unordered_map<std::string, std::string>> mStoreLinks;
    ::ll::UntypedStorage<8, 40>                                             mIsTrialModeChangedPublisher;
    // NOLINTEND

public:
    // prevent constructor by default
    TrialManager();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~TrialManager();

    virtual bool isFeatureEnabled(::MinecraftGameFeatures) const;

    virtual bool isTrial() const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI TrialManager(
        ::gsl::not_null<Bedrock::NonOwnerPointer<IOfferRepository>> const&,
        ::gsl::not_null<Bedrock::NonOwnerPointer<FlightingService>> const&,
        std::weak_ptr<OptionRegistry>
    );

    MCNAPI void _init();

    MCNAPI bool _isSonyPlatform() const;

    MCNAPI bool _platformHasStoreLink() const;

    MCNAPI void _setOptions();

    MCNAPI bool isGameModeEnabled(::GameType) const;

    MCNAPI ::Bedrock::PubSub::Subscription listenForTrialChange(std::function<void(bool)>);

    MCNAPI void onLicenseChanged();

    MCNAPI bool platformCanPurchaseGame() const;

    MCNAPI void purchaseGame(std::function<void()>, ::TrialUpgradePurchaseTier const);

    MCNAPI void setTrialABTest(::PropertyBag*);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::gsl::not_null<Bedrock::NonOwnerPointer<IOfferRepository>> const&,
        ::gsl::not_null<Bedrock::NonOwnerPointer<FlightingService>> const&,
        std::weak_ptr<OptionRegistry>
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $isFeatureEnabled(::MinecraftGameFeatures) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
#else // @header-generator platform
class TrialManager {};
#endif // @header-generator platform
