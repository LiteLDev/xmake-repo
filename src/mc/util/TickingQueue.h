#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/BasicTimer.h"
#include "mc/util/Signal.h"

class TickingQueue {
public:
    // TickingQueue inner types declare
    // clang-format off
    class Stage;
#if defined(LL_PLAT_A) // @header-generator platform
    class WaitForCallbackStage;
#else // @header-generator platform
#endif // @header-generator platform
    class OneshotStage;
#if defined(LL_PLAT_A) // @header-generator platform
    class WaitForSignalStage;
    class SleepStage;
#else // @header-generator platform
#endif // @header-generator platform
    class PollingStage;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    class SleepStage;
    class WaitForCallbackStage;
    class WaitForSignalStage;
#endif // @header-generator platform
    // clang-format on

    // TickingQueue inner types define
    class Stage {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<1, 1, bool> mInitRan;
        // NOLINTEND

    public:
        // virtual functions
        // NOLINTBEGIN
        virtual ~Stage() = default;

        virtual void init() = 0;

        virtual bool tick() = 0;
        // NOLINTEND
    };

#if defined(LL_PLAT_A) // @header-generator platform
    class WaitForCallbackStage : public ::TickingQueue::Stage {
    public:
        // WaitForCallbackStage inner types define
        using InitFunction = std::function<void(std::function<void()>)>;

    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 48> mInitFn;
        ::ll::UntypedStorage<1, 16> mSignal;
        // NOLINTEND

    public:
        // prevent constructor by default
        WaitForCallbackStage();

    public:
        // virtual functions
        // NOLINTBEGIN
        virtual void init();

        virtual bool tick();
        // NOLINTEND
    };

#else // @header-generator platform
#endif // @header-generator platform
    class OneshotStage : public ::TickingQueue::Stage {
    public:
        // member variables
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::UntypedStorage<8, 48> mInitFn;
#else // @header-generator platform
        ::ll::TypedStorage<8, 64, ::std::function<void()>> mInitFn;
#endif // @header-generator platform
        // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

    public:
        // prevent constructor by default
        OneshotStage();
#else // @header-generator platform
#endif // @header-generator platform

    public:
        // virtual functions
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        virtual void init();
#else // @header-generator platform
        virtual void init() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
        virtual bool tick();
#else // @header-generator platform
        virtual bool tick() /*override*/;
        // NOLINTEND
    };

    class PollingStage : public ::TickingQueue::Stage {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 64, ::std::function<void()>> mInitFn;
        ::ll::TypedStorage<8, 64, ::std::function<bool()>> mTickFn;
        // NOLINTEND

    public:
        // virtual functions
        // NOLINTBEGIN
        virtual void init() /*override*/;

        virtual bool tick() /*override*/;
        // NOLINTEND
    };

    class SleepStage : public ::TickingQueue::Stage {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 80, ::BasicTimer> mBasicTimer;
        // NOLINTEND

    public:
        // virtual functions
        // NOLINTBEGIN
        virtual void init() /*override*/;

        virtual bool tick() /*override*/;
        // NOLINTEND
    };

    class WaitForCallbackStage : public ::TickingQueue::Stage {
    public:
        // WaitForCallbackStage inner types define
        using Callback = ::std::function<void()>;

        using InitFunction = ::std::function<void(::std::function<void()>)>;

    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 64, ::std::function<void(::std::function<void()>)>> mInitFn;
        ::ll::TypedStorage<1, 1, ::Signal>                                        mSignal;
        // NOLINTEND

    public:
        // virtual functions
        // NOLINTBEGIN
        virtual void init() /*override*/;

        virtual bool tick() /*override*/;
#endif // @header-generator platform
        // NOLINTEND
    };

    class WaitForSignalStage : public ::TickingQueue::Stage {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, ::Signal&> mSignal;
        // NOLINTEND

    public:
        // prevent constructor by default
        WaitForSignalStage& operator=(WaitForSignalStage const&);
        WaitForSignalStage(WaitForSignalStage const&);
        WaitForSignalStage();

    public:
        // virtual functions
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        virtual void init();
#else // @header-generator platform
        virtual void init() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
        virtual bool tick();
        // NOLINTEND
    };

    class SleepStage : public ::TickingQueue::Stage {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 64> mBasicTimer;
        // NOLINTEND

    public:
        // prevent constructor by default
        SleepStage();

    public:
        // virtual functions
        // NOLINTBEGIN
        virtual void init();

        virtual bool tick();
        // NOLINTEND
    };

    class PollingStage : public ::TickingQueue::Stage {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 48> mInitFn;
        ::ll::UntypedStorage<8, 48> mTickFn;
        // NOLINTEND

    public:
        // prevent constructor by default
        PollingStage();

    public:
        // virtual functions
        // NOLINTBEGIN
        virtual void init();

        virtual bool tick();
#else // @header-generator platform
        virtual bool tick() /*override*/;
#endif // @header-generator platform
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::vector<std::unique_ptr<TickingQueue::Stage>>> mStages;
    ::ll::TypedStorage<4, 4, uint>                                               mCurrentStage;
#else // @header-generator platform
    ::ll::TypedStorage<8, 24, ::std::vector<::std::unique_ptr<::TickingQueue::Stage>>> mStages;
    ::ll::TypedStorage<4, 4, uint>                                                     mCurrentStage;
#endif // @header-generator platform
    // NOLINTEND
};
