#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct ClassBinding; }
namespace Scripting { struct InterfaceBinding; }
namespace Scripting { struct PropertyOutOfBoundsError; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptMusicOptions {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 8, std::optional<float>> mVolume;
    ::ll::TypedStorage<4, 8, std::optional<float>> mFade;
    ::ll::TypedStorage<1, 2, std::optional<bool>>  mLoop;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI float getFade() const;

    MCNAPI bool getLoop() const;

    MCNAPI float getVolume() const;

    MCNAPI std::optional<Scripting::PropertyOutOfBoundsError> validate() const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding bindV010();

    MCNAPI static ::Scripting::InterfaceBinding bindV1();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static float const& FADE_DEFAULT();

    MCNAPI static float const& FADE_MIN();

    MCNAPI static bool const& LOOP_DEFAULT();

    MCNAPI static float const& VOLUME_DEFAULT();

    MCNAPI static float const& VOLUME_MIN();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
