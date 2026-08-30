#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct PreviousTransformationData;
// clang-format on

namespace PreviousTransformStreamsUtils {

struct FrameOutput {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::PreviousTransformationData&>                          mNextFrameData;
    ::ll::TypedStorage<8, 16, ::gsl::span<glm::mat<4, 4, float, (glm::qualifier)0>>> mFramePreviousActorTransforms;
    ::ll::TypedStorage<8, 16, ::gsl::span<glm::mat<4, 4, float, (glm::qualifier)0>>> mFramePreviousActorBones;
    // NOLINTEND

public:
    // prevent constructor by default
    FrameOutput& operator=(FrameOutput const&);
    FrameOutput(FrameOutput const&);
    FrameOutput();
};

} // namespace PreviousTransformStreamsUtils
