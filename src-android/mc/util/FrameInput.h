#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/renderer/actor/v2/PreviousTransformationData.h"

// auto generated forward declare list
// clang-format off
struct AnimationRemappingInfo;
struct DataDrivenRendererEntry;
struct PreviousTransformationData;
namespace mce::framebuilder { struct RenderBatchActorInstanceDescription; }
// clang-format on

namespace PreviousTransformStreamsUtils {

struct FrameInput {
public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<8, 16, ::gsl::span<DataDrivenRendererEntry> const> mFrameRenderers;
    ::ll::TypedStorage<8, 16, ::gsl::span<ulong> const> mFrameActorIdentities;
    ::ll::TypedStorage<8, 16, ::gsl::span<AnimationRemappingInfo> const> mFrameActorAnimationRemapping;
    ::ll::UntypedStorage<8, 16> mFrameBoneValidation;
    ::ll::TypedStorage<8, 8, std::vector<glm::mat<4, 4, float, (glm::qualifier)0>> const&> mFrameBoneData;
    ::ll::TypedStorage<8, 16, ::gsl::span<mce::framebuilder::RenderBatchActorInstanceDescription> const> mFrameActorDescriptions;
    ::ll::TypedStorage<8, 8, ::PreviousTransformationData const&> mPreviousFrameData;
    // clang-format on
    // NOLINTEND

public:
    // prevent constructor by default
    FrameInput& operator=(FrameInput const&);
    FrameInput(FrameInput const&);
    FrameInput();
};

} // namespace PreviousTransformStreamsUtils
