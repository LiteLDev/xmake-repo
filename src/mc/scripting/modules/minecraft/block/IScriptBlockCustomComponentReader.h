#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/StrongTypedObjectHandle.h"

// auto generated forward declare list
// clang-format off
class Block;
namespace ScriptModuleMinecraft { class ScriptBlockPermutation; }
namespace ScriptModuleMinecraft { struct ScriptCustomComponentParameters; }
namespace Scripting { class WeakLifetimeScope; }
// clang-format on

namespace ScriptModuleMinecraft {

class IScriptBlockCustomComponentReader {
public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    virtual ~IScriptBlockCustomComponentReader();
#else // @header-generator platform
    virtual ~IScriptBlockCustomComponentReader() = default;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::vector<std::string_view> getValidComponentsForBlock(::Scripting::StrongTypedObjectHandle<ScriptModuleMinecraft::ScriptBlockPermutation> const&) const = 0;
#else // @header-generator platform
    virtual ::std::vector<::std::string_view> getValidComponentsForBlock(
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptBlockPermutation> const& permutation
    ) const = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Scripting::StrongTypedObjectHandle<ScriptModuleMinecraft::ScriptCustomComponentParameters> const& tryGetCustomComponentParametersForBlock(::Block const&, std::string_view, ::Scripting::WeakLifetimeScope const&) const = 0;
    // clang-format on
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
#else // @header-generator platform
    virtual ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptCustomComponentParameters> const&
    tryGetCustomComponentParametersForBlock(
        ::Block const&                        block,
        ::std::string_view                    componentName,
        ::Scripting::WeakLifetimeScope const& scope
    ) const = 0;
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
