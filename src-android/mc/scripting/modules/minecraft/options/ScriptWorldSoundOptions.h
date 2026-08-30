#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { struct ScriptSoundOptions; }
namespace Scripting { struct InterfaceBinding; }
namespace Scripting { struct PropertyOutOfBoundsError; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptWorldSoundOptions {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 8, std::optional<float>> mVolume;
    ::ll::TypedStorage<4, 8, std::optional<float>> mPitch;
    ::ll::TypedStorage<4, 8, std::optional<int>>   mLoopCount;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit ScriptWorldSoundOptions(::ScriptModuleMinecraft::ScriptSoundOptions const&);

    MCNAPI int getLoopCount() const;

    MCNAPI float getPitch() const;

    MCNAPI float getVolume() const;

    MCNAPI std::optional<Scripting::PropertyOutOfBoundsError> validate() const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::InterfaceBinding bind();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ScriptModuleMinecraft::ScriptSoundOptions const&);
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
