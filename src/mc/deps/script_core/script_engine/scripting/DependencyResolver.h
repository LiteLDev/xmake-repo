#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/script_core/script_engine/scripting/DependencyResolutionBehavior.h"

#else // @header-generator platform
#endif // @header-generator platform
// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
namespace Scripting { class IModuleBindingFactory; }
namespace Scripting { struct ModuleDescriptor; }
#else // @header-generator platform
#endif // @header-generator platform
namespace Scripting { struct ModuleResolveResult; }
#if defined(LL_PLAT_A) // @header-generator platform
namespace Scripting { struct SupportedBindingModule; }
namespace Scripting { struct Version; }
#else // @header-generator platform
#endif // @header-generator platform
namespace Scripting { struct VersionRequestKey; }
namespace Scripting { struct VersionRequestedBy; }
#if defined(LL_PLAT_A) // @header-generator platform
namespace mce { class UUID; }
#else // @header-generator platform
#endif // @header-generator platform
// clang-format on

namespace Scripting {

class DependencyResolver {
public:
#if defined(LL_PLAT_A) // @header-generator platform
    // DependencyResolver inner types define
    using VersionRequestTable =
        std::unordered_map<Scripting::VersionRequestKey, std::vector<Scripting::VersionRequestedBy>>;

public:
#else // @header-generator platform
#endif // @header-generator platform
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, std::vector<std::unique_ptr<Scripting::IModuleBindingFactory>> const&> mModuleFactories;
    ::ll::TypedStorage<4, 4, ::Scripting::DependencyResolutionBehavior>                             mResolutionBehavior;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 8> mUnke3be7c;
    ::ll::UntypedStorage<4, 4> mUnkcb02eb;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    DependencyResolver& operator=(DependencyResolver const&);
    DependencyResolver(DependencyResolver const&);
    DependencyResolver();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::Scripting::ModuleResolveResult _resolveDependencyRequests(
#if defined(LL_PLAT_A) // @header-generator platform
        std::unordered_map<Scripting::VersionRequestKey, std::vector<Scripting::VersionRequestedBy>> const&
#else // @header-generator platform
        ::std::unordered_map<::Scripting::VersionRequestKey, ::std::vector<::Scripting::VersionRequestedBy>> const&
            versionRequestTable
#endif // @header-generator platform
    ) const;
    // NOLINTEND
};

} // namespace Scripting
