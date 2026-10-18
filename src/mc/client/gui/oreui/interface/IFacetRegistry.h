#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/oreui/interface/debug/IFacetProvider.h"

// auto generated forward declare list
// clang-format off
namespace OreUI { class FacetBinder; }
namespace OreUI { class IFacet; }
// clang-format on

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/oreui/interface/debug/IFacetProvider.h"

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
class IFacetRegistry : public ::OreUI::Debug::IFacetProvider {
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
class IFacetRegistry : public ::OreUI::Debug::IFacetProvider {
#else // @header-generator platform
class IFacetRegistry {
#endif // @header-generator platform
#endif // @header-generator platform
public:
    // IFacetRegistry inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    enum class Error : int {
        ALREADY_ACTIVE       = 0,
        ALREADY_INACTIVE     = 1,
        ACTIVATE_NOT_FOUND   = 2,
        DEACTIVATE_NOT_FOUND = 3,
        INIT_FAILED          = 4,
    };

    using Payload = std::unordered_map<std::string, std::variant<double, bool, std::string>>;

    using payload_value_t = std::variant<double, bool, std::string>;

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~IFacetRegistry() = default;

    virtual void registerFacet(std::string const&, std::function<std::unique_ptr<OreUI::IFacet> ()> const&) = 0;

    virtual std::optional<OreUI::IFacetRegistry::Error> activateFacet(::OreUI::FacetBinder&, std::string const&, std::string const&, std::unordered_map<std::string, std::variant<double, bool, std::string>> const&) = 0;

    virtual std::optional<OreUI::IFacetRegistry::Error> deactivateFacet(::OreUI::FacetBinder&, std::string const&) = 0;

    virtual void clearAllFacets() = 0;

    virtual void suspendAllFacets() = 0;

    virtual void disableFacetActivation() = 0;

    virtual void bind(::OreUI::FacetBinder&) = 0;

    virtual std::vector<std::string> const& update(::OreUI::FacetBinder&) = 0;
    // clang-format on
    // NOLINTEND
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
    enum class Error : int {
        AlreadyActive      = 0,
        AlreadyInactive    = 1,
        ActivateNotFound   = 2,
        DeactivateNotFound = 3,
        InitFailed         = 4,
    };

    using payload_value_t = ::std::variant<double, bool, ::std::string>;

    using Payload = ::std::unordered_map<::std::string, ::std::variant<double, bool, ::std::string>>;

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IFacetRegistry() /*override*/ = default;

    virtual void registerFacet(
        ::std::string const&                                         name,
        ::std::function<::std::unique_ptr<::OreUI::IFacet>()> const& constructor
    ) = 0;

    virtual ::std::optional<::OreUI::IFacetRegistry::Error> activateFacet(
        ::OreUI::FacetBinder&                                                                   binder,
        ::std::string const&                                                                    name,
        ::std::string const&                                                                    id,
        ::std::unordered_map<::std::string, ::std::variant<double, bool, ::std::string>> const& payload
    ) = 0;

    virtual ::std::optional<::OreUI::IFacetRegistry::Error>
    deactivateFacet(::OreUI::FacetBinder& binder, ::std::string const& id) = 0;

    virtual void clearAllFacets() = 0;

    virtual void suspendAllFacets() = 0;

    virtual void disableFacetActivation() = 0;

    virtual void bind(::OreUI::FacetBinder& binder) = 0;

    virtual ::std::vector<::std::string> const& update(::OreUI::FacetBinder& binder) = 0;
    // NOLINTEND
#else // @header-generator platform
    enum class Error : int {};
#endif // @header-generator platform
#endif // @header-generator platform
};

} // namespace OreUI
