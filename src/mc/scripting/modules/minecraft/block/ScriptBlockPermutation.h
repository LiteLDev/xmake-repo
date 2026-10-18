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
#if defined(LL_PLAT_A) // @header-generator platform
namespace ScriptModuleMinecraft { class ScriptBlockType; }
namespace ScriptModuleMinecraft { class ScriptItemStack; }
#else // @header-generator platform
namespace ScriptModuleMinecraft { class ScriptBlockPermutationComponent; }
#endif // @header-generator platform
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

#if defined(LL_PLAT_A) // @header-generator platform
class ScriptBlockPermutation : public ::Scripting::WeakHandleFromThis<ScriptModuleMinecraft::ScriptBlockPermutation> {
#else // @header-generator platform
class ScriptBlockPermutation : public ::Scripting::WeakHandleFromThis<::ScriptModuleMinecraft::ScriptBlockPermutation> {
#endif // @header-generator platform
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
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::TypedStorage<8, 8, ::gsl::not_null<const Block*>> block;
#else // @header-generator platform
        ::ll::TypedStorage<8, 8, ::gsl::not_null<::Block const*>> block;
#endif // @header-generator platform
        // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

    public:
        // prevent constructor by default
        Key& operator=(Key const&);
        Key(Key const&);
        Key();
#else // @header-generator platform
#endif // @header-generator platform
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::Scripting::WeakLifetimeScope> mScope;
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, ::gsl::not_null<const Block*>>   mBlock;
    ::ll::UntypedStorage<8, 40>                               mAttachedComponents;
#else // @header-generator platform
    ::ll::TypedStorage<8, 8, ::gsl::not_null<::Block const*>> mBlock;
    ::ll::TypedStorage<
        8,
        64,
        ::std::unordered_map<
            ::std::string,
            ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptBlockPermutationComponent>>>
        mAttachedComponents;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    ScriptBlockPermutation& operator=(ScriptBlockPermutation const&);
    ScriptBlockPermutation(ScriptBlockPermutation const&);
    ScriptBlockPermutation();
#else // @header-generator platform
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Scripting::Result_deprecated<
        std::optional<Scripting::StrongTypedObjectHandle<ScriptModuleMinecraft::IScriptBlockProperty>>>
    _createPropertyV010(std::string const&);
#else // @header-generator platform
    MCAPI ::Scripting::Result_deprecated<
        ::std::optional<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::IScriptBlockProperty>>>
    _createPropertyV010(::std::string const& propertyName);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Scripting::Result_deprecated<bool> canBeDestroyedByLiquidSpread(::SharedTypes::v1_26_0::LiquidType) const;
#else // @header-generator platform
    MCAPI ::Scripting::Result_deprecated<bool>
    canBeDestroyedByLiquidSpread(::SharedTypes::v1_26_0::LiquidType liquidType) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Scripting::Result_deprecated<bool> canContainLiquid(::SharedTypes::v1_26_0::LiquidType) const;
#else // @header-generator platform
    MCAPI ::Scripting::Result_deprecated<bool> canContainLiquid(::SharedTypes::v1_26_0::LiquidType liquidType) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Block const& getBlock() const;
#else // @header-generator platform
    MCAPI ::Scripting::Result_deprecated<bool> isLiquidBlocking(::SharedTypes::v1_26_0::LiquidType liquidType) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Scripting::Result_deprecated<bool> isLiquidBlocking(::SharedTypes::v1_26_0::LiquidType) const;

    MCNAPI ::Scripting::Result_deprecated<bool> liquidSpreadCausesSpawn(::SharedTypes::v1_26_0::LiquidType) const;

    MCNAPI ::ScriptModuleMinecraft::ScriptBlockPermutation&
    operator=(::ScriptModuleMinecraft::ScriptBlockPermutation&&);

    MCNAPI void setBlock(::Block const&);
#else // @header-generator platform
    MCAPI ::Scripting::Result_deprecated<bool>
    liquidSpreadCausesSpawn(::SharedTypes::v1_26_0::LiquidType liquidType) const;
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
    MCNAPI static ::Scripting::ClassBinding bindV010();
#else // @header-generator platform
    MCAPI static ::Scripting::ClassBinding bindV010();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::Scripting::StrongTypedObjectHandle<ScriptModuleMinecraft::ScriptBlockPermutation>
    getOrCreateHandle(::Block const&, ::Scripting::WeakLifetimeScope const&);
#else // @header-generator platform
    MCAPI static ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptBlockPermutation>
    getOrCreateHandle(::Block const& block, ::Scripting::WeakLifetimeScope const& scope);
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
