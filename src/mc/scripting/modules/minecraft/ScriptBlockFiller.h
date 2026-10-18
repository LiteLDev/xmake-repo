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
#if defined(LL_PLAT_A) // @header-generator platform
namespace ScriptModuleMinecraft { struct ScriptBlockFillOptions; }
#else // @header-generator platform
#endif // @header-generator platform
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptBlockFiller {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>                                         mIgnoreChunkBoundErrors;
    ::ll::TypedStorage<8, 160, ::ScriptModuleMinecraft::ScriptBlockFilter> mBlockFilter;
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, ::gsl::not_null<Dimension*>>                  mDimension;
#else // @header-generator platform
    ::ll::TypedStorage<8, 8, ::gsl::not_null<::Dimension*>>                mDimension;
#endif // @header-generator platform
    ::ll::TypedStorage<8, 16, ::Scripting::WeakLifetimeScope>              mScope;
    // NOLINTEND

public:
#if defined(LL_PLAT_A) // @header-generator platform
    // prevent constructor by default
    ScriptBlockFiller();

public:
#else // @header-generator platform
#endif // @header-generator platform
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ScriptBlockFiller(
        ::ScriptModuleMinecraft::ScriptBlockFillOptions const&,
        ::gsl::not_null<Dimension*>,
        ::Scripting::WeakLifetimeScope
    );

    MCNAPI ::Scripting::Result_deprecated<
        Scripting::StrongTypedObjectHandle<ScriptModuleMinecraft::ScriptListBlockVolume>>
#else // @header-generator platform
    MCAPI ::Scripting::Result_deprecated<
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptListBlockVolume>>
#endif // @header-generator platform
    fillBlocks(
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptBlockVolumeBase> const& volume,
        ::std::variant<
            ::std::string,
            ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptBlockType>,
            ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptBlockPermutation>> const& block
#endif // @header-generator platform
    );
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
