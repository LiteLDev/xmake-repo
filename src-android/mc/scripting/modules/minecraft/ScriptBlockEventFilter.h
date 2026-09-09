#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/StrongTypedObjectHandle.h"
#include "mc/scripting/modules/minecraft/block/ScriptBlockPermutation.h"
#include "mc/world/level/block/BlockDescriptor.h"

// auto generated forward declare list
// clang-format off
class Block;
namespace ScriptModuleMinecraft::EventFilters { struct ScriptBlockFilterData; }
namespace Scripting { struct InterfaceBinding; }
// clang-format on

namespace ScriptModuleMinecraft::EventFilters {

struct ScriptBlockEventFilter {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32>                                         mSpecificPermutations;
    ::ll::TypedStorage<8, 32, std::optional<std::vector<std::string>>>  mBlockTypes;
    ::ll::TypedStorage<8, 24, std::vector<gsl::not_null<const Block*>>> mProcessedSpecificPermutations;
    ::ll::TypedStorage<8, 24, std::vector<BlockDescriptor>>             mProcessedBlockTypes;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ScriptBlockEventFilter(::ScriptModuleMinecraft::EventFilters::ScriptBlockEventFilter const&);

    MCNAPI ::ScriptModuleMinecraft::EventFilters::ScriptBlockEventFilter&
    operator=(::ScriptModuleMinecraft::EventFilters::ScriptBlockEventFilter&&);

    MCNAPI void process();

    MCNAPI bool shouldAllow(::ScriptModuleMinecraft::EventFilters::ScriptBlockFilterData const&);

    MCNAPI ~ScriptBlockEventFilter();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::InterfaceBinding bind();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ScriptModuleMinecraft::EventFilters::ScriptBlockEventFilter const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft::EventFilters
