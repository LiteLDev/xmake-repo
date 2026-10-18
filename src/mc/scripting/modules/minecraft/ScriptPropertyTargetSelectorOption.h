#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/scripting/modules/minecraft/EqualsComparison.h"
#include "mc/scripting/modules/minecraft/GreaterThanComparison.h"
#include "mc/scripting/modules/minecraft/GreaterThanOrEqualsComparison.h"
#include "mc/scripting/modules/minecraft/LessThanComparison.h"
#include "mc/scripting/modules/minecraft/LessThanOrEqualsComparison.h"
#include "mc/scripting/modules/minecraft/NotEqualsComparison.h"
#include "mc/scripting/modules/minecraft/RangeComparison.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct InterfaceBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptPropertyTargetSelectorOption {
public:
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    // ScriptPropertyTargetSelectorOption inner types define
    using Comparison = ::std::variant<
        ::ScriptModuleMinecraft::LessThanComparison,
        ::ScriptModuleMinecraft::LessThanOrEqualsComparison,
        ::ScriptModuleMinecraft::GreaterThanComparison,
        ::ScriptModuleMinecraft::GreaterThanOrEqualsComparison,
        ::ScriptModuleMinecraft::EqualsComparison,
        ::ScriptModuleMinecraft::NotEqualsComparison,
        ::ScriptModuleMinecraft::RangeComparison>;

public:
#endif // @header-generator platform
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    ::ll::TypedStorage<8, 24, std::string> mPropertyId;
    ::ll::TypedStorage<1, 2, std::optional<bool>> mExclude;
    ::ll::TypedStorage<8, 72, std::optional<std::variant<bool, std::string, std::variant<ScriptModuleMinecraft::LessThanComparison, ScriptModuleMinecraft::LessThanOrEqualsComparison, ScriptModuleMinecraft::GreaterThanComparison, ScriptModuleMinecraft::GreaterThanOrEqualsComparison, ScriptModuleMinecraft::EqualsComparison, ScriptModuleMinecraft::NotEqualsComparison, ScriptModuleMinecraft::RangeComparison>>>> mValue;
    // clang-format on
#else // @header-generator platform
    ::ll::TypedStorage<8, 32, ::std::string>        mPropertyId;
    ::ll::TypedStorage<1, 2, ::std::optional<bool>> mExclude;
    ::ll::TypedStorage<
        8,
        64,
        ::std::optional<::std::variant<
            bool,
            ::std::string,
            ::std::variant<
                ::ScriptModuleMinecraft::LessThanComparison,
                ::ScriptModuleMinecraft::LessThanOrEqualsComparison,
                ::ScriptModuleMinecraft::GreaterThanComparison,
                ::ScriptModuleMinecraft::GreaterThanOrEqualsComparison,
                ::ScriptModuleMinecraft::EqualsComparison,
                ::ScriptModuleMinecraft::NotEqualsComparison,
                ::ScriptModuleMinecraft::RangeComparison>>>>
        mValue;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptPropertyTargetSelectorOption();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ScriptPropertyTargetSelectorOption(::ScriptModuleMinecraft::ScriptPropertyTargetSelectorOption const&);

    MCAPI ::ScriptModuleMinecraft::ScriptPropertyTargetSelectorOption&
    operator=(::ScriptModuleMinecraft::ScriptPropertyTargetSelectorOption const&);
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::Scripting::InterfaceBinding bind();
#else // @header-generator platform
    MCAPI static ::Scripting::InterfaceBinding bind();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::ScriptModuleMinecraft::ScriptPropertyTargetSelectorOption const&);
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
