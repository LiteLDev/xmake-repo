#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
namespace ScriptModuleMinecraft { struct ScriptSoundOptions; }
#else // @header-generator platform
#endif // @header-generator platform
namespace Scripting { struct InterfaceBinding; }
namespace Scripting { struct PropertyOutOfBoundsError; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptWorldSoundOptions {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 8, std::optional<float>> mVolume;
    ::ll::TypedStorage<4, 8, std::optional<float>> mPitch;
    ::ll::TypedStorage<4, 8, std::optional<int>>   mLoopCount;
#else // @header-generator platform
    ::ll::TypedStorage<4, 8, ::std::optional<float>> mVolume;
    ::ll::TypedStorage<4, 8, ::std::optional<float>> mPitch;
    ::ll::TypedStorage<4, 8, ::std::optional<int>>   mLoopCount;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI explicit ScriptWorldSoundOptions(::ScriptModuleMinecraft::ScriptSoundOptions const&);

    MCNAPI int getLoopCount() const;

    MCNAPI float getPitch() const;

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
    MCNAPI static ::Scripting::InterfaceBinding bind();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ScriptModuleMinecraft::ScriptSoundOptions const&);
#else // @header-generator platform
    MCAPI static ::Scripting::InterfaceBinding bind();
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
