#pragma once

#include "mc/_HeaderOutputPredefine.h"

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
public:
    // CharacterSelectorModel inner types declare
    // clang-format off
    class CharacterSelectorFTUEModel;
    // clang-format on

    // CharacterSelectorModel inner types define
    enum class AppearanceCreationType : int {
        Persona     = 0,
        ClassicSkin = 1,
        Count       = 2,
    };

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
};
