#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec3.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace CameraInstructionOptions {

struct TargetInstruction {
public:
    // member variables
    // NOLINTBEGIN
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
    // NOLINTEND
};

} // namespace CameraInstructionOptions
