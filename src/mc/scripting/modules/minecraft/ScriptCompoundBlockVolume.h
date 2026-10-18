#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/WeakHandleFromThis.h"
#include "mc/deps/script_core/lifetime_registry/scripting/WeakLifetimeScope.h"
#include "mc/scripting/modules/minecraft/ScriptBlockVolumeIterable.h"

// auto generated forward declare list
// clang-format off
class CompoundBlockVolume;
namespace Scripting { struct ClassBinding; }
namespace Scripting { struct EnumBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptCompoundBlockVolume
: public ::ScriptModuleMinecraft::ScriptBlockVolumeIterable,
#if defined(LL_PLAT_A) // @header-generator platform
  public ::Scripting::WeakHandleFromThis<ScriptModuleMinecraft::ScriptCompoundBlockVolume> {
#else // @header-generator platform
  public ::Scripting::WeakHandleFromThis<::ScriptModuleMinecraft::ScriptCompoundBlockVolume> {
#endif // @header-generator platform
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 16, ::Scripting::WeakLifetimeScope>       mScope;
    ::ll::TypedStorage<8, 16, std::shared_ptr<CompoundBlockVolume>> mVolume;
#else // @header-generator platform
    ::ll::TypedStorage<8, 16, ::Scripting::WeakLifetimeScope>           mScope;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::CompoundBlockVolume>> mVolume;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    ScriptCompoundBlockVolume();
#else // @header-generator platform
#endif // @header-generator platform

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~ScriptCompoundBlockVolume();
#else // @header-generator platform
    virtual ~ScriptCompoundBlockVolume() /*override*/ = default;
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::Scripting::EnumBinding bindActionEnums();
#else // @header-generator platform
    MCAPI static ::Scripting::EnumBinding bindActionEnums();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::Scripting::ClassBinding bindClass();
#else // @header-generator platform
    MCAPI static ::Scripting::ClassBinding bindClass();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::Scripting::EnumBinding bindRelativeEnums();
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
    MCAPI static ::Scripting::EnumBinding bindRelativeEnums();
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
