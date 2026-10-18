#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/StrongTypedObjectHandle.h"

// auto generated forward declare list
// clang-format off
class BlockState;
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptBlockStateType {
public:
    // ScriptBlockStateType inner types declare
    // clang-format off
    struct Key;
    // clang-format on

    // ScriptBlockStateType inner types define
    struct Key {
    public:
        // member variables
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::TypedStorage<8, 8, ::gsl::not_null<const BlockState*> const> blockState;
#else // @header-generator platform
        ::ll::TypedStorage<8, 8, ::gsl::not_null<::BlockState const*> const> blockState;
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
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

    using BlockStateType = ::std::variant<int, ::std::string, bool>;
#endif // @header-generator platform

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::string const>                                 mName;
    ::ll::TypedStorage<8, 8, ::gsl::not_null<const BlockState*> const>           mBlockState;
    ::ll::TypedStorage<8, 24, std::vector<std::variant<int, std::string, bool>>> mValidValues;
#else // @header-generator platform
    ::ll::TypedStorage<8, 32, ::std::string const>                                     mName;
    ::ll::TypedStorage<8, 8, ::gsl::not_null<::BlockState const*> const>               mBlockState;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::variant<int, ::std::string, bool>>> mValidValues;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptBlockStateType& operator=(ScriptBlockStateType const&);
    ScriptBlockStateType();

public:
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    // member functions
    // NOLINTBEGIN
    MCAPI ScriptBlockStateType(::ScriptModuleMinecraft::ScriptBlockStateType const&);
    // NOLINTEND

public:
#endif // @header-generator platform
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::Scripting::ClassBinding bind();
#else // @header-generator platform
    MCAPI static ::Scripting::ClassBinding bind();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::Scripting::StrongTypedObjectHandle<ScriptModuleMinecraft::ScriptBlockStateType>
    getOrCreateHandle(::Scripting::WeakLifetimeScope const&, ::BlockState const&);
#else // @header-generator platform
    MCAPI static ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptBlockStateType>
    getOrCreateHandle(::Scripting::WeakLifetimeScope const& scope, ::BlockState const& blockState);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::ScriptModuleMinecraft::ScriptBlockStateType const&);
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
