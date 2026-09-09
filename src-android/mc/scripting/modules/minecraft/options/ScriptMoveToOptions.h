#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/binding_type/scripting/InterfaceBindingBuilder.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct Error; }
// clang-format on

namespace ScriptModuleGameTest {

struct ScriptMoveToOptions {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 8, std::optional<float>> mSpeed;
    ::ll::TypedStorage<1, 2, std::optional<bool>>  mFaceTarget;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI bool getFaceTarget() const;

    MCNAPI float getSpeed() const;

    MCNAPI std::optional<Scripting::Error> validate() const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::InterfaceBindingBuilder<ScriptModuleGameTest::ScriptMoveToOptions> bindV1();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static bool const& FACE_TARGET_DEFAULT();

    MCNAPI static float const& SPEED_DEFAULT();

    MCNAPI static float const& SPEED_MIN();
    // NOLINTEND
};

} // namespace ScriptModuleGameTest
