#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/DirtyFlag.h"
#include "mc/client/gui/ViewRequest.h"
#include "mc/client/gui/screens/models/MainMenuScreenModel.h"
#include "mc/client/gui/screens/models/PersonaScreenModelCommon.h"
#include "mc/client/gui/screens/models/persona/SizeSectionModel.h"
#include "mc/client/persona/SkinHandle.h"
#include "mc/client/services/persona/DownloadImportManager.h"
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/shared_types/PieceSide.h"
#include "mc/deps/shared_types/PieceType.h"
#include "mc/world/actor/player/persona/ProfileType.h"

// auto generated forward declare list
// clang-format off
class AchievementData;
class DlcBatchCacheModel;
class IStoreCatalogItem;
class PersonaAppearance;
class PersonaService;
class SkinPackCollectionModel;
class SkinPackModel;
struct LinksToStyle;
struct MinecraftScreenModelContext;
struct SaveInfoUponRequest;
namespace Social::eventData { class PersonaOfferClickedData; }
namespace mce { class UUID; }
namespace persona { class LegacySkinSerialization; }
namespace persona { class PieceHandle; }
namespace persona { class PieceOfferWrapper; }
namespace persona { class Profile; }
namespace persona { struct PersonaCharacterHandle; }
// clang-format on

class PersonaScreenModel : public ::MainMenuScreenModel,
                           public ::PersonaScreenModelCommon,
                           public ::Bedrock::EnableNonOwnerReferences {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float const>                                            DEFAULT_PAPERDOLL_ROTATION;
    ::ll::TypedStorage<4, 4, float const>                                            PAPERDOLL_BACK_ROTATION;
    ::ll::TypedStorage<8, 24, ::persona::SizeSectionModel>                           mSizeSectionModel;
    ::ll::TypedStorage<8, 96, ::SkinHandle>                                          mSelectedSkinHandle;
    ::ll::TypedStorage<4, 4, ::SharedTypes::persona::PieceSide>                      mCurrentPieceSide;
    ::ll::TypedStorage<4, 4, int>                                                    mSelectedSkinPackCollectorIndex;
    ::ll::TypedStorage<4, 4, int>                                                    mSelectedSkinPackModelIndex;
    ::ll::TypedStorage<4, 4, int>                                                    mSelectedSkinIndex;
    ::ll::TypedStorage<8, 24, std::vector<std::shared_ptr<SkinPackCollectionModel>>> mSkinPackCollectors;
    ::ll::TypedStorage<8, 8, std::unique_ptr<Social::eventData::PersonaOfferClickedData>> mOfferClickedData;
    ::ll::TypedStorage<8, 8, long>                                                        mNextPossibleEventClickedTime;
    ::ll::TypedStorage<8, 16, std::shared_ptr<SkinPackModel>>                             mInvalidSkinPackModel;
    ::ll::TypedStorage<8, 8, std::unique_ptr<SkinPackCollectionModel>>  mInvalidSkinPackCollectionModel;
    ::ll::TypedStorage<8, 16, std::shared_ptr<SkinPackCollectionModel>> mClassicOwnedSkinPackCollection;
    ::ll::TypedStorage<8, 16, std::shared_ptr<SkinPackCollectionModel>> mClassicPurchasableSkinPackCollection;
    ::ll::TypedStorage<8, 16, std::shared_ptr<SkinPackCollectionModel>> mClassicRealmsPlusSkinPackCollection;
    ::ll::TypedStorage<8, 136, ::persona::DownloadImportManager>        mPersonaDownloadManager;
    ::ll::TypedStorage<8, 16, std::shared_ptr<bool>>                    mExistanceTracker;
    // NOLINTEND

public:
    // prevent constructor by default
    PersonaScreenModel();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~PersonaScreenModel();

    virtual ::SkinHandle const& getSelectedSkinHandle() const;

    virtual void update(::ui::DirtyFlag&);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit PersonaScreenModel(::MinecraftScreenModelContext);

    MCNAPI ::SkinPackCollectionModel& _getInvalidSkinPackCollectionModel();

    MCNAPI bool _playerHasContentSubscription() const;

    MCNAPI ::SkinHandle addCustomSkin(::SkinHandle const&);

    MCNAPI bool areSkinPackModelsReady() const;

    MCNAPI bool checkPersonaServiceSavedToCacheFlag();

    MCNAPI void clearPersonaServiceSavedToCacheFlag();

    MCNAPI bool collectPersonaOffer(::persona::PieceOfferWrapper const&, std::function<void(bool)>, bool);

    MCNAPI std::shared_ptr<DlcBatchCacheModel> createDlcBatchCacheModel() const;

    MCNAPI void cycleCurrentPieceSide(::IStoreCatalogItem const&, ::SharedTypes::persona::PieceSide);

    MCNAPI std::string getAchievementOfferLockStateTexture(::persona::PieceOfferWrapper const&) const;

    MCNAPI ::SharedTypes::persona::PieceSide const& getCurrentPieceSide() const;

    MCNAPI ::SkinPackCollectionModel& getCurrentSelectedSkinPackCollector();

    MCNAPI ::AchievementData const& getOfferAchievement(::persona::PieceOfferWrapper const&) const;

    MCNAPI std::shared_ptr<persona::Profile> getPersonaProfileForActiveClient(::persona::ProfileType);

    MCNAPI std::string const getPrimaryUserTitleAccountPlayFabId();

    MCNAPI bool isAchievementOfferNotOwned(::persona::PieceOfferWrapper const&) const;

    MCNAPI bool isArmOrLegEquippedOnSelectedSide(::SharedTypes::persona::PieceType const&, std::string const&) const;

    MCNAPI bool isArmOrLegTypeAndEquipped(::persona::PieceOfferWrapper const&) const;

    MCNAPI bool isCustomSkin(::SkinHandle const&) const;

    MCNAPI bool isOfferAchievementUnlocked(::persona::PieceOfferWrapper const&) const;

    MCNAPI bool isPersonaEquipButtonVisible(::persona::PieceOfferWrapper const&, bool const) const;

    MCNAPI bool isPieceEquipped(std::string const&) const;

    MCNAPI bool isPieceLoaded(::mce::UUID const&) const;

    MCNAPI bool isPieceOfferLoading(::persona::PieceOfferWrapper const&) const;

    MCNAPI bool isPiecePreviewed(std::string const&) const;

    MCNAPI bool isRealmsPlusBannerVisible(::persona::PieceOfferWrapper const&) const;

    MCNAPI bool isRealmsRedeemButtonVisible(::persona::PieceOfferWrapper const&) const;

    MCNAPI bool isRealmsSubscriptionButtonVisible(::persona::PieceOfferWrapper const&) const;

    MCNAPI bool isSkinOwned(::SkinPackModel const&, ::SkinHandle const&) const;

    MCNAPI bool isSkinRestricted(::SkinPackModel const&) const;

    MCNAPI void newCharacter(::LinksToStyle const&, uint const);

    MCNAPI void sendCurrentPersonaSkinIfNeeded(::PersonaAppearance const&, bool);

    MCNAPI void setSelectedSkinHandle(::SkinHandle);

    MCNAPI bool setUseClassicSkinOnPersona(::persona::PersonaCharacterHandle const&, bool);

    MCNAPI void showProfileSettingsScreen();

    MCNAPI void syncSelectedSkinHandle();

    MCNAPI void updateOfferClickedData(::Social::eventData::PersonaOfferClickedData&&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::MinecraftScreenModelContext);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::SkinHandle const& $getSelectedSkinHandle() const;

    MCNAPI void $update(::ui::DirtyFlag&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
