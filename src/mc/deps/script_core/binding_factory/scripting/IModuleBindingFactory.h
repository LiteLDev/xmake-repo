#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct ContextConfig; }
namespace Scripting { struct ModuleBinding; }
namespace Scripting { struct ModuleDependency; }
namespace Scripting { struct Version; }
namespace mce { class UUID; }
// clang-format on

namespace Scripting {

class IModuleBindingFactory {
public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
#else // @header-generator platform
#endif // @header-generator platform
    virtual ~IModuleBindingFactory() = default;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::string getName() const = 0;
#else // @header-generator platform
    virtual ::std::string getName() const = 0;
#endif // @header-generator platform

    virtual ::mce::UUID getUUID() const = 0;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool hasAlias(std::string const&) const = 0;
#else // @header-generator platform
    virtual bool hasAlias(::std::string const& alias) const = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::vector<Scripting::Version> getSupportedVersions() const = 0;
#else // @header-generator platform
    virtual ::std::vector<::Scripting::Version> getSupportedVersions() const = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::vector<Scripting::ModuleDependency> getDependencies(::Scripting::Version) const = 0;
#else // @header-generator platform
    virtual ::std::vector<::Scripting::ModuleDependency> getDependencies(::Scripting::Version version) const = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::optional<Scripting::ModuleBinding> createModuleBinding(::Scripting::Version, std::optional<Scripting::ContextConfig> const&, bool) = 0;
    // clang-format on
#else // @header-generator platform
    virtual ::std::optional<::Scripting::ModuleBinding> createModuleBinding(
        ::Scripting::Version                               version,
        ::std::optional<::Scripting::ContextConfig> const& config,
        bool                                               requireDynamicImport
    ) = 0;
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace Scripting
