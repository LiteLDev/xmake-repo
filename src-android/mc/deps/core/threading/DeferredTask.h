#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Core {

class DeferredTask {
public:
    // DeferredTask inner types define
    enum class State : int {
        Ready     = 0,
        Executing = 1,
        Done      = 2,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, std::atomic<Core::DeferredTask::State>> mState;
    ::ll::TypedStorage<4, 48, std::condition_variable>               mCondition;
    ::ll::TypedStorage<4, 40, std::mutex>                            mExecutionMutex;
    ::ll::UntypedStorage<8, 48>                                      mCallback;
    ::ll::UntypedStorage<1, 16>                                      mCanSkipExecution;
    // NOLINTEND

public:
    // prevent constructor by default
    DeferredTask& operator=(DeferredTask const&);
    DeferredTask();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI DeferredTask(std::function<void()> const&, bool const);

    MCNAPI bool isDone();

    MCNAPI bool tryExecute();

    MCNAPI bool wait(std::chrono::duration<long long, std::ratio<1, 1000000000>> const&) const;

    MCNAPI ~DeferredTask();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::function<void()> const&, bool const);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Core
