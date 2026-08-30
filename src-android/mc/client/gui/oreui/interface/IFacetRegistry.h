#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/interface/debug/IFacetProvider.h"

// auto generated forward declare list
// clang-format off
namespace OreUI { class FacetBinder; }
namespace OreUI { class IFacet; }
// clang-format on

namespace OreUI {

class IFacetRegistry : public ::OreUI::Debug::IFacetProvider {
public:
    // IFacetRegistry inner types define
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
};

} // namespace OreUI
