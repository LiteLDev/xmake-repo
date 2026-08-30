#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/input/gestures/GestureRecognizerBase.h"
#include "mc/deps/core/math/Vec2.h"

// auto generated forward declare list
// clang-format off
namespace OreUI { class IGestureListener; }
namespace OreUI { struct TapGestureParameters; }
namespace OreUI { struct TouchEventData; }
// clang-format on

namespace OreUI {

class TapRecognizer : public ::OreUI::GestureRecognizerBase {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, uint const>                                                  mMaximumNumberOfTouches;
    ::ll::TypedStorage<8, 8, std::chrono::duration<long long, std::ratio<1, 1000>> const> mTimeTolerance;
    ::ll::TypedStorage<4, 4, float const>                                                 mTapDistanceToleranceCm;
    ::ll::TypedStorage<4, 8, ::Vec2>                                                      mStartPoint;
    ::ll::TypedStorage<8, 8, std::chrono::duration<long long, std::ratio<1, 1000>>>       mLastTouchTimestamp;
    // NOLINTEND

public:
    // prevent constructor by default
    TapRecognizer();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~TapRecognizer();

    virtual void onTouchesBegan(std::vector<OreUI::TouchEventData> const&);

    virtual void onTouchesEnded(std::vector<OreUI::GestureRecognizerBase::TouchEventDataWithCurrentPos> const&);

    virtual void onGestureRecognized();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $onTouchesBegan(std::vector<OreUI::TouchEventData> const&);

    MCNAPI void $onTouchesEnded(std::vector<OreUI::GestureRecognizerBase::TouchEventDataWithCurrentPos> const&);

    MCNAPI void $onGestureRecognized();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace OreUI
