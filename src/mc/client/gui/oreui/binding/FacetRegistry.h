#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/oreui/interface/FacetRegistryLocation.h"
#include "mc/client/gui/oreui/interface/IFacetRegistry.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
namespace OreUI { class FacetBinder; }
namespace OreUI { class IFacet; }
// clang-format on

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/oreui/interface/FacetRegistryLocation.h"
#include "mc/client/gui/oreui/interface/IFacetRegistry.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
namespace OreUI { class FacetBinder; }
namespace OreUI { class IFacet; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace OreUI {

#if defined(LL_PLAT_A) // @header-generator platform
class FacetRegistry : public ::OreUI::IFacetRegistry {
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
class FacetRegistry : public ::OreUI::IFacetRegistry {
#else // @header-generator platform
class FacetRegistry {
#endif // @header-generator platform
#endif // @header-generator platform
public:
    // FacetRegistry inner types declare
    // clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
    struct FacetEntry;
#else // @header-generator platform
#endif // @header-generator platform
    struct FacetPrototype;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    struct FacetEntry;
#endif // @header-generator platform
    // clang-format on

    // FacetRegistry inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    struct FacetEntry {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 24, std::string>                   name;
        ::ll::TypedStorage<8, 24, std::string>                   id;
        ::ll::TypedStorage<8, 8, std::unique_ptr<OreUI::IFacet>> facet;
        ::ll::TypedStorage<1, 1, bool>                           isSuspended;
        // NOLINTEND
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
    struct FacetPrototype {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 32, ::std::string const>                                         name;
        ::ll::TypedStorage<8, 64, ::std::function<::std::unique_ptr<::OreUI::IFacet>()> const> constructor;
        // NOLINTEND
    };
#else // @header-generator platform
    struct FacetPrototype {};
#endif // @header-generator platform
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
    struct FacetEntry {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 32, ::std::string>                     name;
        ::ll::TypedStorage<8, 32, ::std::string>                     id;
        ::ll::TypedStorage<8, 8, ::std::unique_ptr<::OreUI::IFacet>> facet;
        ::ll::TypedStorage<1, 1, bool>                               isSuspended;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::OreUI::FacetRegistryLocation>                         mLocation;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::string>>                          mUpdatingFacets;
    ::ll::TypedStorage<8, 24, ::std::vector<::OreUI::FacetRegistry::FacetEntry>>     mFacets;
    ::ll::TypedStorage<8, 24, ::std::vector<::OreUI::FacetRegistry::FacetPrototype>> mFacetPrototypes;
    ::ll::TypedStorage<1, 1, bool>                                                   mIsActivationDisabled;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~FacetRegistry() /*override*/ = default;

    virtual void registerFacet(
        ::std::string const&                                         name,
        ::std::function<::std::unique_ptr<::OreUI::IFacet>()> const& constructor
    ) /*override*/;

    virtual ::std::optional<::OreUI::IFacetRegistry::Error> activateFacet(
        ::OreUI::FacetBinder&                                                                   binder,
        ::std::string const&                                                                    name,
        ::std::string const&                                                                    id,
        ::std::unordered_map<::std::string, ::std::variant<double, bool, ::std::string>> const& payload
    ) /*override*/;

    virtual ::std::optional<::OreUI::IFacetRegistry::Error>
    deactivateFacet(::OreUI::FacetBinder& binder, ::std::string const& id) /*override*/;

    virtual void clearAllFacets() /*override*/;

    virtual void suspendAllFacets() /*override*/;

    virtual void disableFacetActivation() /*override*/;

    virtual void bind(::OreUI::FacetBinder& binder) /*override*/;

    virtual ::std::vector<::std::string> const& update(::OreUI::FacetBinder& binder) /*override*/;

    virtual ::std::unordered_map<::std::string, ::Bedrock::NotNullNonOwnerPtr<::OreUI::IFacet>>
    getActiveFacets() /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void
    $registerFacet(::std::string const& name, ::std::function<::std::unique_ptr<::OreUI::IFacet>()> const& constructor);

    MCAPI ::std::optional<::OreUI::IFacetRegistry::Error> $activateFacet(
        ::OreUI::FacetBinder&                                                                   binder,
        ::std::string const&                                                                    name,
        ::std::string const&                                                                    id,
        ::std::unordered_map<::std::string, ::std::variant<double, bool, ::std::string>> const& payload
    );

    MCAPI ::std::optional<::OreUI::IFacetRegistry::Error>
    $deactivateFacet(::OreUI::FacetBinder& binder, ::std::string const& id);

    MCAPI void $clearAllFacets();

    MCAPI void $suspendAllFacets();

    MCFOLD void $disableFacetActivation();

    MCAPI void $bind(::OreUI::FacetBinder& binder);

    MCAPI ::std::vector<::std::string> const& $update(::OreUI::FacetBinder& binder);

    MCAPI ::std::unordered_map<::std::string, ::Bedrock::NotNullNonOwnerPtr<::OreUI::IFacet>> $getActiveFacets();
    // NOLINTEND
#else // @header-generator platform
    struct FacetEntry {};
#endif // @header-generator platform
#endif // @header-generator platform
};

} // namespace OreUI
