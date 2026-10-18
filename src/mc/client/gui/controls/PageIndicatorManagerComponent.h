#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/controls/ComponentReceiveActionType.h"
#include "mc/client/gui/controls/UIComponent.h"
#include "mc/deps/core/utility/pub_sub/Publisher.h"
#include "mc/deps/core/utility/pub_sub/ReturnPolicyType.h"
#include "mc/deps/input/InputMode.h"

// auto generated forward declare list
// clang-format off
class ScreenInputContext;
class UIAnimationController;
class UIControl;
class VisualTree;
struct ScreenEvent;
namespace Bedrock::PubSub { class Subscription; }
namespace Bedrock::PubSub::ThreadModel { struct MultiThreaded; }
// clang-format on

class PageIndicatorManagerComponent : public ::UIComponent {
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/controls/ComponentReceiveActionType.h"
#include "mc/client/gui/controls/UIComponent.h"
#include "mc/deps/core/utility/pub_sub/Publisher.h"
#include "mc/deps/input/InputMode.h"

// auto generated forward declare list
// clang-format off
class ScreenInputContext;
class UIAnimationController;
class UIControl;
class VisualTree;
struct ScreenEvent;
namespace Bedrock::PubSub { class Subscription; }
namespace Bedrock::PubSub::ThreadModel { struct MultiThreaded; }
// clang-format on

class PageIndicatorManagerComponent : public ::UIComponent {
#else // @header-generator platform
class PageIndicatorManagerComponent {
#endif // @header-generator platform
#endif // @header-generator platform
public:
    // PageIndicatorManagerComponent inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    enum class PageIndicatorDirection : uchar {
        Left  = 0,
        Right = 1,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, std::weak_ptr<UIControl>> mControlWithManagerToCompare;
    ::ll::TypedStorage<8, 8, ulong>                     mSubPage;
    ::ll::TypedStorage<8, 8, ulong>                     mNumPages;
    ::ll::TypedStorage<4, 4, uint>                      mNextSubPageBinding;
    ::ll::TypedStorage<4, 4, uint>                      mPrevSubPageBinding;
    ::ll::TypedStorage<4, 4, ::InputMode>               mInputMode;
    ::ll::UntypedStorage<8, 88>                         mPublisher;
    ::ll::TypedStorage<1, 1, bool>                      mConsumeEvents;
    // NOLINTEND

public:
    // prevent constructor by default
    PageIndicatorManagerComponent();

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~PageIndicatorManagerComponent();

    virtual std::unique_ptr<UIComponent> clone(::UIControl&) const;

    virtual ::ComponentReceiveActionType receive(::VisualTree&, ::ScreenInputContext&, ::UIAnimationController&, ::ScreenEvent const&);

    virtual void reset();

    virtual void reload(::UIComponent const&);
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void setNextSubPageBinding(uint);

    MCNAPI void setPrevSubPageBinding(uint);

    MCNAPI void setTargetManagerToCompare(std::shared_ptr<UIControl>);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI std::unique_ptr<UIComponent> $clone(::UIControl&) const;

    MCNAPI ::ComponentReceiveActionType
    $receive(::VisualTree&, ::ScreenInputContext&, ::UIAnimationController&, ::ScreenEvent const&);

    MCNAPI void $reset();

    MCNAPI void $reload(::UIComponent const&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
    enum class PageIndicatorDirection : uchar {
        Left  = 0,
        Right = 1,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::std::weak_ptr<::UIControl>> mControlWithManagerToCompare;
    ::ll::TypedStorage<8, 8, uint64>                        mSubPage;
    ::ll::TypedStorage<8, 8, uint64>                        mNumPages;
    ::ll::TypedStorage<4, 4, uint>                          mNextSubPageBinding;
    ::ll::TypedStorage<4, 4, uint>                          mPrevSubPageBinding;
    ::ll::TypedStorage<4, 4, ::InputMode>                   mInputMode;
    ::ll::TypedStorage<
        8,
        128,
        ::Bedrock::PubSub::Publisher<void(uint64), ::Bedrock::PubSub::ThreadModel::MultiThreaded, 0>>
                                   mPublisher;
    ::ll::TypedStorage<1, 1, bool> mConsumeEvents;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~PageIndicatorManagerComponent() /*override*/ = default;

    virtual ::std::unique_ptr<::UIComponent> clone(::UIControl& cloneOwner) const /*override*/;

    virtual void reload(::UIComponent const& rhs) /*override*/;

    virtual void reset() /*override*/;

    virtual ::ComponentReceiveActionType receive(
        ::VisualTree&            visualTree,
        ::ScreenInputContext&    context,
        ::UIAnimationController& animationController,
        ::ScreenEvent const&     screenEvent
    ) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::Bedrock::PubSub::Subscription
    registerListenerWithExpectedPageCount(uint64 expectedPageCount, ::std::function<void(uint64)> callback);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::std::unique_ptr<::UIComponent> $clone(::UIControl& cloneOwner) const;

    MCAPI void $reload(::UIComponent const& rhs);

    MCAPI void $reset();

    MCAPI ::ComponentReceiveActionType $receive(
        ::VisualTree&            visualTree,
        ::ScreenInputContext&    context,
        ::UIAnimationController& animationController,
        ::ScreenEvent const&     screenEvent
    );
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
#else // @header-generator platform
    enum class PageIndicatorDirection : uchar {};
#endif // @header-generator platform
#endif // @header-generator platform
};
