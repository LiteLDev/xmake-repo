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
    ::ll::TypedStorage<8, 16, ::gsl::not_null<std::shared_ptr<const Potion>>> mPotion;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptPotionEffectType();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit ScriptPotionEffectType(::gsl::not_null<std::shared_ptr<const Potion>>);

    MCNAPI ::Scripting::Result<std::optional<int>, Scripting::EngineError> _getDurationTicks() const;

    MCNAPI std::shared_ptr<const Potion> getPotion() const;

    MCNAPI ::ScriptModuleMinecraft::ScriptPotionEffectType&
    operator=(::ScriptModuleMinecraft::ScriptPotionEffectType&&);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding bind();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::gsl::not_null<std::shared_ptr<const Potion>>);
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
