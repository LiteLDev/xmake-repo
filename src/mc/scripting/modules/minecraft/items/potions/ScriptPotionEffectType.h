#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/runtime/scripting/Result.h"

// auto generated forward declare list
// clang-format off
class Potion;
namespace Scripting { struct ClassBinding; }
namespace Scripting { struct EngineError; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptPotionEffectType {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 16, ::gsl::not_null<std::shared_ptr<const Potion>>> mPotion;
#else // @header-generator platform
    ::ll::TypedStorage<8, 16, ::gsl::not_null<::std::shared_ptr<::Potion const>>> mPotion;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    ScriptPotionEffectType();
#else // @header-generator platform
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI explicit ScriptPotionEffectType(::gsl::not_null<std::shared_ptr<const Potion>>);

    MCNAPI ::Scripting::Result<std::optional<int>, Scripting::EngineError> _getDurationTicks() const;

    MCNAPI std::shared_ptr<const Potion> getPotion() const;

    MCNAPI ::ScriptModuleMinecraft::ScriptPotionEffectType&
    operator=(::ScriptModuleMinecraft::ScriptPotionEffectType&&);
#else // @header-generator platform
    MCAPI ::Scripting::Result<::std::optional<int>, ::Scripting::EngineError> _getDurationTicks() const;
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::Scripting::ClassBinding bind();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::gsl::not_null<std::shared_ptr<const Potion>>);
#else // @header-generator platform
    MCAPI static ::Scripting::ClassBinding bind();
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
