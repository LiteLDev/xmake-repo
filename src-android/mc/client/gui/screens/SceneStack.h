#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/GameEventNotification.h"
#include "mc/client/gui/SceneType.h"
#include "mc/client/gui/oreui/routing/RouteAction.h"
#include "mc/client/gui/screens/ScreenThreshold.h"
#include "mc/client/gui/screens/interfaces/ISceneStack.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/pub_sub/Publisher.h"
#include "mc/deps/core/utility/pub_sub/ReturnPolicyType.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"
#include "mc/deps/input/TextCharEventData.h"
#include "mc/platform/brstd/function_ref.h"

// auto generated forward declare list
// clang-format off
class AbstractScene;
class CachedScenes;
class OptionRegistry;
class SceneStackProxy;
class TaskGroup;
class UIEventCoordinator;
namespace Bedrock::PubSub::ThreadModel { struct MultiThreaded; }
// clang-format on

class SceneStack : public ::ISceneStack {
public:
    // SceneStack inner types declare
    // clang-format off
    class SceneStackEvent;
    class PushScreenEvent;
    class PopScreenEvent;
    class PopRangeOfTypeScreenEvent;
    class FlushScreenEvent;
    class ReloadScreenEvent;
    // clang-format on

    // SceneStack inner types define
    class SceneStackEvent {
    public:
        // SceneStackEvent inner types define
        enum class EventType : int {
            Push              = 0,
            Pop               = 1,
            Pop_Range_Of_Type = 2,
            Flush             = 3,
            Reload            = 4,
        };

    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, ::SceneStack::SceneStackEvent::EventType> mType;
        // NOLINTEND

    public:
        // prevent constructor by default
        SceneStackEvent();

    public:
        // virtual functions
        // NOLINTBEGIN
        virtual ~SceneStackEvent();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

    class PushScreenEvent : public ::SceneStack::SceneStackEvent {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 16, std::shared_ptr<AbstractScene>>    mScene;
        ::ll::TypedStorage<8, 40, std::optional<OreUI::RouteAction>> mRouteAction;
        // NOLINTEND

    public:
        // prevent constructor by default
        PushScreenEvent();

    public:
        // virtual functions
        // NOLINTBEGIN
        virtual ~PushScreenEvent();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND

    public:
        // vftables
        // NOLINTBEGIN
        MCNAPI static void** $vftable();
        // NOLINTEND
    };

    class PopScreenEvent : public ::SceneStack::SceneStackEvent {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, int>                                mPopCount;
        ::ll::TypedStorage<8, 40, std::optional<OreUI::RouteAction>> mRouteAction;
        ::ll::TypedStorage<8, 24, std::vector<std::string>>          mExpectedScreenNames;
        // NOLINTEND

    public:
        // prevent constructor by default
        PopScreenEvent();

    public:
        // virtual functions
        // NOLINTBEGIN
        virtual ~PopScreenEvent();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND

    public:
        // vftables
        // NOLINTBEGIN
        MCNAPI static void** $vftable();
        // NOLINTEND
    };

    class PopRangeOfTypeScreenEvent : public ::SceneStack::SceneStackEvent {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, ::ui::SceneType> mSceneType;
        ::ll::TypedStorage<4, 4, ::ui::SceneType> mSceneTypeExclusions;
        ::ll::TypedStorage<4, 4, int>             mPopCount;
        // NOLINTEND

    public:
        // prevent constructor by default
        PopRangeOfTypeScreenEvent();

    public:
        // virtual functions
        // NOLINTBEGIN
        virtual ~PopRangeOfTypeScreenEvent();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND

    public:
        // vftables
        // NOLINTBEGIN
        MCNAPI static void** $vftable();
        // NOLINTEND
    };

    class FlushScreenEvent : public ::SceneStack::SceneStackEvent {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<1, 1, bool> mIgnoreNotFlushableFlag;
        ::ll::TypedStorage<1, 1, bool> mIgnoreTransitions;
        ::ll::UntypedStorage<8, 48>    mPostFlushCallback;
        // NOLINTEND

    public:
        // prevent constructor by default
        FlushScreenEvent();

    public:
        // virtual functions
        // NOLINTBEGIN
        virtual ~FlushScreenEvent();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND

    public:
        // vftables
        // NOLINTBEGIN
        MCNAPI static void** $vftable();
        // NOLINTEND
    };

    class ReloadScreenEvent : public ::SceneStack::SceneStackEvent {
    public:
        // virtual functions
        // NOLINTBEGIN
        virtual ~ReloadScreenEvent();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND

