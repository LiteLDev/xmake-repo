#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/FacetBase_DEPRECATED.h"
#include "mc/client/gui/oreui/interface/FacetAvailability.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class NewPlayerSystem;
class PersonaClient;
// clang-format on

namespace OreUI {

class NewPlayerChoicesFacet : public ::OreUI::FacetBase_DEPRECATED<OreUI::NewPlayerChoicesFacet> {
public:
    // NewPlayerChoicesFacet inner types declare
    // clang-format off
    struct SelectableCharacter;
    // clang-format on

    // NewPlayerChoicesFacet inner types define
    struct SelectableCharacter {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 24, std::string> mName;
        ::ll::TypedStorage<8, 24, std::string> mId;
        // NOLINTEND

    public:
        // prevent constructor by default
        SelectableCharacter& operator=(SelectableCharacter const&);
        SelectableCharacter(SelectableCharacter const&);
        SelectableCharacter();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ~SelectableCharacter();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::vector<OreUI::NewPlayerChoicesFacet::SelectableCharacter>> mSelectableCharacters;
    ::ll::TypedStorage<1, 1, bool>                                                            mIsDirty;
    ::ll::TypedStorage<8, 8, ::PersonaClient&>                                                mPersonaClient;
    ::ll::UntypedStorage<8, 24>                                                               mNewPlayerSystem;
    // NOLINTEND

public:
    // prevent constructor by default
    NewPlayerChoicesFacet& operator=(NewPlayerChoicesFacet const&);
    NewPlayerChoicesFacet(NewPlayerChoicesFacet const&);
    NewPlayerChoicesFacet();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~NewPlayerChoicesFacet();

    virtual bool update();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI NewPlayerChoicesFacet(::PersonaClient&, ::gsl::not_null<Bedrock::NonOwnerPointer<NewPlayerSystem>> const&);

    MCNAPI void _populateCharacterSkinData();

    MCNAPI void applySelectedCharacterSkin() const;

    MCNAPI std::string const& getSelectedCharacterId() const;

    MCNAPI void setIsCreative(bool);

    MCNAPI void setSelectedCharacter(std::string const&);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::OreUI::FacetAvailability const& AVAILABILITY();

    MCNAPI static ::std::add_lvalue_reference_t<char const[25]> NAME();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::PersonaClient&, ::gsl::not_null<Bedrock::NonOwnerPointer<NewPlayerSystem>> const&);
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
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace OreUI
