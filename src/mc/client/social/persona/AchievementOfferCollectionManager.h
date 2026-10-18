#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/DirtyFlag.h"
#include "mc/client/services/persona/collectors/ExhaustivePieceCollector.h"
#include "mc/client/social/AchievementData.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"
#include "mc/platform/UUID.h"

// auto generated forward declare list
// clang-format off
class IOptionRegistry;
class IStoreCatalogItem;
class Option;
class PersonaRepository;
class PlayerAchievementData;
class StoreCatalogRepository;
namespace Social { class XboxLiveUser; }
namespace persona { class IPieceCollector; }
namespace persona { class PieceOfferWrapper; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
namespace persona {

#if defined(LL_PLAT_A) // @header-generator platform
class AchievementOfferCollectionManager
: public ::std::enable_shared_from_this<persona::AchievementOfferCollectionManager> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24>                                     mStoreRepo;
    ::ll::TypedStorage<8, 8, ::PersonaRepository&>                  mPersonaRepo;
    ::ll::TypedStorage<8, 8, ::PlayerAchievementData const&>        mPlayerData;
    ::ll::TypedStorage<8, 216, ::persona::ExhaustivePieceCollector> mPersonaAchievementInfo;
    ::ll::TypedStorage<8, 24, std::map<mce::UUID, AchievementData>> mUnlockedAchievements;
    ::ll::TypedStorage<8, 24, std::map<mce::UUID, AchievementData>> mLockedAchievements;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>      mOnLanguageChangeSubscription;
    ::ll::TypedStorage<8, 8, ::IOptionRegistry&>                    mOptions;
    // NOLINTEND

public:
    // prevent constructor by default
    AchievementOfferCollectionManager& operator=(AchievementOfferCollectionManager const&);
    AchievementOfferCollectionManager(AchievementOfferCollectionManager const&);
    AchievementOfferCollectionManager();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~AchievementOfferCollectionManager();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI AchievementOfferCollectionManager(
        ::Social::XboxLiveUser&,
        ::gsl::not_null<Bedrock::NonOwnerPointer<StoreCatalogRepository>>,
        ::PersonaRepository&,
        ::IOptionRegistry&
    );

    MCNAPI void _onLanguageChanged(::Option const&);

    MCNAPI void _retrieveAchievementData(std::map<int, AchievementData> const&, std::map<mce::UUID, AchievementData>&);

    MCNAPI void fetchThumbnailImageByPackId(::mce::UUID const&, std::function<void()>);

    MCNAPI ::AchievementData const& getAchievement(::mce::UUID const&) const;

    MCNAPI ::IStoreCatalogItem const* getPersonaAchievementReward(::mce::UUID) const;

    MCNAPI bool isAchievementOfferUnlocked(::mce::UUID const) const;

    MCNAPI void tick(::ui::DirtyFlag&);

    MCNAPI void updateAchievements();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::Social::XboxLiveUser&,
        ::gsl::not_null<Bedrock::NonOwnerPointer<StoreCatalogRepository>>,
        ::PersonaRepository&,
        ::IOptionRegistry&
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
#else // @header-generator platform
class AchievementOfferCollectionManager {};
#endif // @header-generator platform

} // namespace persona
