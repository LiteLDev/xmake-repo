#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/oreui/binding/FacetBase_DEPRECATED.h"
#include "mc/client/gui/oreui/interface/FacetAvailability.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class NewPlayerSystem;
class PersonaClient;
// clang-format on

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/oreui/binding/FacetBase_DEPRECATED.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class NewPlayerSystem;
class PersonaClient;
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace OreUI {

#if defined(LL_PLAT_A) // @header-generator platform
class NewPlayerChoicesFacet : public ::OreUI::FacetBase_DEPRECATED<OreUI::NewPlayerChoicesFacet> {
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
class NewPlayerChoicesFacet : public ::OreUI::FacetBase_DEPRECATED<::OreUI::NewPlayerChoicesFacet> {
#else // @header-generator platform
class NewPlayerChoicesFacet {
#endif // @header-generator platform
#endif // @header-generator platform
public:
    // NewPlayerChoicesFacet inner types declare
    // clang-format off
    struct SelectableCharacter;
    // clang-format on

    // NewPlayerChoicesFacet inner types define
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
    struct SelectableCharacter {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 32, ::std::string> mName;
        ::ll::TypedStorage<8, 32, ::std::string> mId;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::OreUI::NewPlayerChoicesFacet::SelectableCharacter>> mSelectableCharacters;
    ::ll::TypedStorage<1, 1, bool>                                                                mIsDirty;
    ::ll::TypedStorage<8, 8, ::PersonaClient&>                                                    mPersonaClient;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::NewPlayerSystem> const>             mNewPlayerSystem;
    // NOLINTEND

public:
    // prevent constructor by default
    NewPlayerChoicesFacet& operator=(NewPlayerChoicesFacet const&);
    NewPlayerChoicesFacet(NewPlayerChoicesFacet const&);
    NewPlayerChoicesFacet();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool update() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI NewPlayerChoicesFacet(
        ::PersonaClient&                                        personaClient,
        ::Bedrock::NotNullNonOwnerPtr<::NewPlayerSystem> const& newPlayerSystem
    );

    MCAPI void _populateCharacterSkinData();

    MCAPI void applySelectedCharacterSkin() const;

    MCAPI ::std::string const& getSelectedCharacterId() const;

    MCAPI void setIsCreative(bool creative);

    MCAPI void setSelectedCharacter(::std::string const& selectedId);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::add_lvalue_reference_t<char const[]> NAME();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void*
    $ctor(::PersonaClient& personaClient, ::Bedrock::NotNullNonOwnerPtr<::NewPlayerSystem> const& newPlayerSystem);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool $update();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
#else // @header-generator platform
    struct SelectableCharacter {};
#endif // @header-generator platform
#endif // @header-generator platform
};

} // namespace OreUI