    public:
        // vftables
        // NOLINTBEGIN
        MCNAPI static void** $vftable();
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::UntypedStorage<8, 24> mScreenStack;
    ::ll::TypedStorage<8, 8, ::CachedScenes&> mCachedScreens;
    ::ll::TypedStorage<8, 24, std::vector<std::unique_ptr<SceneStack::SceneStackEvent>>> mStackEvents;
    ::ll::TypedStorage<8, 24, std::vector<std::unique_ptr<SceneStack::SceneStackEvent>>> mQueuedStackEvents;
    ::ll::TypedStorage<8, 24, std::vector<ScreenThreshold>> mScreenThresholds;
    ::ll::TypedStorage<8, 8, std::unique_ptr<TaskGroup>> mDestroyScreenTaskGroup;
    ::ll::TypedStorage<4, 4, int> mActiveStackSize;
    ::ll::TypedStorage<4, 4, int> mScheduledScreenPushCount;
    ::ll::TypedStorage<4, 4, int> mScheduledScreenPopCount;
    ::ll::TypedStorage<1, 1, bool> mScreenNeedsEntrance;
    ::ll::TypedStorage<8, 24, std::string> mLastPoppedScreenName;
    ::ll::TypedStorage<1, 1, bool> mChangedThisFrame;
    ::ll::TypedStorage<1, 1, bool> mScreenIsTicking;
    ::ll::TypedStorage<1, 1, bool> mReloadScenesOnNextPop;
    ::ll::TypedStorage<1, 1, bool> mDeferUpdatesUntilNextTick;
    ::ll::TypedStorage<1, 1, bool> mBufferTextCharEvents;
    ::ll::TypedStorage<8, 24, std::vector<TextCharEventData>> mBufferedTextCharEventData;
    ::ll::TypedStorage<8, 16, std::weak_ptr<OptionRegistry>> mOptions;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mAsyncLoadOptionSubscription;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mScreenAnimationsSubscription;
    ::ll::UntypedStorage<8, 88> mSceneStackDestroyedPublisher;
    ::ll::TypedStorage<8, 24, std::vector<std::pair<void*, std::function<void (AbstractScene&)>>>> mSceneChangeCallbacks;
    ::ll::TypedStorage<8, 24, std::vector<std::pair<void*, std::function<void (AbstractScene&)>>>> mPrePushSceneCallbacks;
    ::ll::TypedStorage<8, 24, std::vector<std::pair<void*, std::function<void (std::shared_ptr<AbstractScene>, std::optional<OreUI::RouteAction>)>>>> mPushSceneCallbacks;
    ::ll::TypedStorage<8, 24, std::vector<std::pair<void*, std::function<void (AbstractScene*)>>>> mPrePopSceneCallbacks;
    ::ll::TypedStorage<8, 24, std::vector<std::pair<void*, std::function<void (std::shared_ptr<AbstractScene>, bool, std::optional<OreUI::RouteAction>)>>>> mPopSceneCallbacks;
    ::ll::TypedStorage<8, 8, std::unique_ptr<SceneStackProxy>> mProxy;
    ::ll::UntypedStorage<8, 24> mUIEventCoordinator;
    ::ll::UntypedStorage<8, 48> mGetSuspended;
    // clang-format on
    // NOLINTEND

public:
    // prevent constructor by default
    SceneStack& operator=(SceneStack const&);
    SceneStack(SceneStack const&);
    SceneStack();

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~SceneStack();

    virtual void reload();

    virtual void setOptions(std::weak_ptr<OptionRegistry>);

    virtual void registerSceneChangeCallback(void*, std::function<void (AbstractScene&)>);

    virtual void unregisterSceneChangeCallback(void*);

    virtual void registerPrePushSceneCallback(void*, std::function<void (AbstractScene&)>);

    virtual void unregisterPrePushSceneCallback(void*);

    virtual void registerPushSceneCallback(void*, std::function<void (std::shared_ptr<AbstractScene>, std::optional<OreUI::RouteAction>)>);

    virtual void unregisterPushSceneCallback(void*);

    virtual void registerPrePopSceneCallback(void*, std::function<void (AbstractScene*)>);

    virtual void unregisterPrePopSceneCallback(void*);

    virtual void registerPopSceneCallback(void*, std::function<void (std::shared_ptr<AbstractScene>, bool, std::optional<OreUI::RouteAction>)>);

    virtual void unregisterPopSceneCallback(void*);

    virtual void forEachVisibleScreen(::brstd::function_ref<void (AbstractScene&)>, bool, bool);

    virtual void forEachScreen(::brstd::function_ref<bool (AbstractScene&)>, bool);

    virtual void forEachScreenConst(::brstd::function_ref<bool (const AbstractScene&)>, bool) const;

    virtual void forEachAlwaysAcceptInputScreen(::brstd::function_ref<void (AbstractScene&)>, ::AbstractScene const*);

