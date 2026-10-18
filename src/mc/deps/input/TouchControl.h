#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated forward declare list
// clang-format off
class InputEventQueue;
class InputRenderContext;
class RectangleArea;
class TouchPointResults;
// clang-format on

class TouchControl {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 48>            mArea;
    ::ll::TypedStorage<4, 4, int>          mScreenWidth;
    ::ll::TypedStorage<4, 4, int>          mScreenHeight;
    ::ll::TypedStorage<8, 24, std::string> mCurrentLabel;
    // NOLINTEND

public:
    // prevent constructor by default
    TouchControl(TouchControl const&);
    TouchControl();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~TouchControl();

    virtual uint getHoldButtonId() const;

    virtual int getActivePointerId() const;

    virtual bool releaseOnClear() const;

    virtual void render(::InputRenderContext&) const;

    virtual void tick(::InputEventQueue&, ::TouchPointResults&, int);

    virtual void release(::InputEventQueue&);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit TouchControl(std::function<RectangleArea()>);

    MCNAPI bool canUpdateActivePointer(::TouchPointResults&, int, float&, float&) const;

    MCNAPI int getNewActivePointer(
        ::TouchPointResults&,
        ::RectangleArea const&,
        float&,
        float&,
        std::vector<RectangleArea> const&,
        std::vector<int> const&,
        bool
    ) const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::function<RectangleArea()>);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI uint $getHoldButtonId() const;

    MCNAPI int $getActivePointerId() const;

    MCNAPI bool $releaseOnClear() const;

    MCNAPI void $render(::InputRenderContext&) const;

    MCNAPI void $tick(::InputEventQueue&, ::TouchPointResults&, int);

    MCNAPI void $release(::InputEventQueue&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated forward declare list
// clang-format off
class InputEventQueue;
class InputRenderContext;
class RectangleArea;
class TouchPointResults;
// clang-format on

class TouchControl {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 64, ::std::function<::RectangleArea()>> mArea;
    ::ll::TypedStorage<4, 4, int>                                 mScreenWidth;
    ::ll::TypedStorage<4, 4, int>                                 mScreenHeight;
    ::ll::TypedStorage<8, 32, ::std::string>                      mCurrentLabel;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~TouchControl();

    virtual uint getHoldButtonId() const;

    virtual int getActivePointerId() const;

    virtual bool releaseOnClear() const;

    virtual void render(::InputRenderContext& context) const;

    virtual void tick(::InputEventQueue& eventQueue, ::TouchPointResults& touchPointResults, int yAxisInversionFactor);

    virtual void release(::InputEventQueue& eventQueue);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI int getNewActivePointer(
        ::TouchPointResults&                  touchPointResults,
        ::RectangleArea const&                area,
        float&                                x,
        float&                                y,
        ::std::vector<::RectangleArea> const& areasToIgnore,
        ::std::vector<int> const&             pointerIdsToIgnore,
        bool                                  consumeInput
    ) const;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD uint $getHoldButtonId() const;

    MCFOLD int $getActivePointerId() const;

    MCFOLD bool $releaseOnClear() const;

    MCFOLD void $render(::InputRenderContext& context) const;

    MCFOLD void $tick(::InputEventQueue& eventQueue, ::TouchPointResults& touchPointResults, int yAxisInversionFactor);

    MCFOLD void $release(::InputEventQueue& eventQueue);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
#else // @header-generator platform
class TouchControl {};
#endif // @header-generator platform
#endif // @header-generator platform
