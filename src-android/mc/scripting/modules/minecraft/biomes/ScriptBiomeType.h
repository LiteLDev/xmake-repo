#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/StrongTypedObjectHandle.h"
#include "mc/deps/script_core/lifetime_registry/scripting/WeakLifetimeScope.h"

// auto generated forward declare list
// clang-format off
class Biome;
class BiomeRegistry;
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptBiomeType {
public:
    // ScriptBiomeType inner types declare
    // clang-format off
    struct Key;
    // clang-format on

    // ScriptBiomeType inner types define
    struct Key {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, ::Biome const*> mBiomePtr;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::Scripting::WeakLifetimeScope>       mScope;
    ::ll::TypedStorage<8, 8, ::gsl::not_null<const Biome*>>         mBiome;
    ::ll::TypedStorage<8, 8, ::gsl::not_null<const BiomeRegistry*>> mBiomeRegistry;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptBiomeType& operator=(ScriptBiomeType const&);
    ScriptBiomeType();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI std::string getId() const;

    MCNAPI ~ScriptBiomeType();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding bind();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
