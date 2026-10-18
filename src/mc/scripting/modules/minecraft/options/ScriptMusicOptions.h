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
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 8, std::optional<float>> mVolume;
    ::ll::TypedStorage<4, 8, std::optional<float>> mFade;
    ::ll::TypedStorage<1, 2, std::optional<bool>>  mLoop;
#else // @header-generator platform
    ::ll::TypedStorage<4, 8, ::std::optional<float>> mVolume;
    ::ll::TypedStorage<4, 8, ::std::optional<float>> mFade;
    ::ll::TypedStorage<1, 2, ::std::optional<bool>>  mLoop;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI float getFade() const;

    MCNAPI bool getLoop() const;

    MCNAPI float getVolume() const;

    MCNAPI std::optional<Scripting::PropertyOutOfBoundsError> validate() const;
#else // @header-generator platform
    MCAPI ::std::optional<::Scripting::PropertyOutOfBoundsError> validate() const;
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::Scripting::ClassBinding bindV010();
#else // @header-generator platform
    MCAPI static ::Scripting::ClassBinding bindV010();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    MCAPI static ::Scripting::InterfaceBinding bindV1();
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
