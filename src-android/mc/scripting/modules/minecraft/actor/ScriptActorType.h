#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/string/HashedString.h"
#include "mc/deps/script_core/lifetime_registry/scripting/StrongTypedObjectHandle.h"
#include "mc/deps/script_core/runtime/scripting/Result_deprecated.h"

// auto generated forward declare list
// clang-format off
class ActorDefinition;
namespace ScriptModuleMinecraft { class ScriptDynamicPropertiesDefinition; }
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptActorType {
public:
    // ScriptActorType inner types declare
    // clang-format off
    struct Key;
    // clang-format on

    // ScriptActorType inner types define
    struct Key {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 40, ::HashedString> mId;
        // NOLINTEND

    public:
        // prevent constructor by default
        Key& operator=(Key const&);
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, std::reference_wrapper<ActorDefinition>> mActorDefinition;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptActorType();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::Scripting::Result_deprecated<void>
    addDynamicPropertiesDefinition(::ScriptModuleMinecraft::ScriptDynamicPropertiesDefinition const&);

    MCNAPI std::reference_wrapper<ActorDefinition> getDefinition() const;

    MCNAPI std::string getId() const;

    MCNAPI std::string getLocalizationKey() const;

    MCNAPI bool operator==(::ScriptModuleMinecraft::ScriptActorType const&) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding bind();

    MCNAPI static ::Scripting::StrongTypedObjectHandle<ScriptModuleMinecraft::ScriptActorType>
    getOrCreateHandle(::Scripting::WeakLifetimeScope const&, ::ActorDefinition&);
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
