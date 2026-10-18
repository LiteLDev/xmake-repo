#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/controls/UIComponent.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"

// auto generated forward declare list
// clang-format off
class UIControl;
// clang-format on

class BaseCyclingComponent : public ::UIComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, uint64>                           mMaxCycleCount;
    ::ll::TypedStorage<8, 8, uint64>                           mCurrentCycleIndex;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mPageIndicatorManagerSub;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~BaseCyclingComponent() /*override*/;

    virtual ::std::unique_ptr<::UIComponent> clone(::UIControl& cloneOwner) const = 0;

    virtual void reset() /*override*/;

    virtual void _updateSubPage() = 0;

    virtual void _postCreate() = 0;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void _notifyPageIndicatorManagerOfNewSubscriber();

    MCAPI void _notifySubPageChanged(uint64 newPage);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD void $reset();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
#else // @header-generator platform
class BaseCyclingComponent {};
#endif // @header-generator platform
#endif // @header-generator platform
