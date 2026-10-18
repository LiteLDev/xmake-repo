#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated forward declare list
// clang-format off
namespace Scripting { class DependencyLocator; }
namespace Scripting { class IRuntime; }
namespace Scripting { class RegistryManager; }
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform

namespace Scripting::QuickJS {

class RuntimeUserData {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, ::Scripting::RegistryManager&>   registryManager;
    ::ll::TypedStorage<8, 8, ::Scripting::DependencyLocator*> dependencyLocator;
    ::ll::TypedStorage<8, 8, ::Scripting::IRuntime&>          owner;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 8> mUnkbf093a;
    ::ll::UntypedStorage<8, 8> mUnka1acb4;
    ::ll::UntypedStorage<8, 8> mUnk7ace31;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    RuntimeUserData& operator=(RuntimeUserData const&);
    RuntimeUserData(RuntimeUserData const&);
    RuntimeUserData();
};

} // namespace Scripting::QuickJS
