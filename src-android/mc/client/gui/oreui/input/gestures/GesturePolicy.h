#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/input/gestures/GestureManager.h"
#include "mc/client/gui/oreui/input/gestures/GestureMode.h"
#include "mc/client/gui/oreui/interface/IGestureListener.h"
#include "mc/deps/core/math/Vec2.h"

// auto generated forward declare list
// clang-format off
namespace OreUI { class ITouchSystem; }
namespace OreUI { struct GestureParameters; }
namespace OreUI { struct TouchEventData; }
// clang-format on

namespace OreUI {

class GesturePolicy : public ::OreUI::IGestureListener {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::OreUI::ITouchSystem&>                                mTouchSystem;
    ::ll::TypedStorage<8, 24, ::OreUI::GestureManager>                              mGestureManager;
    ::ll::TypedStorage<4, 4, ::OreUI::GestureMode>                                  mMode;
    ::ll::UntypedStorage<8, 48>                                                     mGetTime;
    ::ll::TypedStorage<8, 8, std::chrono::duration<long long, std::ratio<1, 1000>>> mLastTapTime;
    ::ll::TypedStorage<4, 8, ::Vec2>                                                mLastTapPos;
    ::ll::TypedStorage<4, 4, float const>                                           mTapDistanceTolerancePixels;
    ::ll::TypedStorage<8, 24, std::vector<uint>>                                    mTtsDownTouchesIds;
    // NOLINTEND

public:
    // prevent constructor by default
    GesturePolicy& operator=(GesturePolicy const&);
    GesturePolicy(GesturePolicy const&);
    GesturePolicy();

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~GesturePolicy();

    virtual void onPanRecognized(::Vec2 const&, ::Vec2 const&, ::Vec2 const&);

    virtual void onPanCompleted(::Vec2 const&);

    virtual void onFlingCompleted(::Vec2 const&, ::Vec2 const&, std::chrono::duration<long long, std::ratio<1, 1000>>);

    virtual void onTapRecognized(::Vec2 const&);
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI GesturePolicy(
        ::OreUI::ITouchSystem&,
        ::OreUI::GestureParameters const&,
        float,
        std::function<std::chrono::duration<long long, std::ratio<1, 1000>>()> const&,
        bool
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::OreUI::ITouchSystem&,
        ::OreUI::GestureParameters const&,
        float,
        std::function<std::chrono::duration<long long, std::ratio<1, 1000>>()> const&,
        bool
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $onPanRecognized(::Vec2 const&, ::Vec2 const&, ::Vec2 const&);

    MCNAPI void $onPanCompleted(::Vec2 const&);

    MCNAPI void $onFlingCompleted(::Vec2 const&, ::Vec2 const&, std::chrono::duration<long long, std::ratio<1, 1000>>);

    MCNAPI void $onTapRecognized(::Vec2 const&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace OreUI
