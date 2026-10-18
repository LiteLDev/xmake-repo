#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/DirtyFlag.h"
#include "mc/client/gui/screens/managers/ProfileEntryPromptManager.h"
#include "mc/client/gui/screens/models/CharacterSelectorData.h"
#include "mc/client/gui/screens/models/CharacterSelectorVisibility.h"
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/util/Random.h"

// auto generated forward declare list
// clang-format off
class MinecraftScreenController;
class PersonaScreenModel;
class StoreDataDrivenScreenController;
class UIPropertyBag;
struct LinksToStyle;
struct ToggleChangeEventData;
// clang-format on

class CharacterSelectorModel : public ::Bedrock::EnableNonOwnerReferences {
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/DirtyFlag.h"
#include "mc/client/gui/screens/managers/ProfileEntryPromptManager.h"
#include "mc/client/gui/screens/models/CharacterSelectorVisibility.h"
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/util/Random.h"

// auto generated forward declare list
// clang-format off
class MinecraftScreenController;
class PersonaScreenModel;
class StoreDataDrivenScreenController;
class UIPropertyBag;
struct CharacterSelectorData;
struct LinksToStyle;
// clang-format on

class CharacterSelectorModel : public ::Bedrock::EnableNonOwnerReferences {
#else // @header-generator platform
class CharacterSelectorModel {
#endif // @header-generator platform
#endif // @header-generator platform
public:
    // CharacterSelectorModel inner types declare
    // clang-format off
    class CharacterSelectorFTUEModel;
    // clang-format on

