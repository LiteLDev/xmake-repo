#pragma once

#include "mc/_HeaderOutputPredefine.h"

class MouseProcessorAndroid {
public:
    // MouseProcessorAndroid inner types declare
    // clang-format off
    struct MouseInputEvent;
    // clang-format on

    // MouseProcessorAndroid inner types define
    enum class MouseType : int {
        Relative = 0,
        Absolute = 1,
    };

    struct MouseInputEvent {
    public:
        // MouseInputEvent inner types define
        enum class Action : uchar {
            Invalid   = 0,
            Scroll    = 1,
            Move      = 2,
            HoverMove = 3,
            Interact  = 4,
        };

    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<1, 1, ::MouseProcessorAndroid::MouseInputEvent::Action> mAction;
        ::ll::TypedStorage<4, 4, int>                                              mButtonState;
        ::ll::TypedStorage<4, 8, ::glm::vec<2, float, (glm::qualifier)0>>          mCursorPosition;
        ::ll::TypedStorage<4, 4, int>                                              mExplicitScrollData;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 8, ::glm::vec<2, float, (glm::qualifier)0>> mPointerPrevious;
    ::ll::TypedStorage<4, 8, ::glm::vec<2, float, (glm::qualifier)0>> mTwoFingerPrevious;
    ::ll::TypedStorage<4, 8, ::glm::vec<2, float, (glm::qualifier)0>> mPositionRounding;
    ::ll::TypedStorage<4, 4, int>                                     mPreviousButtonState;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~MouseProcessorAndroid();

    virtual void absoluteMouseInput(::glm::vec<2, short, (glm::qualifier)0> const&) const = 0;

    virtual void relativeMouseInput(::glm::vec<2, short, (glm::qualifier)0> const&) const = 0;

    virtual int buttonFilter(char) const = 0;

    virtual void buttonInput(char, bool, ::glm::vec<2, short, (glm::qualifier)0> const&) const = 0;

    virtual void scrollInput(char, ::glm::vec<2, short, (glm::qualifier)0> const&) const = 0;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void _handleMotion(
        ::glm::vec<2, float, (glm::qualifier)0> const&,
        int,
        ::MouseProcessorAndroid::MouseInputEvent::Action,
        ::MouseProcessorAndroid::MouseType,
        bool
    );

    MCNAPI void _updateMouseButtons(::glm::vec<2, short, (glm::qualifier)0> const&, int);

    MCNAPI int processInput(::MouseProcessorAndroid::MouseInputEvent const&, ::MouseProcessorAndroid::MouseType, bool);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
