#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { class DependencyLocator; }
namespace Scripting { class IRuntime; }
namespace Scripting { class RegistryManager; }
// clang-format on

namespace Scripting::QuickJS {

class RuntimeUserData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Scripting::RegistryManager&>   registryManager;
    ::ll::TypedStorage<8, 8, ::Scripting::DependencyLocator*> dependencyLocator;
    ::ll::TypedStorage<8, 8, ::Scripting::IRuntime&>          owner;
    // NOLINTEND

public:
    // prevent constructor by default
    RuntimeUserData& operator=(RuntimeUserData const&);
    RuntimeUserData(RuntimeUserData const&);
    RuntimeUserData();
};

} // namespace Scripting::QuickJS
