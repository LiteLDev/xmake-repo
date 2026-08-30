#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/StrongTypedObjectHandle.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class Dimension;
namespace ScriptModuleMinecraft { class ScriptBlock; }
namespace ScriptModuleMinecraft { class ScriptDimension; }
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptBlockEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mDimension;
    ::ll::UntypedStorage<8, 32> mBlock;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptBlockEvent();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ScriptBlockEvent(::Dimension&, ::BlockPos const&, ::Scripting::WeakLifetimeScope const&);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding bind();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Dimension&, ::BlockPos const&, ::Scripting::WeakLifetimeScope const&);
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
