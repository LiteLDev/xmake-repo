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
    class WaitForCallbackStage;
    class OneshotStage;
    class WaitForSignalStage;
    class SleepStage;
    class PollingStage;
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

    class OneshotStage : public ::TickingQueue::Stage {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 48> mInitFn;
        // NOLINTEND

    public:
        // prevent constructor by default
        OneshotStage();

    public:
        // virtual functions
        // NOLINTBEGIN
        virtual void init();

        virtual bool tick();
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
        virtual void init();

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
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::vector<std::unique_ptr<TickingQueue::Stage>>> mStages;
    ::ll::TypedStorage<4, 4, uint>                                               mCurrentStage;
    // NOLINTEND
};
