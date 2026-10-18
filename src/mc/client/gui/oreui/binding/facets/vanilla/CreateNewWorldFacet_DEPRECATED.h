#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/oreui/binding/FacetBase_DEPRECATED.h"
#include "mc/client/gui/oreui/binding/FacetTaskState.h"
#include "mc/client/gui/oreui/binding/FacetTaskTracker.h"
#include "mc/client/gui/oreui/binding/facets/vanilla/CreateOnRealmsError.h"
#include "mc/client/gui/oreui/binding/facets/vanilla/CreateWorldError.h"
#include "mc/client/gui/oreui/interface/FacetAvailability.h"
#include "mc/client/gui/screens/ProgressScreenNavigation.h"
#include "mc/client/network/realms/RealmId.h"
#include "mc/client/network/realms/World.h"
#include "mc/deps/core/threading/TaskGroup.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/world/level/LevelListCacheObserver.h"

// auto generated forward declare list
// clang-format off
class ContentAcquisition;
class ILevelListCache;
class WorldSettingsRules;
struct LevelSummary;
namespace OreUI { class IResourceAllowList; }
namespace OreUI { class Router; }
namespace OreUI { class WorldSettingsProvider_DEPRECATED; }
namespace OreUI { struct LevelDataBindings; }
// clang-format on

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/oreui/binding/FacetBase_DEPRECATED.h"
#include "mc/client/gui/oreui/binding/FacetTaskState.h"
#include "mc/client/gui/oreui/binding/FacetTaskTracker.h"
#include "mc/client/gui/oreui/binding/facets/vanilla/CreateOnRealmsError.h"
#include "mc/client/gui/oreui/binding/facets/vanilla/CreateWorldError.h"
#include "mc/client/gui/screens/ProgressScreenNavigation.h"
#include "mc/client/network/realms/RealmId.h"
#include "mc/client/network/realms/World.h"
#include "mc/deps/core/threading/TaskGroup.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/world/level/LevelListCacheObserver.h"

