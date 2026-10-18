#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/oreui/input/gestures/GestureRecognizerBase.h"
#include "mc/deps/core/math/Vec2.h"

// auto generated forward declare list
// clang-format off
namespace OreUI { class IGestureListener; }
namespace OreUI { struct FlingGestureParameters; }
namespace OreUI { struct TouchEventData; }
// clang-format on

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/oreui/input/gestures/GestureRecognizerBase.h"
#include "mc/deps/core/math/Vec2.h"

// auto generated forward declare list
// clang-format off
namespace OreUI { struct TouchEventData; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace OreUI {

#if defined(LL_PLAT_A) // @header-generator platform
class FlingRecognizer : public ::OreUI::GestureRecognizerBase {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ulong const>                                                 mMinimumNumberOfTouches;
    ::ll::TypedStorage<8, 8, ulong const>                                                 mMaximumNumberOfTouches;
    ::ll::TypedStorage<8, 8, std::chrono::duration<long long, std::ratio<1, 1000>> const> mMaxFlingIntervalBetweenMoves;
    ::ll::TypedStorage<4, 4, float const>                                                 mMinDistanceToFlingCm;
    ::ll::TypedStorage<4, 8, ::Vec2>                                                      mPreviousLocation;
    ::ll::TypedStorage<8, 8, std::chrono::duration<long long, std::ratio<1, 1000>>>       mPreviousTouchTimeForGesture;
    ::ll::TypedStorage<8, 8, std::chrono::duration<long long, std::ratio<1, 1000>>>       mFlingStartTime;
    ::ll::TypedStorage<4, 8, ::Vec2>                                                      mFlingStart;
    // NOLINTEND

public:
    // prevent constructor by default
    FlingRecognizer();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~FlingRecognizer();

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
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
class FlingRecognizer : public ::OreUI::GestureRecognizerBase {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, uint64 const>                      mMinimumNumberOfTouches;
    ::ll::TypedStorage<8, 8, uint64 const>                      mMaximumNumberOfTouches;
    ::ll::TypedStorage<8, 8, ::std::chrono::milliseconds const> mMaxFlingIntervalBetweenMoves;
    ::ll::TypedStorage<4, 4, float const>                       mMinDistanceToFlingCm;
    ::ll::TypedStorage<4, 8, ::Vec2>                            mPreviousLocation;
    ::ll::TypedStorage<8, 8, ::std::chrono::milliseconds>       mPreviousTouchTimeForGesture;
    ::ll::TypedStorage<8, 8, ::std::chrono::milliseconds>       mFlingStartTime;
    ::ll::TypedStorage<4, 8, ::Vec2>                            mFlingStart;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~FlingRecognizer() /*override*/ = default;

    virtual void onTouchesBegan(::std::vector<::OreUI::TouchEventData> const& touches) /*override*/;

    virtual void onTouchesMoved(
        ::std::vector<::OreUI::GestureRecognizerBase::TouchEventDataWithCurrentPos> const& touches
    ) /*override*/;

    virtual void onTouchesEnded(
        ::std::vector<::OreUI::GestureRecognizerBase::TouchEventDataWithCurrentPos> const& touches
    ) /*override*/;

    virtual void onGestureRecognized() /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $onTouchesBegan(::std::vector<::OreUI::TouchEventData> const& touches);

    MCAPI void
    $onTouchesMoved(::std::vector<::OreUI::GestureRecognizerBase::TouchEventDataWithCurrentPos> const& touches);

    MCAPI void
    $onTouchesEnded(::std::vector<::OreUI::GestureRecognizerBase::TouchEventDataWithCurrentPos> const& touches);

    MCFOLD void $onGestureRecognized();
    // NOLINTEND
};
#else // @header-generator platform
class FlingRecognizer {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace OreUI
