#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/EasingType.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform

namespace CameraInstructionOptions {

struct FovInstruction {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float>        mFov;
    ::ll::TypedStorage<1, 1, bool>         mFovClear;
    ::ll::TypedStorage<4, 4, float>        mFovEaseTime;
    ::ll::TypedStorage<4, 4, ::EasingType> mFovEaseType;
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI bool operator==(::CameraInstructionOptions::FovInstruction const&) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx&);
    // NOLINTEND
#else // @header-generator platform
#endif // @header-generator platform
};

} // namespace CameraInstructionOptions
