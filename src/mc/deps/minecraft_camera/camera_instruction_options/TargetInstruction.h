#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec3.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
namespace CameraInstructionOptions {

struct TargetInstruction {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 16, std::optional<Vec3>> mTargetCenterOffset;
    ::ll::TypedStorage<8, 8, long>                 mTargetActorId;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI bool operator==(::CameraInstructionOptions::TargetInstruction const&) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx&);
#else // @header-generator platform
    ::ll::TypedStorage<4, 16, ::std::optional<::Vec3>> mTargetCenterOffset;
    ::ll::TypedStorage<8, 8, int64>                    mTargetActorId;
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace CameraInstructionOptions
