#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/StrongTypedObjectHandle.h"
#include "mc/deps/script_core/lifetime_registry/scripting/WeakHandleFromThis.h"
#include "mc/deps/script_core/lifetime_registry/scripting/WeakLifetimeScope.h"
#include "mc/deps/script_core/runtime/scripting/Result_deprecated.h"
#include "mc/deps/shared_types/v1_26_0/block/LiquidType.h"

// auto generated forward declare list
// clang-format off
class Block;
namespace ScriptModuleMinecraft { class IScriptBlockProperty; }
namespace ScriptModuleMinecraft { class ScriptBlockType; }
namespace ScriptModuleMinecraft { class ScriptItemStack; }
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptBlockPermutation : public ::Scripting::WeakHandleFromThis<ScriptModuleMinecraft::ScriptBlockPermutation> {
public:
    // ScriptBlockPermutation inner types declare
    // clang-format off
    struct Key;
    // clang-format on

    // ScriptBlockPermutation inner types define
    struct Key {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, ::gsl::not_null<const Block*>> block;
        // NOLINTEND

    public:
        // prevent constructor by default
        Key& operator=(Key const&);
        Key(Key const&);
        Key();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::Scripting::WeakLifetimeScope> mScope;
    ::ll::TypedStorage<8, 8, ::gsl::not_null<const Block*>>   mBlock;
    ::ll::UntypedStorage<8, 40>                               mAttachedComponents;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptBlockPermutation& operator=(ScriptBlockPermutation const&);
    ScriptBlockPermutation(ScriptBlockPermutation const&);
    ScriptBlockPermutation();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::Scripting::Result_deprecated<
        std::optional<Scripting::StrongTypedObjectHandle<ScriptModuleMinecraft::IScriptBlockProperty>>>
    _createPropertyV010(std::string const&);

    MCNAPI ::Scripting::Result_deprecated<bool> canBeDestroyedByLiquidSpread(::SharedTypes::v1_26_0::LiquidType) const;

    MCNAPI ::Scripting::Result_deprecated<bool> canContainLiquid(::SharedTypes::v1_26_0::LiquidType) const;

    MCNAPI ::Block const& getBlock() const;

    MCNAPI ::Scripting::Result_deprecated<bool> isLiquidBlocking(::SharedTypes::v1_26_0::LiquidType) const;

    MCNAPI ::Scripting::Result_deprecated<bool> liquidSpreadCausesSpawn(::SharedTypes::v1_26_0::LiquidType) const;

    MCNAPI ::ScriptModuleMinecraft::ScriptBlockPermutation&
    operator=(::ScriptModuleMinecraft::ScriptBlockPermutation&&);

    MCNAPI void setBlock(::Block const&);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding bind();

    MCNAPI static ::Scripting::ClassBinding bindV010();

    MCNAPI static ::Scripting::StrongTypedObjectHandle<ScriptModuleMinecraft::ScriptBlockPermutation>
    getOrCreateHandle(::Block const&, ::Scripting::WeakLifetimeScope const&);
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