    virtual void forEachAlwaysAcceptInputScreenWithTop(::brstd::function_ref<void (AbstractScene&)>);

    virtual void pushScreenWithRouteAction(std::shared_ptr<AbstractScene>, ::OreUI::RouteAction const&);

    virtual void popScreenWithRouteAction(::OreUI::RouteAction const&);

    virtual void pushScreen(std::shared_ptr<AbstractScene>, bool);

    virtual void schedulePopScreen(int);

    virtual void schedulePopScreenWithExpectedNames(std::vector<std::string> const&);

    virtual void flushStack(bool, bool, bool, std::function<void ()>);

    virtual void deferUpdatesUntilNextTick();

    virtual std::optional<ulong> getFirstSceneIndexOfSceneType(::ui::SceneType) const;

    virtual bool popScreensBackTo(::ui::SceneType const);

    virtual bool popScreensBackToFirstInstanceOf(::ui::SceneType const);

    virtual bool popTopScreensOfType(::ui::SceneType const);

    virtual bool update();

    virtual void resetScreenChangeDirtyFlag();

    virtual bool hasChangedThisFrame() const;

    virtual bool isEmpty() const;

    virtual ulong getSize() const;

    virtual void setScreenTickingFlag(bool);

    virtual bool getScreenTickingFlag() const;

    virtual ::ui::SceneType getNonTerminatingSceneType() const;

    virtual std::vector<std::string> getScreenNames() const;

    virtual std::vector<std::string> getScreenTelemetryNames() const;

    virtual std::string getScreenName() const;

    virtual std::string getScreenTelemetry() const;

    virtual std::string const& getLastPoppedScreenName() const;

    virtual void handleLicenseChanged();

    virtual void onGameEventNotification(::ui::GameEventNotification);

    virtual ::AbstractScene const* getTopScene() const;

    virtual ::AbstractScene* getTopScene();

    virtual std::shared_ptr<AbstractScene> getTopSceneShared() const;

    virtual ::AbstractScene const* getActiveScene() const;

    virtual ::AbstractScene* getActiveScene();

    virtual std::shared_ptr<const AbstractScene> const getSharedNonTerminatingActiveScene() const;

    virtual std::shared_ptr<AbstractScene> getSharedNonTerminatingActiveScene();

    virtual ::gsl::span<const ISceneStack::SceneElement> getScreenStackView() const;

    virtual int getScheduledPopCount() const;

    virtual bool isScreenReplaceable() const;

    virtual void handleTextChar(std::string const&);

    virtual void setBufferTextCharEvents(bool);

    virtual bool isBufferingTextCharEvents() const;

    virtual bool isOnSceneStack(std::string const&) const;

    virtual bool isOnSceneStack(::ui::SceneType) const;

    virtual ::SceneStackProxy* getProxy();

    virtual bool hasScheduledScreens() const;

    virtual bool hasScheduledEvents() const;

    virtual void setScreenThreshold(::ScreenThreshold const&);

    virtual ::Bedrock::PubSub::Subscription registerSceneStackDestroyedListener(std::function<void ()>);
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI SceneStack(
        ::CachedScenes&,
        ::gsl::not_null<Bedrock::NonOwnerPointer<UIEventCoordinator>> const&,
        std::function<bool()> const&
    );

    MCNAPI bool _animationsEnabled() const;

    MCNAPI bool _popScreens(int&, bool, std::optional<OreUI::RouteAction>, std::vector<std::string> const&);

    MCNAPI void _schedulePopScreen(int, std::optional<OreUI::RouteAction>, std::vector<std::string> const&);

    MCNAPI void _schedulePushScreen(std::shared_ptr<AbstractScene>, bool, std::optional<OreUI::RouteAction>);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void _forEachVisibleScreen(
        ::brstd::function_ref<void(AbstractScene&)>,
        std::function<AbstractScene*(int)>,
        bool,
        bool,
        ulong,
        ulong,
        ulong,
        bool
    );

