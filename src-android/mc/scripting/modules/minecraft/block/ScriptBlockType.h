#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/StrongTypedObjectHandle.h"
#include "mc/deps/script_core/lifetime_registry/scripting/WeakLifetimeScope.h"
#include "mc/deps/script_core/runtime/scripting/Result_deprecated.h"

// auto generated forward declare list
// clang-format off
class BlockType;
class HashedString;
namespace ScriptModuleMinecraft { class ScriptBlockPermutation; }
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptBlockType {
public:
    // ScriptBlockType inner types declare
    // clang-format off
    struct Key;
    // clang-format on

    // ScriptBlockType inner types define
    struct Key {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, ::BlockType const*> mBlockTypePtr;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::Scripting::WeakLifetimeScope>            mScope;
    ::ll::TypedStorage<8, 8, std::reference_wrapper<const HashedString>> mBlockName;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptBlockType& operator=(ScriptBlockType const&);
    ScriptBlockType();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::BlockType const& getBlock() const;

    MCNAPI std::string getId() const;

    MCNAPI ::ScriptModuleMinecraft::ScriptBlockType& operator=(::ScriptModuleMinecraft::ScriptBlockType&&);

    MCNAPI ~ScriptBlockType();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding bind();

    MCNAPI static ::Scripting::StrongTypedObjectHandle<ScriptModuleMinecraft::ScriptBlockType>
    getOrCreateHandle(::Scripting::WeakLifetimeScope const&, ::BlockType const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
