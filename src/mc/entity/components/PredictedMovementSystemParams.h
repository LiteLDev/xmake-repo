#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/deps/core/utility/optional_ref.h"

// auto generated forward declare list
// clang-format off
class Actor;
struct MovementInterpolatorComponent;
struct StateVectorComponent;
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform

struct PredictedMovementSystemParams {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<1, 1, bool>                    mIsMob;
    ::ll::TypedStorage<1, 1, bool>                    mIsDebugLoggingEnabled;
    ::ll::TypedStorage<8, 8, ::StateVectorComponent&> mStateVector;
    ::ll::TypedStorage<8, 8, ::Actor&>                mActor;
    ::ll::UntypedStorage<8, 8>                        mMovementInterpolator;
#else // @header-generator platform
    ::ll::UntypedStorage<1, 1> mUnk91ca0e;
    ::ll::UntypedStorage<1, 1> mUnk297a47;
    ::ll::UntypedStorage<8, 8> mUnk3c0884;
    ::ll::UntypedStorage<8, 8> mUnka912dd;
    ::ll::UntypedStorage<8, 8> mUnk69fc40;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    PredictedMovementSystemParams& operator=(PredictedMovementSystemParams const&);
    PredictedMovementSystemParams(PredictedMovementSystemParams const&);
    PredictedMovementSystemParams();
};
