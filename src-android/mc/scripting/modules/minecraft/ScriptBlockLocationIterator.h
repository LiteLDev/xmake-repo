#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/StrongTypedObjectHandle.h"
#include "mc/deps/script_core/lifetime_registry/scripting/WeakHandleFromThis.h"
#include "mc/deps/script_core/runtime/scripting/Result.h"

// auto generated forward declare list
// clang-format off
class BaseBlockLocationIterator;
namespace ScriptModuleMinecraft { class ScriptBlockVolumeIterable; }
namespace Scripting { struct ClassBinding; }
namespace Scripting { struct EngineError; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptBlockLocationIterator
: public ::Scripting::WeakHandleFromThis<ScriptModuleMinecraft::ScriptBlockLocationIterator> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32>                                          mStrongTypedIterableHandle;
    ::ll::TypedStorage<8, 8, std::unique_ptr<BaseBlockLocationIterator>> mIterator;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptBlockLocationIterator();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ScriptBlockLocationIterator(::ScriptModuleMinecraft::ScriptBlockLocationIterator&&);

    MCNAPI ScriptBlockLocationIterator(
        std::unique_ptr<BaseBlockLocationIterator>,
        ::Scripting::StrongTypedObjectHandle<ScriptModuleMinecraft::ScriptBlockVolumeIterable>
    );

    MCNAPI ::ScriptModuleMinecraft::ScriptBlockLocationIterator&
    operator=(::ScriptModuleMinecraft::ScriptBlockLocationIterator&&);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding bind();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ScriptModuleMinecraft::ScriptBlockLocationIterator&&);

    MCNAPI void* $ctor(
        std::unique_ptr<BaseBlockLocationIterator>,
        ::Scripting::StrongTypedObjectHandle<ScriptModuleMinecraft::ScriptBlockVolumeIterable>
    );
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
