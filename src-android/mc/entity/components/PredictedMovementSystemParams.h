#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/optional_ref.h"

// auto generated forward declare list
// clang-format off
class Actor;
struct MovementInterpolatorComponent;
struct StateVectorComponent;
// clang-format on

struct PredictedMovementSystemParams {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>                    mIsMob;
    ::ll::TypedStorage<1, 1, bool>                    mIsDebugLoggingEnabled;
    ::ll::TypedStorage<8, 8, ::StateVectorComponent&> mStateVector;
    ::ll::TypedStorage<8, 8, ::Actor&>                mActor;
    ::ll::UntypedStorage<8, 8>                        mMovementInterpolator;
    // NOLINTEND

public:
    // prevent constructor by default
    PredictedMovementSystemParams& operator=(PredictedMovementSystemParams const&);
    PredictedMovementSystemParams(PredictedMovementSystemParams const&);
    PredictedMovementSystemParams();
};
