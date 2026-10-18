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
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 4, std::atomic<Core::DeferredTask::State>> mState;
    ::ll::TypedStorage<4, 48, std::condition_variable>               mCondition;
    ::ll::TypedStorage<4, 40, std::mutex>                            mExecutionMutex;
    ::ll::UntypedStorage<8, 48>                                      mCallback;
    ::ll::UntypedStorage<1, 16>                                      mCanSkipExecution;
#else // @header-generator platform
    ::ll::UntypedStorage<4, 4>  mUnk9c24c0;
    ::ll::UntypedStorage<8, 72> mUnk93634c;
    ::ll::UntypedStorage<8, 80> mUnkabda4f;
    ::ll::UntypedStorage<8, 64> mUnk7bd5bd;
    ::ll::UntypedStorage<1, 1>  mUnk7583e3;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    DeferredTask& operator=(DeferredTask const&);
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    DeferredTask(DeferredTask const&);
#endif // @header-generator platform
    DeferredTask();

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCNAPI bool tryExecute();

    MCNAPI bool wait(::std::chrono::nanoseconds const& duration) const;
#endif
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace Core
