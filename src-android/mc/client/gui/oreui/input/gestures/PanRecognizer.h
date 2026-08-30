#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/input/gestures/GestureRecognizerBase.h"
#include "mc/deps/core/math/Vec2.h"

// auto generated forward declare list
// clang-format off
namespace OreUI { class IGestureListener; }
namespace OreUI { struct PanGestureParameters; }
namespace OreUI { struct TouchEventData; }
// clang-format on

namespace OreUI {

class PanRecognizer : public ::OreUI::GestureRecognizerBase {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ulong const> mMinimumNumberOfTouches;
    ::ll::TypedStorage<8, 8, ulong const> mMaximumNumberOfTouches;
    ::ll::TypedStorage<4, 4, float const> mMinDistanceToPanCm;
    ::ll::TypedStorage<4, 4, float>       mTotalDeltaMovementInCm;
    ::ll::TypedStorage<4, 8, ::Vec2>      mPreviousLocation;
    ::ll::TypedStorage<4, 8, ::Vec2>      mStartPoint;
    ::ll::TypedStorage<4, 8, ::Vec2>      mEndPoint;
    ::ll::UntypedStorage<4, 16>           mDeltaTranslation;
    // NOLINTEND

public:
    // prevent constructor by default
    PanRecognizer();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~PanRecognizer();

    virtual void onTouchesBegan(std::vector<OreUI::TouchEventData> const&);

    virtual void onTouchesMoved(std::vector<OreUI::GestureRecognizerBase::TouchEventDataWithCurrentPos> const&);

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

    MCNAPI void $onTouchesMoved(std::vector<OreUI::GestureRecognizerBase::TouchEventDataWithCurrentPos> const&);

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
