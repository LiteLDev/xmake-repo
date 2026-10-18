#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/script_core/lifetime_registry/scripting/StrongTypedObjectHandle.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/deps/script_core/lifetime_registry/scripting/WeakHandleFromThis.h"
#include "mc/deps/script_core/lifetime_registry/scripting/WeakLifetimeScope.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/script_core/runtime/scripting/Result.h"
#else // @header-generator platform
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
class ServerLevel;
#if defined(LL_PLAT_A) // @header-generator platform
namespace ScriptModuleMinecraft { class ScriptDimension; }
namespace ScriptModuleMinecraft { class ScriptPrimitiveShape; }
namespace ScriptModuleMinecraft { class ScriptTextPrimitive; }
namespace ScriptModuleMinecraft { struct ScriptPrimitiveShapeError; }
#else // @header-generator platform
#endif // @header-generator platform
namespace ScriptModuleMinecraft { struct ScriptPrimitiveShapesDataComponent; }
#if defined(LL_PLAT_A) // @header-generator platform
namespace ScriptModuleMinecraft { struct ScriptShapeQueryOptions; }
#else // @header-generator platform
#endif // @header-generator platform
namespace Scripting { struct ClassBinding; }
#if defined(LL_PLAT_A) // @header-generator platform
namespace Scripting { struct EngineError; }
#else // @header-generator platform
#endif // @header-generator platform
// clang-format on

namespace ScriptModuleMinecraft {

#if defined(LL_PLAT_A) // @header-generator platform
class ScriptPrimitiveManager : public ::Scripting::WeakHandleFromThis<ScriptModuleMinecraft::ScriptPrimitiveManager> {
#else // @header-generator platform
class ScriptPrimitiveManager : public ::Scripting::WeakHandleFromThis<::ScriptModuleMinecraft::ScriptPrimitiveManager> {
public:
    // ScriptPrimitiveManager inner types define
    using Key = int64;

#endif // @header-generator platform
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::Scripting::WeakLifetimeScope>                              mScope;
    ::ll::TypedStorage<8, 8, ::ServerLevel&>                                               mLevel;
    ::ll::TypedStorage<8, 8, ::ScriptModuleMinecraft::ScriptPrimitiveShapesDataComponent*> mDataComponent;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptPrimitiveManager& operator=(ScriptPrimitiveManager const&);
    ScriptPrimitiveManager(ScriptPrimitiveManager const&);
    ScriptPrimitiveManager();

public:
#if defined(LL_PLAT_A) // @header-generator platform
    // member functions
    // NOLINTBEGIN
    MCNAPI ScriptPrimitiveManager(::Scripting::WeakLifetimeScope, ::gsl::not_null<ServerLevel*>);

    MCNAPI ~ScriptPrimitiveManager();
    // NOLINTEND

public:
#else // @header-generator platform
#endif // @header-generator platform
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::Scripting::ClassBinding bind();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Scripting::WeakLifetimeScope, ::gsl::not_null<ServerLevel*>);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI static ::Scripting::ClassBinding bind();
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
