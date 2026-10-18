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
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::TypedStorage<8, 40, ::HashedString> mId;
#else // @header-generator platform
        ::ll::TypedStorage<8, 48, ::HashedString> mId;
#endif // @header-generator platform
        // NOLINTEND

    public:
#if defined(LL_PLAT_A) // @header-generator platform
        // prevent constructor by default
        Key& operator=(Key const&);
#else // @header-generator platform
        // member functions
        // NOLINTBEGIN
        MCAPI ~Key();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCFOLD void $dtor();
        // NOLINTEND
#endif // @header-generator platform
    };

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, std::reference_wrapper<ActorDefinition>> mActorDefinition;
#else // @header-generator platform
    ::ll::TypedStorage<8, 8, ::std::reference_wrapper<::ActorDefinition>> mActorDefinition;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    ScriptActorType();
#else // @header-generator platform
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Scripting::Result_deprecated<void>
    addDynamicPropertiesDefinition(::ScriptModuleMinecraft::ScriptDynamicPropertiesDefinition const&);
#else // @header-generator platform
    MCAPI ::Scripting::Result_deprecated<void> addDynamicPropertiesDefinition(
        ::ScriptModuleMinecraft::ScriptDynamicPropertiesDefinition const& dynamicPropertiesDefinition
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::reference_wrapper<ActorDefinition> getDefinition() const;
#else // @header-generator platform
    MCAPI ::std::string getId() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::string getId() const;

    MCNAPI std::string getLocalizationKey() const;

    MCNAPI bool operator==(::ScriptModuleMinecraft::ScriptActorType const&) const;
#else // @header-generator platform
    MCAPI ::std::string getLocalizationKey() const;
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

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::Scripting::StrongTypedObjectHandle<ScriptModuleMinecraft::ScriptActorType>
    getOrCreateHandle(::Scripting::WeakLifetimeScope const&, ::ActorDefinition&);
#else // @header-generator platform
    MCAPI static ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptActorType>
    getOrCreateHandle(::Scripting::WeakLifetimeScope const& scope, ::ActorDefinition& actorDef);
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
