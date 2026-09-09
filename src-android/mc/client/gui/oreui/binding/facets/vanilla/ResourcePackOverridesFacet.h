#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/DefinitionPropertyNames.h"
#include "mc/client/gui/ResolvedPropertyData.h"
#include "mc/client/gui/ResolvedTextureData.h"
#include "mc/client/gui/ResourcePackResolver.h"
#include "mc/client/gui/oreui/binding/FacetBase_DEPRECATED.h"
#include "mc/client/gui/oreui/interface/FacetAvailability.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class IUIDefRepository;
class IUIRepository;
class ResourcePackManager;
namespace UI::Resources { struct ResolvedDefinition; }
// clang-format on

namespace OreUI {

class ResourcePackOverridesFacet : public ::OreUI::FacetBase_DEPRECATED<OreUI::ResourcePackOverridesFacet> {
public:
    // ResourcePackOverridesFacet inner types declare
    // clang-format off
    struct FacetDefinitionData;
    // clang-format on

    // ResourcePackOverridesFacet inner types define
    struct FacetDefinitionData {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 24, std::string>                                      identifier;
        ::ll::TypedStorage<8, 24, std::string>                                      control;
        ::ll::TypedStorage<8, 24, std::vector<UI::Resources::ResolvedTextureData>>  textureData;
        ::ll::TypedStorage<8, 24, std::vector<UI::Resources::ResolvedPropertyData>> propertyData;
        // NOLINTEND

    public:
        // prevent constructor by default
        FacetDefinitionData& operator=(FacetDefinitionData const&);
        FacetDefinitionData(FacetDefinitionData const&);
        FacetDefinitionData();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ~FacetDefinitionData();
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
    ::ll::TypedStorage<8, 8, double>                                 mLastUpdated;
    ::ll::TypedStorage<8, 72, ::UI::Resources::ResourcePackResolver> mResourcePackResolver;
    ::ll::TypedStorage<8, 24, std::vector<OreUI::ResourcePackOverridesFacet::FacetDefinitionData>> mFacetDefinitionData;
    ::ll::TypedStorage<8, 24, std::vector<UI::Resources::DefinitionPropertyNames>> mDefinitionsToResolve;
    // NOLINTEND

public:
    // prevent constructor by default
    ResourcePackOverridesFacet();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ResourcePackOverridesFacet();

    virtual bool update();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ResourcePackOverridesFacet(
        ::gsl::not_null<Bedrock::NonOwnerPointer<const IUIDefRepository>>,
        ::gsl::not_null<Bedrock::NonOwnerPointer<IUIRepository>>,
        ::ResourcePackManager&
    );
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::OreUI::FacetAvailability const& AVAILABILITY();

    MCNAPI static ::std::add_lvalue_reference_t<char const[30]> NAME();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::gsl::not_null<Bedrock::NonOwnerPointer<const IUIDefRepository>>,
        ::gsl::not_null<Bedrock::NonOwnerPointer<IUIRepository>>,
        ::ResourcePackManager&
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
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace OreUI