    // CharacterSelectorModel inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    enum class AppearanceCreationType : int {
        Persona     = 0,
        ClassicSkin = 1,
        Count       = 2,
    };
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
    enum class AppearanceCreationType : int {
        Persona     = 0,
        ClassicSkin = 1,
        Count       = 2,
    };
#else // @header-generator platform
    enum class AppearanceCreationType : int {};
#endif // @header-generator platform
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    class CharacterSelectorFTUEModel {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, int> mCurrentPage;
        ::ll::TypedStorage<4, 4, int> mSubPage;
        // NOLINTEND

    public:
        // virtual functions
        // NOLINTBEGIN
        virtual ~CharacterSelectorFTUEModel();
        // NOLINTEND

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI bool nextPage(::gsl::not_null<Bedrock::NonOwnerPointer<MinecraftScreenController>>);

        MCNAPI void openCurrentPage(::gsl::not_null<Bedrock::NonOwnerPointer<MinecraftScreenController>>) const;

        MCNAPI bool prevPage(::gsl::not_null<Bedrock::NonOwnerPointer<MinecraftScreenController>>);
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

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24>                                                     mScreenController;
    ::ll::UntypedStorage<8, 24>                                                     mPersonaScreenModel;
    ::ll::UntypedStorage<8, 8>                                                      mClassicSkinLinksToStyle;
    ::ll::UntypedStorage<8, 8>                                                      mPersonaLinksToStyle;
    ::ll::TypedStorage<8, 40, ::ProfileEntryPromptManager>                          mEntryPromptManager;
    ::ll::TypedStorage<4, 8, ::glm::vec<2, int, (glm::qualifier)0>>                 mGridParams;
    ::ll::TypedStorage<4, 4, uint>                                                  mPreviewIndex;
    ::ll::TypedStorage<8, 2544, ::Random>                                           mRandom;
    ::ll::TypedStorage<4, 4, ::CharacterSelectorModel::AppearanceCreationType>      mAppearanceCreationType;
    ::ll::TypedStorage<4, 4, ::CharacterSelectorVisibility>                         mCastModalVisibility;
    ::ll::TypedStorage<8, 16, ::CharacterSelectorModel::CharacterSelectorFTUEModel> mFTUEData;
    ::ll::TypedStorage<8, 24, std::vector<CharacterSelectorData>>                   mSectionContent;
    ::ll::TypedStorage<1, 1, bool>                                                  mHasSeenLatestDefaultCharacterList;
    ::ll::TypedStorage<1, 1, bool>                                                  mSelectedCharacterWasNotReady;
    ::ll::TypedStorage<1, 1, bool>                                                  mFirstLoading;
    // NOLINTEND

public:
    // prevent constructor by default
    CharacterSelectorModel& operator=(CharacterSelectorModel const&);
    CharacterSelectorModel(CharacterSelectorModel const&);
    CharacterSelectorModel();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~CharacterSelectorModel();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI CharacterSelectorModel(
        ::gsl::not_null<Bedrock::NonOwnerPointer<MinecraftScreenController>>,
        ::gsl::not_null<Bedrock::NonOwnerPointer<PersonaScreenModel>>,
        ::LinksToStyle const&,
        ::LinksToStyle const&
    );

    MCNAPI void _closeCreatePersonaPopup();

    MCNAPI void _loadContentFromSkins();

    MCNAPI void _setUpBeforeCharacterEditorScreen();

    MCNAPI void bindPreviewSkin(::UIPropertyBag&);

    MCNAPI void castBack(::StoreDataDrivenScreenController&);

    MCNAPI void castLeft(::StoreDataDrivenScreenController&);

    MCNAPI void castRight(::StoreDataDrivenScreenController&);

    MCNAPI void castSelect();

    MCNAPI void closeCharacterSelectModal();

    MCNAPI void closeDialog(::StoreDataDrivenScreenController&);

    MCNAPI void closeEditPersona();

    MCNAPI void createSelectedPersona();

    MCNAPI std::string getAppearanceName() const;

    MCNAPI ::glm::vec<2, int, (glm::qualifier)0> getGridParams() const;

    MCNAPI bool getIsFirstLoading() const;

    MCNAPI std::string getPersonaConfirmText() const;

    MCNAPI std::string getPreviewImageFilePath(int) const;

    MCNAPI bool getTypeToggleState(int) const;

    MCNAPI bool isCastCharacterScreenModalOpen() const;

    MCNAPI bool isPreviewVisible(int) const;

    MCNAPI bool isSectionVisible(int) const;

    MCNAPI bool isSelectedCharacterReady() const;

    MCNAPI void launchDifferenceInformationPopup();

    MCNAPI void loadSkinBasedOnSelection(::UIPropertyBag const&);

    MCNAPI void openCharacterSelectModal(::CharacterSelectorVisibility);

    MCNAPI void openDefaultSelector(::StoreDataDrivenScreenController&);

    MCNAPI void tick(::ui::DirtyFlag&);

    MCNAPI bool toggleCreatePersonaChoice(::ToggleChangeEventData const&);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void closeDifferencesDialog(::StoreDataDrivenScreenController&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::gsl::not_null<Bedrock::NonOwnerPointer<MinecraftScreenController>>,
        ::gsl::not_null<Bedrock::NonOwnerPointer<PersonaScreenModel>>,
        ::LinksToStyle const&,
        ::LinksToStyle const&
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
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
    class CharacterSelectorFTUEModel {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, int> mCurrentPage;
        ::ll::TypedStorage<4, 4, int> mSubPage;
        // NOLINTEND

    public:
        // virtual functions
        // NOLINTBEGIN
        virtual ~CharacterSelectorFTUEModel() = default;
        // NOLINTEND

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI bool nextPage(::Bedrock::NotNullNonOwnerPtr<::MinecraftScreenController> screenController);

        MCAPI void openCurrentPage(::Bedrock::NotNullNonOwnerPtr<::MinecraftScreenController> screenController) const;

        MCAPI bool prevPage(::Bedrock::NotNullNonOwnerPtr<::MinecraftScreenController> screenController);
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::MinecraftScreenController>> mScreenController;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::PersonaScreenModel>>        mPersonaScreenModel;
    ::ll::TypedStorage<8, 8, ::LinksToStyle const&>                                       mClassicSkinLinksToStyle;
    ::ll::TypedStorage<8, 8, ::LinksToStyle const&>                                       mPersonaLinksToStyle;
    ::ll::TypedStorage<8, 40, ::ProfileEntryPromptManager>                                mEntryPromptManager;
    ::ll::TypedStorage<4, 8, ::glm::ivec2>                                                mGridParams;
    ::ll::TypedStorage<4, 4, uint>                                                        mPreviewIndex;
    ::ll::TypedStorage<8, 2544, ::Random>                                                 mRandom;
    ::ll::TypedStorage<4, 4, ::CharacterSelectorModel::AppearanceCreationType>            mAppearanceCreationType;
    ::ll::TypedStorage<4, 4, ::CharacterSelectorVisibility>                               mCastModalVisibility;
    ::ll::TypedStorage<8, 16, ::CharacterSelectorModel::CharacterSelectorFTUEModel>       mFTUEData;
    ::ll::TypedStorage<8, 24, ::std::vector<::CharacterSelectorData>>                     mSectionContent;
    ::ll::TypedStorage<1, 1, bool> mHasSeenLatestDefaultCharacterList;
    ::ll::TypedStorage<1, 1, bool> mSelectedCharacterWasNotReady;
    ::ll::TypedStorage<1, 1, bool> mFirstLoading;
    // NOLINTEND

public:
    // prevent constructor by default
    CharacterSelectorModel& operator=(CharacterSelectorModel const&);
    CharacterSelectorModel(CharacterSelectorModel const&);
    CharacterSelectorModel();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~CharacterSelectorModel() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI CharacterSelectorModel(
        ::Bedrock::NotNullNonOwnerPtr<::MinecraftScreenController> screenController,
        ::Bedrock::NotNullNonOwnerPtr<::PersonaScreenModel>        screenModel,
        ::LinksToStyle const&                                      classicSkinLinksToStyle,
        ::LinksToStyle const&                                      personaLinksToStyle
    );

    MCAPI void _closeCreatePersonaPopup();

    MCAPI void _loadContentFromSkins();

    MCAPI void _setUpBeforeCharacterEditorScreen();

    MCAPI void bindPreviewSkin(::UIPropertyBag& bag);

    MCAPI void castBack(::StoreDataDrivenScreenController& controller);

    MCAPI void castLeft(::StoreDataDrivenScreenController& controller);

    MCAPI void castRight(::StoreDataDrivenScreenController& controller);

    MCAPI void closeCharacterSelectModal();

    MCAPI void closeDialog(::StoreDataDrivenScreenController& controller);

    MCAPI void createSelectedPersona();

    MCAPI ::std::string getAppearanceName() const;

    MCAPI ::std::string getPersonaConfirmText() const;

    MCAPI ::std::string getPreviewImageFilePath(int index) const;

    MCAPI bool isSelectedCharacterReady() const;

    MCAPI void launchDifferenceInformationPopup();

    MCAPI void openCharacterSelectModal(::CharacterSelectorVisibility previewMode);

    MCAPI void openDefaultSelector(::StoreDataDrivenScreenController& controller);

    MCAPI void tick(::ui::DirtyFlag& dirtyFlags);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void closeDifferencesDialog(::StoreDataDrivenScreenController& controller);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::Bedrock::NotNullNonOwnerPtr<::MinecraftScreenController> screenController,
        ::Bedrock::NotNullNonOwnerPtr<::PersonaScreenModel>        screenModel,
        ::LinksToStyle const&                                      classicSkinLinksToStyle,
        ::LinksToStyle const&                                      personaLinksToStyle
    );
    // NOLINTEND
#else // @header-generator platform
    class CharacterSelectorFTUEModel {};
#endif // @header-generator platform
#endif // @header-generator platform
};
