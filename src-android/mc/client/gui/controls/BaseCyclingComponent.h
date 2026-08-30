#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/controls/UIComponent.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"

// auto generated forward declare list
// clang-format off
class PageIndicatorManagerComponent;
class UIControl;
// clang-format on

class BaseCyclingComponent : public ::UIComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ulong>                            mMaxCycleCount;
    ::ll::TypedStorage<8, 8, ulong>                            mCurrentCycleIndex;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mPageIndicatorManagerSub;
    // NOLINTEND

public:
    // prevent constructor by default
    BaseCyclingComponent();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~BaseCyclingComponent();

    virtual std::unique_ptr<UIComponent> clone(::UIControl&) const = 0;

    virtual void reset();

    virtual void _updateSubPage() = 0;

    virtual void _postCreate() = 0;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit BaseCyclingComponent(::UIControl&);

    MCNAPI void _notifyPageIndicatorManagerOfNewSubscriber();

    MCNAPI void _notifySubPageChanged(ulong);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::UIControl&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $reset();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