// auto generated forward declare list
// clang-format off
class ContentAcquisition;
class ILevelListCache;
class WorldSettingsRules;
struct LevelSummary;
namespace OreUI { class IResourceAllowList; }
namespace OreUI { class Router; }
namespace OreUI { class WorldSettingsProvider_DEPRECATED; }
namespace OreUI { struct LevelDataBindings; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace OreUI {

#if defined(LL_PLAT_A) // @header-generator platform
class CreateNewWorldFacet_DEPRECATED : public ::OreUI::FacetBase_DEPRECATED<OreUI::CreateNewWorldFacet_DEPRECATED>,
                                       public ::LevelListCacheObserver {
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
class CreateNewWorldFacet_DEPRECATED : public ::OreUI::FacetBase_DEPRECATED<::OreUI::CreateNewWorldFacet_DEPRECATED>,
                                       public ::LevelListCacheObserver {
#else // @header-generator platform
class CreateNewWorldFacet_DEPRECATED {
#endif // @header-generator platform
#endif // @header-generator platform
public:
    // CreateNewWorldFacet_DEPRECATED inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    enum class FacetStatus : uchar {
        CheckCanStartLocalServer  = 0,
        CheckDlcError             = 1,
        CheckingDlc               = 2,
        WaitForDlcImport          = 3,
        CopyingResourcePacks      = 4,
        Idle                      = 5,
        InputError                = 6,
        JoinRealm                 = 7,
        LoadingWorldTemplate      = 8,
        SelectRealmsSlot          = 9,
        StartCopyingResourcePacks = 10,
        StartCreatingWorld        = 11,
        StartLocalServer          = 12,
        UploadToRealm             = 13,
        WaitForServerStart        = 14,
        WorldCreationComplete     = 15,
        WorldCreationFailed       = 16,
        EnsureSignIn              = 17,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>                                                 mIsDirty;
    ::ll::TypedStorage<1, 1, ::OreUI::CreateNewWorldFacet_DEPRECATED::FacetStatus> mStatus;
    ::ll::TypedStorage<8, 8, ::LevelSummary&>                                      mLevelSummary;
    ::ll::TypedStorage<8, 8, ::WorldSettingsRules&>                                mWorldSettingsRules;
    ::ll::TypedStorage<8, 8, ::ILevelListCache&>                                   mLevelListCache;
    ::ll::TypedStorage<4, 8, std::optional<OreUI::CreateWorldError>>               mCreateWorldError;
    ::ll::TypedStorage<4, 8, std::optional<OreUI::CreateOnRealmsError>>            mCreateOnRealmsError;
    ::ll::TypedStorage<8, 240, ::TaskGroup>                                        mTaskGroup;
    ::ll::TypedStorage<8, 24, std::string>                                         mCheckDlcError;
    ::ll::TypedStorage<8, 24, std::string>                                         mInputError;
    ::ll::TypedStorage<1, 1, bool>                                                 mShowedAchievementWarning;
    ::ll::TypedStorage<8, 8, ::OreUI::Router&>                                     mUiRouter;
    ::ll::UntypedStorage<8, 24>                                                    mWorldSettingsProvider;
    ::ll::UntypedStorage<8, 96>                                                    mProgressScreenNavigation;
    ::ll::TypedStorage<8, 608, ::Realms::World>                                    mRealmWorld;
    ::ll::UntypedStorage<4, 12>                                                    mApplyTemplateTask;
    ::ll::TypedStorage<1, 1, bool>                                                 mCreatingOnRealms;
    ::ll::TypedStorage<1, 1, bool>                                                 mInWorldCreation;
    ::ll::UntypedStorage<8, 24>                                                    mResourceAllowList;
    ::ll::TypedStorage<8, 24, std::string>                                         mWorldPreviewImageOverride;
    ::ll::UntypedStorage<8, 8>                                                     mCreatedPreviewRealmId;
    ::ll::TypedStorage<8, 16, std::shared_ptr<bool>>                               mIsAlive;
    ::ll::UntypedStorage<8, 24>                                                    mContentAcquisition;
    // NOLINTEND

public:
    // prevent constructor by default
    CreateNewWorldFacet_DEPRECATED& operator=(CreateNewWorldFacet_DEPRECATED const&);
    CreateNewWorldFacet_DEPRECATED(CreateNewWorldFacet_DEPRECATED const&);
    CreateNewWorldFacet_DEPRECATED();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~CreateNewWorldFacet_DEPRECATED();

    virtual bool update();

    virtual void onStorageChanged();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI CreateNewWorldFacet_DEPRECATED(
        ::OreUI::Router&,
        std::shared_ptr<OreUI::WorldSettingsProvider_DEPRECATED>,
        ::gsl::not_null<Bedrock::NonOwnerPointer<OreUI::IResourceAllowList>>,
        ::ILevelListCache&,
        ::gsl::not_null<Bedrock::NonOwnerPointer<ContentAcquisition>>,
        ::ui::ProgressScreenNavigation
    );

    MCNAPI void applyTemplate(std::string const&);

    MCNAPI void clearErrors();

    MCNAPI bool consumeResetFlag() const;

    MCNAPI void createOnRealms();

    MCNAPI void createWorld();

    MCNAPI void createWorldOnPreviewRealm(std::string);

    MCNAPI ::OreUI::FacetTaskState getApplyTemplateTaskState();

    MCNAPI std::optional<OreUI::CreateOnRealmsError> const& getCreateOnRealmsError() const;

    MCNAPI std::optional<OreUI::CreateWorldError> const& getCreateWorldError() const;

    MCNAPI ::OreUI::LevelDataBindings& getLevelDataBindings() const;

    MCNAPI std::string const& getWorldPreviewImagePath() const;

    MCNAPI bool hasConfirmedPlatformLockedContent() const;

    MCNAPI bool hasUserChangedSettings() const;

    MCNAPI bool isCreatingWorld() const;

    MCNAPI bool isEditorWorld() const;

    MCNAPI bool isRandomSeedAllowed() const;

    MCNAPI void selectRealmToCreateOn(std::string const&);

    MCNAPI void setConfirmedPlatformLockedContent(bool);

    MCNAPI void setWorldPreviewImagePath(std::string const&);

    MCNAPI void unlockTemplateSettings();

    MCNAPI void updateWorldPreviewImagePath();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::OreUI::FacetAvailability const& AVAILABILITY();

    MCNAPI static ::std::add_lvalue_reference_t<char const[23]> NAME();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::OreUI::Router&,
        std::shared_ptr<OreUI::WorldSettingsProvider_DEPRECATED>,
        ::gsl::not_null<Bedrock::NonOwnerPointer<OreUI::IResourceAllowList>>,
        ::ILevelListCache&,
        ::gsl::not_null<Bedrock::NonOwnerPointer<ContentAcquisition>>,
        ::ui::ProgressScreenNavigation
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
    MCNAPI bool $update();

    MCNAPI void $onStorageChanged();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
    enum class FacetStatus : uchar {
        CheckCanStartLocalServer  = 0,
        CheckDlcError             = 1,
        CheckingDlc               = 2,
        WaitForDlcImport          = 3,
        CopyingResourcePacks      = 4,
        Idle                      = 5,
        InputError                = 6,
        JoinRealm                 = 7,
        LoadingWorldTemplate      = 8,
        SelectRealmsSlot          = 9,
        StartCopyingResourcePacks = 10,
        StartCreatingWorld        = 11,
        StartLocalServer          = 12,
        UploadToRealm             = 13,
        WaitForServerStart        = 14,
        WorldCreationComplete     = 15,
        WorldCreationFailed       = 16,
        EnsureSignIn              = 17,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>                                                          mIsDirty;
    ::ll::TypedStorage<1, 1, ::OreUI::CreateNewWorldFacet_DEPRECATED::FacetStatus>          mStatus;
    ::ll::TypedStorage<8, 8, ::LevelSummary&>                                               mLevelSummary;
    ::ll::TypedStorage<8, 8, ::WorldSettingsRules&>                                         mWorldSettingsRules;
    ::ll::TypedStorage<8, 8, ::ILevelListCache&>                                            mLevelListCache;
    ::ll::TypedStorage<4, 8, ::std::optional<::OreUI::CreateWorldError>>                    mCreateWorldError;
    ::ll::TypedStorage<4, 8, ::std::optional<::OreUI::CreateOnRealmsError>>                 mCreateOnRealmsError;
    ::ll::TypedStorage<8, 336, ::TaskGroup>                                                 mTaskGroup;
    ::ll::TypedStorage<8, 32, ::std::string>                                                mCheckDlcError;
    ::ll::TypedStorage<8, 32, ::std::string>                                                mInputError;
    ::ll::TypedStorage<1, 1, bool>                                                          mShowedAchievementWarning;
    ::ll::TypedStorage<8, 8, ::OreUI::Router&>                                              mUiRouter;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::OreUI::WorldSettingsProvider_DEPRECATED>> mWorldSettingsProvider;
    ::ll::TypedStorage<8, 104, ::ui::ProgressScreenNavigation>                              mProgressScreenNavigation;
    ::ll::TypedStorage<8, 720, ::Realms::World>                                             mRealmWorld;
    ::ll::TypedStorage<4, 12, ::OreUI::FacetTaskTracker<::std::monostate>>                  mApplyTemplateTask;
    ::ll::TypedStorage<1, 1, bool>                                                          mCreatingOnRealms;
    ::ll::TypedStorage<1, 1, bool>                                                          mInWorldCreation;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::OreUI::IResourceAllowList>>   mResourceAllowList;
    ::ll::TypedStorage<8, 32, ::std::string>                                                mWorldPreviewImageOverride;
    ::ll::TypedStorage<8, 8, ::Realms::RealmId>                                             mCreatedPreviewRealmId;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<bool>>                                      mIsAlive;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::ContentAcquisition>>          mContentAcquisition;
    // NOLINTEND

public:
    // prevent constructor by default
    CreateNewWorldFacet_DEPRECATED& operator=(CreateNewWorldFacet_DEPRECATED const&);
    CreateNewWorldFacet_DEPRECATED(CreateNewWorldFacet_DEPRECATED const&);
    CreateNewWorldFacet_DEPRECATED();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~CreateNewWorldFacet_DEPRECATED() /*override*/ = default;

    virtual bool update() /*override*/;

    virtual void onStorageChanged() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI CreateNewWorldFacet_DEPRECATED(
        ::OreUI::Router&                                             uiRouter,
        ::std::shared_ptr<::OreUI::WorldSettingsProvider_DEPRECATED> worldSettingsProvider,
        ::Bedrock::NotNullNonOwnerPtr<::OreUI::IResourceAllowList>   resourceAllowList,
        ::ILevelListCache&                                           levelListCache,
        ::Bedrock::NotNullNonOwnerPtr<::ContentAcquisition>          contentAcquisition,
        ::ui::ProgressScreenNavigation                               progressScreenNavigation
    );

    MCAPI void applyTemplate(::std::string const& worldTemplateId);

    MCAPI void clearErrors();

    MCAPI bool consumeResetFlag() const;

    MCAPI void createOnRealms();

    MCAPI void createWorld();

    MCAPI void createWorldOnPreviewRealm(::std::string realmId);

    MCAPI ::OreUI::FacetTaskState getApplyTemplateTaskState();

    MCFOLD ::std::optional<::OreUI::CreateOnRealmsError> const& getCreateOnRealmsError() const;

    MCFOLD ::std::optional<::OreUI::CreateWorldError> const& getCreateWorldError() const;

    MCAPI ::OreUI::LevelDataBindings& getLevelDataBindings() const;

    MCAPI ::std::string const& getWorldPreviewImagePath() const;

    MCAPI bool hasConfirmedPlatformLockedContent() const;

    MCAPI bool hasUserChangedSettings() const;

    MCAPI bool isCreatingWorld() const;

    MCAPI bool isEditorWorld() const;

    MCAPI bool isRandomSeedAllowed() const;

    MCFOLD void selectRealmToCreateOn(::std::string const& realmId);

    MCAPI void setConfirmedPlatformLockedContent(bool value);

    MCAPI void setWorldPreviewImagePath(::std::string const& worldPreviewImagePath);

    MCAPI void unlockTemplateSettings();

    MCAPI void updateWorldPreviewImagePath();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::add_lvalue_reference_t<char const[]> NAME();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::OreUI::Router&                                             uiRouter,
        ::std::shared_ptr<::OreUI::WorldSettingsProvider_DEPRECATED> worldSettingsProvider,
        ::Bedrock::NotNullNonOwnerPtr<::OreUI::IResourceAllowList>   resourceAllowList,
        ::ILevelListCache&                                           levelListCache,
        ::Bedrock::NotNullNonOwnerPtr<::ContentAcquisition>          contentAcquisition,
        ::ui::ProgressScreenNavigation                               progressScreenNavigation
    );
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool $update();

    MCAPI void $onStorageChanged();
    // NOLINTEND
#else // @header-generator platform
    enum class FacetStatus : uchar {};
#endif // @header-generator platform
#endif // @header-generator platform
};

} // namespace OreUI
