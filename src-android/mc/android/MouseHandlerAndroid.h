#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/input/android/MouseProcessorAndroid.h"

// auto generated forward declare list
// clang-format off
class GameActivityKeyEvent;
class GameActivityMotionEvent;
// clang-format on

class MouseHandlerAndroid : public ::MouseProcessorAndroid {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~MouseHandlerAndroid();

    virtual void absoluteMouseInput(::glm::vec<2, short, (glm::qualifier)0> const&) const;

    virtual void relativeMouseInput(::glm::vec<2, short, (glm::qualifier)0> const&) const;

    virtual int buttonFilter(char) const;

    virtual void buttonInput(char, bool, ::glm::vec<2, short, (glm::qualifier)0> const&) const;

    virtual void scrollInput(char, ::glm::vec<2, short, (glm::qualifier)0> const&) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::MouseProcessorAndroid::MouseInputEvent
    translateEvent(std::variant<GameActivityKeyEvent*, GameActivityMotionEvent*>&, bool);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $absoluteMouseInput(::glm::vec<2, short, (glm::qualifier)0> const&) const;

    MCNAPI void $relativeMouseInput(::glm::vec<2, short, (glm::qualifier)0> const&) const;

    MCNAPI int $buttonFilter(char) const;

    MCNAPI void $buttonInput(char, bool, ::glm::vec<2, short, (glm::qualifier)0> const&) const;

    MCNAPI void $scrollInput(char, ::glm::vec<2, short, (glm::qualifier)0> const&) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
