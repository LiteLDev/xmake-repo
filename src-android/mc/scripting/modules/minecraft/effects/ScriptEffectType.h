#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class MobEffect;
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptEffectType {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::MobEffect const*> mEffect;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptEffectType();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::MobEffect const& getEffect() const;

    MCNAPI std::string getName_V1() const;

    MCNAPI std::string getName_V2() const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding bind();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
