#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/game_refs/StackRefResult.h"

// auto generated forward declare list
// clang-format off
class BlockCustomComponentsComponent;
class BlockType;
namespace ScriptModuleMinecraft { class ScriptBlockCustomComponentsRegistry; }
// clang-format on

class ScriptBlockCustomComponentsFinalizer {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<1, 16> mRegistry;
#else // @header-generator platform
    ::ll::TypedStorage<8, 16, ::StackRefResult<::ScriptModuleMinecraft::ScriptBlockCustomComponentsRegistry>> mRegistry;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    ScriptBlockCustomComponentsFinalizer();
#else // @header-generator platform
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI explicit ScriptBlockCustomComponentsFinalizer(
        ::StackRefResult<ScriptModuleMinecraft::ScriptBlockCustomComponentsRegistry>&&
    );

    MCNAPI void finalizeBlock(::BlockType&, std::vector<gsl::not_null<BlockCustomComponentsComponent*>>&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::StackRefResult<ScriptModuleMinecraft::ScriptBlockCustomComponentsRegistry>&&);
#else // @header-generator platform
    MCAPI void
    finalizeBlock(::BlockType& block, ::std::vector<::gsl::not_null<::BlockCustomComponentsComponent*>>& customComps);
#endif // @header-generator platform
    // NOLINTEND
};
