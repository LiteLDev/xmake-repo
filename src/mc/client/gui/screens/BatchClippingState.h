#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
struct BatchClippingState {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 8, ::glm::vec2> mTopLeftClip;
    ::ll::TypedStorage<4, 8, ::glm::vec2> mBottomRightClip;
    ::ll::TypedStorage<1, 1, bool>        mClipsChildren;
    ::ll::TypedStorage<1, 1, bool>        mEnableScissorTest;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI bool isEquivalent(::BatchClippingState const& batchClippingState) const;
    // NOLINTEND
};
#else // @header-generator platform
struct BatchClippingState {};
#endif // @header-generator platform
#endif // @header-generator platform