    MCNAPI static void forEachVisibleScreen(
        ::brstd::function_ref<void(AbstractScene&)>,
        std::function<AbstractScene*(int)>,
        bool,
        bool,
        int
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::CachedScenes&,
        ::gsl::not_null<Bedrock::NonOwnerPointer<UIEventCoordinator>> const&,
        std::function<bool()> const&
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
    MCNAPI void $reload();

    MCNAPI void $setOptions(std::weak_ptr<OptionRegistry>);

    MCNAPI void $registerSceneChangeCallback(void*, std::function<void(AbstractScene&)>);

    MCNAPI void $unregisterSceneChangeCallback(void*);

    MCNAPI void $registerPrePushSceneCallback(void*, std::function<void(AbstractScene&)>);

    MCNAPI void $unregisterPrePushSceneCallback(void*);

    MCNAPI void $registerPushSceneCallback(
        void*,
        std::function<void(std::shared_ptr<AbstractScene>, std::optional<OreUI::RouteAction>)>
    );

    MCNAPI void $unregisterPushSceneCallback(void*);

    MCNAPI void $registerPrePopSceneCallback(void*, std::function<void(AbstractScene*)>);

    MCNAPI void $unregisterPrePopSceneCallback(void*);

    MCNAPI void $registerPopSceneCallback(
        void*,
        std::function<void(std::shared_ptr<AbstractScene>, bool, std::optional<OreUI::RouteAction>)>
    );

    MCNAPI void $unregisterPopSceneCallback(void*);

    MCNAPI void $forEachVisibleScreen(::brstd::function_ref<void(AbstractScene&)>, bool, bool);

    MCNAPI void $forEachScreen(::brstd::function_ref<bool(AbstractScene&)>, bool);

    MCNAPI void $forEachScreenConst(::brstd::function_ref<bool(const AbstractScene&)>, bool) const;

    MCNAPI void $forEachAlwaysAcceptInputScreen(::brstd::function_ref<void(AbstractScene&)>, ::AbstractScene const*);

    MCNAPI void $forEachAlwaysAcceptInputScreenWithTop(::brstd::function_ref<void(AbstractScene&)>);

    MCNAPI void $pushScreenWithRouteAction(std::shared_ptr<AbstractScene>, ::OreUI::RouteAction const&);

    MCNAPI void $popScreenWithRouteAction(::OreUI::RouteAction const&);

    MCNAPI void $pushScreen(std::shared_ptr<AbstractScene>, bool);

    MCNAPI void $schedulePopScreen(int);

    MCNAPI void $schedulePopScreenWithExpectedNames(std::vector<std::string> const&);

    MCNAPI void $flushStack(bool, bool, bool, std::function<void()>);

    MCNAPI void $deferUpdatesUntilNextTick();

    MCNAPI std::optional<ulong> $getFirstSceneIndexOfSceneType(::ui::SceneType) const;

    MCNAPI bool $popScreensBackTo(::ui::SceneType const);

    MCNAPI bool $popScreensBackToFirstInstanceOf(::ui::SceneType const);

    MCNAPI bool $popTopScreensOfType(::ui::SceneType const);

    MCNAPI bool $update();

    MCNAPI void $resetScreenChangeDirtyFlag();

    MCNAPI bool $hasChangedThisFrame() const;

    MCNAPI bool $isEmpty() const;

    MCNAPI ulong $getSize() const;

    MCNAPI void $setScreenTickingFlag(bool);

    MCNAPI bool $getScreenTickingFlag() const;

    MCNAPI ::ui::SceneType $getNonTerminatingSceneType() const;

    MCNAPI std::vector<std::string> $getScreenNames() const;

    MCNAPI std::vector<std::string> $getScreenTelemetryNames() const;

    MCNAPI std::string $getScreenName() const;

    MCNAPI std::string $getScreenTelemetry() const;

    MCNAPI std::string const& $getLastPoppedScreenName() const;

    MCNAPI void $handleLicenseChanged();

    MCNAPI void $onGameEventNotification(::ui::GameEventNotification);

    MCNAPI ::AbstractScene const* $getTopScene() const;

    MCNAPI ::AbstractScene* $getTopScene();

    MCNAPI std::shared_ptr<AbstractScene> $getTopSceneShared() const;

    MCNAPI ::AbstractScene const* $getActiveScene() const;

    MCNAPI ::AbstractScene* $getActiveScene();

    MCNAPI std::shared_ptr<const AbstractScene> const $getSharedNonTerminatingActiveScene() const;

    MCNAPI std::shared_ptr<AbstractScene> $getSharedNonTerminatingActiveScene();

    MCNAPI ::gsl::span<const ISceneStack::SceneElement> $getScreenStackView() const;

    MCNAPI int $getScheduledPopCount() const;

    MCNAPI bool $isScreenReplaceable() const;

    MCNAPI void $handleTextChar(std::string const&);

    MCNAPI void $setBufferTextCharEvents(bool);

    MCNAPI bool $isBufferingTextCharEvents() const;

    MCNAPI bool $isOnSceneStack(std::string const&) const;

    MCNAPI bool $isOnSceneStack(::ui::SceneType) const;

    MCNAPI ::SceneStackProxy* $getProxy();

    MCNAPI bool $hasScheduledScreens() const;

    MCNAPI bool $hasScheduledEvents() const;

    MCNAPI void $setScreenThreshold(::ScreenThreshold const&);

    MCNAPI ::Bedrock::PubSub::Subscription $registerSceneStackDestroyedListener(std::function<void()>);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
