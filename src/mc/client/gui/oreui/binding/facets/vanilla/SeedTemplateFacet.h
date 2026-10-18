#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/oreui/binding/FacetBase_DEPRECATED.h"
#include "mc/client/gui/oreui/interface/FacetAvailability.h"
#include "mc/client/gui/screens/models/WorldSeedCatalogModel.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class DateManager;
class WorldSeedModel;
namespace OreUI { class IResourceAllowList; }
namespace Social { class IUserManager; }
// clang-format on

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/oreui/binding/FacetBase_DEPRECATED.h"
#include "mc/client/gui/screens/models/WorldSeedCatalogModel.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class DateManager;
class WorldSeedModel;
namespace OreUI { class IResourceAllowList; }
namespace Social { class IUserManager; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace OreUI {

#if defined(LL_PLAT_A) // @header-generator platform
class SeedTemplateFacet : public ::OreUI::FacetBase_DEPRECATED<OreUI::SeedTemplateFacet> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 296> mWorldSeedCatalogModel;
    // NOLINTEND

public:
    // prevent constructor by default
    SeedTemplateFacet();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~SeedTemplateFacet();

    virtual bool update();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI SeedTemplateFacet(
        ::gsl::not_null<Bedrock::NonOwnerPointer<const DateManager>>,
        ::gsl::not_null<Bedrock::NonOwnerPointer<Social::IUserManager>>,
        ::gsl::not_null<Bedrock::NonOwnerPointer<OreUI::IResourceAllowList>> const&
    );

    MCNAPI bool failedFetch() const;

    MCNAPI std::vector<WorldSeedModel>& getWorldSeedModels();

    MCNAPI void refresh();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::OreUI::FacetAvailability const& AVAILABILITY();

    MCNAPI static ::std::add_lvalue_reference_t<char const[22]> NAME();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::gsl::not_null<Bedrock::NonOwnerPointer<const DateManager>>,
        ::gsl::not_null<Bedrock::NonOwnerPointer<Social::IUserManager>>,
        ::gsl::not_null<Bedrock::NonOwnerPointer<OreUI::IResourceAllowList>> const&
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
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
class SeedTemplateFacet : public ::OreUI::FacetBase_DEPRECATED<::OreUI::SeedTemplateFacet> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 360, ::WorldSeedCatalogModel> mWorldSeedCatalogModel;
    // NOLINTEND

public:
    // prevent constructor by default
    SeedTemplateFacet();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool update() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI SeedTemplateFacet(
        ::Bedrock::NotNullNonOwnerPtr<::DateManager const>                dateManager,
        ::Bedrock::NotNullNonOwnerPtr<::Social::IUserManager>             userManager,
        ::Bedrock::NotNullNonOwnerPtr<::OreUI::IResourceAllowList> const& resourceAllowList
    );

    MCAPI bool failedFetch() const;

    MCFOLD ::std::vector<::WorldSeedModel>& getWorldSeedModels();

    MCAPI void refresh();
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
        ::Bedrock::NotNullNonOwnerPtr<::DateManager const>                dateManager,
        ::Bedrock::NotNullNonOwnerPtr<::Social::IUserManager>             userManager,
        ::Bedrock::NotNullNonOwnerPtr<::OreUI::IResourceAllowList> const& resourceAllowList
    );
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool $update();
    // NOLINTEND
};
#else // @header-generator platform
class SeedTemplateFacet {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace OreUI
