#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct BatchClippingState {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 8, ::glm::vec<2, float, (glm::qualifier)0>> mTopLeftClip;
    ::ll::TypedStorage<4, 8, ::glm::vec<2, float, (glm::qualifier)0>> mBottomRightClip;
    ::ll::TypedStorage<1, 1, bool>                                    mClipsChildren;
    ::ll::TypedStorage<1, 1, bool>                                    mEnableScissorTest;
    // NOLINTEND

public:
    // prevent constructor by default
    BatchClippingState& operator=(BatchClippingState const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI bool isEquivalent(::BatchClippingState const&) const;
    // NOLINTEND
};
