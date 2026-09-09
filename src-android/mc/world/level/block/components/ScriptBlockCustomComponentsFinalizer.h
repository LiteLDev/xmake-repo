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
    ::ll::UntypedStorage<1, 16> mRegistry;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptBlockCustomComponentsFinalizer();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit ScriptBlockCustomComponentsFinalizer(
        ::StackRefResult<ScriptModuleMinecraft::ScriptBlockCustomComponentsRegistry>&&
    );

    MCNAPI void finalizeBlock(::BlockType&, std::vector<gsl::not_null<BlockCustomComponentsComponent*>>&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::StackRefResult<ScriptModuleMinecraft::ScriptBlockCustomComponentsRegistry>&&);
    // NOLINTEND
};
