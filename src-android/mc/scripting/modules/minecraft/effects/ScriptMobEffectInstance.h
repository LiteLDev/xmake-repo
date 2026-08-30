#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/WeakEntityRef.h"
#include "mc/deps/game_refs/WeakRef.h"
#include "mc/deps/script_core/lifetime_registry/scripting/StrongTypedObjectHandle.h"
#include "mc/deps/script_core/runtime/scripting/Result_deprecated.h"

// auto generated forward declare list
// clang-format off
class Actor;
class EntityContext;
class MobEffectInstance;
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptMobEffectInstance {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 8>                 mEffectIdx;
    ::ll::TypedStorage<1, 24, ::WeakEntityRef> mEntityRef;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptMobEffectInstance();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::Scripting::Result_deprecated<int> getAmplifier() const;

    MCNAPI ::Scripting::Result_deprecated<std::string> getDisplayName() const;

    MCNAPI ::Scripting::Result_deprecated<int> getDuration() const;

    MCNAPI ::Scripting::Result_deprecated<std::string> getTypeId_V1() const;

    MCNAPI ::Scripting::Result_deprecated<std::string> getTypeId_V2() const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding bind();

    MCNAPI static ::Scripting::StrongTypedObjectHandle<ScriptModuleMinecraft::ScriptMobEffectInstance>
    getHandle(::Actor const&, uint, ::Scripting::WeakLifetimeScope const&);
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
