#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/StrongTypedObjectHandle.h"
#include "mc/deps/script_core/lifetime_registry/scripting/WeakLifetimeScope.h"
#include "mc/deps/script_core/runtime/scripting/Result_deprecated.h"
#include "mc/scripting/modules/minecraft/ScriptBlockFilter.h"

// auto generated forward declare list
// clang-format off
class Dimension;
namespace ScriptModuleMinecraft { class ScriptBlockPermutation; }
namespace ScriptModuleMinecraft { class ScriptBlockType; }
namespace ScriptModuleMinecraft { class ScriptBlockVolumeBase; }
namespace ScriptModuleMinecraft { class ScriptListBlockVolume; }
namespace ScriptModuleMinecraft { struct ScriptBlockFillOptions; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptBlockFiller {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>                                         mIgnoreChunkBoundErrors;
    ::ll::TypedStorage<8, 160, ::ScriptModuleMinecraft::ScriptBlockFilter> mBlockFilter;
    ::ll::TypedStorage<8, 8, ::gsl::not_null<Dimension*>>                  mDimension;
    ::ll::TypedStorage<8, 16, ::Scripting::WeakLifetimeScope>              mScope;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptBlockFiller();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ScriptBlockFiller(
        ::ScriptModuleMinecraft::ScriptBlockFillOptions const&,
        ::gsl::not_null<Dimension*>,
        ::Scripting::WeakLifetimeScope
    );

    MCNAPI ::Scripting::Result_deprecated<
        Scripting::StrongTypedObjectHandle<ScriptModuleMinecraft::ScriptListBlockVolume>>
    fillBlocks(
        ::Scripting::StrongTypedObjectHandle<ScriptModuleMinecraft::ScriptBlockVolumeBase> const&,
        std::variant<
            std::string,
            Scripting::StrongTypedObjectHandle<ScriptModuleMinecraft::ScriptBlockType>,
            Scripting::StrongTypedObjectHandle<ScriptModuleMinecraft::ScriptBlockPermutation>> const&
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::ScriptModuleMinecraft::ScriptBlockFillOptions const&,
        ::gsl::not_null<Dimension*>,
        ::Scripting::WeakLifetimeScope
    );
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
