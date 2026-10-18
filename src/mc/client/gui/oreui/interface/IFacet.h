#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/oreui/interface/Status.h"
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"

// auto generated forward declare list
// clang-format off
namespace OreUI { class FacetBinder; }
// clang-format on

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/oreui/interface/Status.h"
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"

// auto generated forward declare list
// clang-format off
namespace OreUI { class FacetBinder; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace OreUI {

#if defined(LL_PLAT_A) // @header-generator platform
class IFacet : public ::Bedrock::EnableNonOwnerReferences {
public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~IFacet() = default;

    virtual void unbind(::OreUI::FacetBinder&) = 0;

    virtual void sync(::OreUI::FacetBinder&, std::string const&) = 0;

    virtual bool update() = 0;

    virtual char const* name() const = 0;

    virtual ::OreUI::Status init(std::unordered_map<std::string, std::variant<double, bool, std::string>> const&) = 0;
    // clang-format on
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
class IFacet : public ::Bedrock::EnableNonOwnerReferences {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IFacet() /*override*/ = default;

    virtual void unbind(::OreUI::FacetBinder& binder) = 0;

    virtual void sync(::OreUI::FacetBinder& binder, ::std::string const& id) = 0;

    virtual bool update() = 0;

    virtual char const* name() const = 0;

    virtual ::OreUI::Status
    init(::std::unordered_map<::std::string, ::std::variant<double, bool, ::std::string>> const&) = 0;
    // NOLINTEND
};
#else // @header-generator platform
class IFacet {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace OreUI
