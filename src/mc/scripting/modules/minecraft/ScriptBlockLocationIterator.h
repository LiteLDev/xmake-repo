#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/StrongTypedObjectHandle.h"
#include "mc/deps/script_core/lifetime_registry/scripting/WeakHandleFromThis.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/script_core/runtime/scripting/Result.h"
#else // @header-generator platform
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
class BaseBlockLocationIterator;
namespace ScriptModuleMinecraft { class ScriptBlockVolumeIterable; }
namespace Scripting { struct ClassBinding; }
#if defined(LL_PLAT_A) // @header-generator platform
namespace Scripting { struct EngineError; }
#else // @header-generator platform
#endif // @header-generator platform
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptBlockLocationIterator
#if defined(LL_PLAT_A) // @header-generator platform
: public ::Scripting::WeakHandleFromThis<ScriptModuleMinecraft::ScriptBlockLocationIterator> {
#else // @header-generator platform
: public ::Scripting::WeakHandleFromThis<::ScriptModuleMinecraft::ScriptBlockLocationIterator> {
#endif // @header-generator platform
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<8, 32>                                          mStrongTypedIterableHandle;
    ::ll::TypedStorage<8, 8, std::unique_ptr<BaseBlockLocationIterator>> mIterator;
#else // @header-generator platform
    ::ll::TypedStorage<8, 32, ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptBlockVolumeIterable>>
                                                                             mStrongTypedIterableHandle;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::BaseBlockLocationIterator>> mIterator;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    ScriptBlockLocationIterator& operator=(ScriptBlockLocationIterator const&);
    ScriptBlockLocationIterator(ScriptBlockLocationIterator const&);
#endif // @header-generator platform
    ScriptBlockLocationIterator();

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ScriptBlockLocationIterator(::ScriptModuleMinecraft::ScriptBlockLocationIterator&&);

    MCNAPI ScriptBlockLocationIterator(
        std::unique_ptr<BaseBlockLocationIterator>,
        ::Scripting::StrongTypedObjectHandle<ScriptModuleMinecraft::ScriptBlockVolumeIterable>
#else // @header-generator platform
    MCAPI ScriptBlockLocationIterator(
        ::std::unique_ptr<::BaseBlockLocationIterator> nativeIterator,
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptBlockVolumeIterable>
            strongTypedIterableHandle
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::ScriptModuleMinecraft::ScriptBlockLocationIterator&
    operator=(::ScriptModuleMinecraft::ScriptBlockLocationIterator&&);
#else // @header-generator platform
    MCAPI ::ScriptModuleMinecraft::ScriptBlockLocationIterator&
    operator=(::ScriptModuleMinecraft::ScriptBlockLocationIterator&& it);
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::Scripting::ClassBinding bind();
#else // @header-generator platform
    MCAPI static ::Scripting::ClassBinding bind();
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::ScriptModuleMinecraft::ScriptBlockLocationIterator&&);

    MCNAPI void* $ctor(
        std::unique_ptr<BaseBlockLocationIterator>,
        ::Scripting::StrongTypedObjectHandle<ScriptModuleMinecraft::ScriptBlockVolumeIterable>
#else // @header-generator platform
    MCAPI void* $ctor(
        ::std::unique_ptr<::BaseBlockLocationIterator> nativeIterator,
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptBlockVolumeIterable>
            strongTypedIterableHandle
#endif // @header-generator platform
    );
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
