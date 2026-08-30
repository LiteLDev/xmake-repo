#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/interface/FacetRegistryLocation.h"
#include "mc/client/gui/oreui/interface/IFacetRegistry.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
namespace OreUI { class FacetBinder; }
namespace OreUI { class IFacet; }
// clang-format on

namespace OreUI {

class FacetRegistry : public ::OreUI::IFacetRegistry {
public:
    // FacetRegistry inner types declare
    // clang-format off
    struct FacetEntry;
    struct FacetPrototype;
    // clang-format on

    // FacetRegistry inner types define
    struct FacetEntry {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 24, std::string>                   name;
        ::ll::TypedStorage<8, 24, std::string>                   id;
        ::ll::TypedStorage<8, 8, std::unique_ptr<OreUI::IFacet>> facet;
        ::ll::TypedStorage<1, 1, bool>                           isSuspended;
        // NOLINTEND

    public:
        // prevent constructor by default
        FacetEntry& operator=(FacetEntry const&);
        FacetEntry(FacetEntry const&);
        FacetEntry();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ~FacetEntry();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

    struct FacetPrototype {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 32> name;
        ::ll::UntypedStorage<8, 48> constructor;
        // NOLINTEND

    public:
        // prevent constructor by default
        FacetPrototype& operator=(FacetPrototype const&);
        FacetPrototype();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ~FacetPrototype();
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
    ::ll::TypedStorage<4, 4, ::OreUI::FacetRegistryLocation>                     mLocation;
    ::ll::TypedStorage<8, 24, std::vector<std::string>>                          mUpdatingFacets;
    ::ll::TypedStorage<8, 24, std::vector<OreUI::FacetRegistry::FacetEntry>>     mFacets;
    ::ll::TypedStorage<8, 24, std::vector<OreUI::FacetRegistry::FacetPrototype>> mFacetPrototypes;
    ::ll::TypedStorage<1, 1, bool>                                               mIsActivationDisabled;
    // NOLINTEND

public:
    // prevent constructor by default
    FacetRegistry();

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~FacetRegistry();

    virtual std::unordered_map<std::string, gsl::not_null<Bedrock::NonOwnerPointer<OreUI::IFacet>>> getActiveFacets();

    virtual void registerFacet(std::string const&, std::function<std::unique_ptr<OreUI::IFacet> ()> const&);

    virtual std::optional<OreUI::IFacetRegistry::Error> activateFacet(::OreUI::FacetBinder&, std::string const&, std::string const&, std::unordered_map<std::string, std::variant<double, bool, std::string>> const&);

    virtual std::optional<OreUI::IFacetRegistry::Error> deactivateFacet(::OreUI::FacetBinder&, std::string const&);

    virtual void clearAllFacets();

    virtual void suspendAllFacets();

    virtual void disableFacetActivation();

    virtual void bind(::OreUI::FacetBinder&);

    virtual std::vector<std::string> const& update(::OreUI::FacetBinder&);
    // clang-format on
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI std::unordered_map<std::string, gsl::not_null<Bedrock::NonOwnerPointer<OreUI::IFacet>>> $getActiveFacets();

    MCNAPI void $registerFacet(std::string const&, std::function<std::unique_ptr<OreUI::IFacet>()> const&);

    MCNAPI std::optional<OreUI::IFacetRegistry::Error> $activateFacet(
        ::OreUI::FacetBinder&,
        std::string const&,
        std::string const&,
        std::unordered_map<std::string, std::variant<double, bool, std::string>> const&
    );

    MCNAPI std::optional<OreUI::IFacetRegistry::Error> $deactivateFacet(::OreUI::FacetBinder&, std::string const&);

    MCNAPI void $clearAllFacets();

    MCNAPI void $suspendAllFacets();

    MCNAPI void $disableFacetActivation();

    MCNAPI void $bind(::OreUI::FacetBinder&);

    MCNAPI std::vector<std::string> const& $update(::OreUI::FacetBinder&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace OreUI
