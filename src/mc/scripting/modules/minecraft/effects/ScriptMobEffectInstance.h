#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/WeakEntityRef.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/game_refs/WeakRef.h"
#include "mc/deps/script_core/lifetime_registry/scripting/StrongTypedObjectHandle.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/deps/script_core/runtime/scripting/Result_deprecated.h"

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
class Actor;
class EntityContext;
class MobEffectInstance;
namespace Scripting { class WeakLifetimeScope; }
#else // @header-generator platform
#endif // @header-generator platform
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptMobEffectInstance {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<4, 8>                 mEffectIdx;
    ::ll::TypedStorage<1, 24, ::WeakEntityRef> mEntityRef;
#else // @header-generator platform
    ::ll::TypedStorage<4, 4, uint>             mEffectIdx;
    ::ll::TypedStorage<8, 24, ::WeakEntityRef> mEntityRef;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    ScriptMobEffectInstance();
#else // @header-generator platform
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Scripting::Result_deprecated<int> getAmplifier() const;
#else // @header-generator platform
    MCAPI ::Scripting::Result_deprecated<int> getAmplifier() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Scripting::Result_deprecated<std::string> getDisplayName() const;
#else // @header-generator platform
    MCAPI ::Scripting::Result_deprecated<::std::string> getDisplayName() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Scripting::Result_deprecated<int> getDuration() const;
#else // @header-generator platform
    MCAPI ::std::string getDisplayName_010() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Scripting::Result_deprecated<std::string> getTypeId_V1() const;
#else // @header-generator platform
    MCAPI ::Scripting::Result_deprecated<int> getDuration() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Scripting::Result_deprecated<std::string> getTypeId_V2() const;
#else // @header-generator platform
    MCAPI int getDuration_010() const;

    MCAPI ::Scripting::Result_deprecated<::std::string> getTypeId_V1() const;

    MCAPI ::Scripting::Result_deprecated<::std::string> getTypeId_V2() const;
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::Scripting::ClassBinding bind();

    MCNAPI static ::Scripting::StrongTypedObjectHandle<ScriptModuleMinecraft::ScriptMobEffectInstance>
    getHandle(::Actor const&, uint, ::Scripting::WeakLifetimeScope const&);
#else // @header-generator platform
    MCAPI static ::Scripting::ClassBinding bind();
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
