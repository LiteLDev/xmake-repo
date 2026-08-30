#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/script_engine/scripting/DependencyResolutionBehavior.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { class IModuleBindingFactory; }
namespace Scripting { struct ModuleDescriptor; }
namespace Scripting { struct ModuleResolveResult; }
namespace Scripting { struct SupportedBindingModule; }
namespace Scripting { struct Version; }
namespace Scripting { struct VersionRequestKey; }
namespace Scripting { struct VersionRequestedBy; }
namespace mce { class UUID; }
// clang-format on

namespace Scripting {

class DependencyResolver {
public:
    // DependencyResolver inner types define
    using VersionRequestTable =
        std::unordered_map<Scripting::VersionRequestKey, std::vector<Scripting::VersionRequestedBy>>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, std::vector<std::unique_ptr<Scripting::IModuleBindingFactory>> const&> mModuleFactories;
    ::ll::TypedStorage<4, 4, ::Scripting::DependencyResolutionBehavior>                             mResolutionBehavior;
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
        std::unordered_map<Scripting::VersionRequestKey, std::vector<Scripting::VersionRequestedBy>> const&
    ) const;
    // NOLINTEND
};

} // namespace Scripting
