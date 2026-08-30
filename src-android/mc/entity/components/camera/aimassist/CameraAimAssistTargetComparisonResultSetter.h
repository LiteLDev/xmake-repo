#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/components/camera/aimassist/CameraAimAssistEntityTargetComponent.h"

// auto generated forward declare list
// clang-format off
class Vec3;
namespace CameraAimAssist { class BlockTarget; }
namespace CameraAimAssist { struct CompareResult; }
// clang-format on

struct CameraAimAssistTargetComparisonResultSetter {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::CameraAimAssist::CompareResult&> mResult;
    ::ll::TypedStorage<1, 1, bool>                              mByAngle;
    ::ll::TypedStorage<8, 8, ::Vec3 const&>                     mViewDir;
    ::ll::TypedStorage<8, 8, ::Vec3 const&>                     mHeadPos;
    // NOLINTEND

public:
    // prevent constructor by default
    CameraAimAssistTargetComparisonResultSetter& operator=(CameraAimAssistTargetComparisonResultSetter const&);
    CameraAimAssistTargetComparisonResultSetter(CameraAimAssistTargetComparisonResultSetter const&);
    CameraAimAssistTargetComparisonResultSetter();
};
