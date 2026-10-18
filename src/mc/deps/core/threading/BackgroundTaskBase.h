#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/memory/MemoryCategory.h"
#include "mc/deps/core/threading/TaskRunResult.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/resources/TaskGroupState.h"
#else // @header-generator platform
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
class IBackgroundTaskOwner;
class ITaskExecutionContext;
struct TaskStartInfo;
// clang-format on

class BackgroundTaskBase {
public:
    // BackgroundTaskBase inner types declare
    // clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
    class PriorityComparer;
#else // @header-generator platform
#endif // @header-generator platform
    class CurrentTaskAutoScope;
    class PendingComparer;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    class PriorityComparer;
#endif // @header-generator platform
    // clang-format on

    // BackgroundTaskBase inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    class PriorityComparer {};

#else // @header-generator platform
#endif // @header-generator platform
    class CurrentTaskAutoScope {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, ::BackgroundTaskBase*> mPrev;
        // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

    public:
        // prevent constructor by default
        CurrentTaskAutoScope& operator=(CurrentTaskAutoScope const&);

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI explicit CurrentTaskAutoScope(::BackgroundTaskBase*);

        MCNAPI ~CurrentTaskAutoScope();
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCNAPI void* $ctor(::BackgroundTaskBase*);
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
#else // @header-generator platform
#endif // @header-generator platform
    };

#if defined(LL_PLAT_A) // @header-generator platform
    class PendingComparer {
    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI bool
        operator()(std::shared_ptr<BackgroundTaskBase> const&, std::shared_ptr<BackgroundTaskBase> const&) const;
        // NOLINTEND
    };
#else // @header-generator platform
    class PendingComparer {};

    class PriorityComparer {};
#endif // @header-generator platform

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    ::ll::TypedStorage<1, 1, bool const> mIsAsync;
    ::ll::TypedStorage<8, 8, ::IBackgroundTaskOwner*> mGroup;
    ::ll::TypedStorage<8, 8, ::BackgroundTaskBase*> mPrevTask;
    ::ll::TypedStorage<8, 16, std::shared_ptr<BackgroundTaskBase>> mNextTask;
    ::ll::TypedStorage<4, 4, int> mPriority;
    ::ll::UntypedStorage<8, 8> mAffinity;
    ::ll::TypedStorage<4, 4, int const> mBackDownPriorityAmount;
    ::ll::TypedStorage<8, 8, std::chrono::time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>>> mStartAfterTime;
    ::ll::TypedStorage<8, 24, std::string> mTaskName;
    ::ll::TypedStorage<1, 1, ::Memory::MemoryCategory> mMemoryCategory;
    // clang-format on
#else // @header-generator platform
    ::ll::TypedStorage<1, 1, bool const>                               mIsAsync;
    ::ll::TypedStorage<8, 8, ::IBackgroundTaskOwner*>                  mGroup;
    ::ll::TypedStorage<8, 8, ::BackgroundTaskBase*>                    mPrevTask;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::BackgroundTaskBase>> mNextTask;
    ::ll::TypedStorage<4, 4, int>                                      mPriority;
    ::ll::TypedStorage<4, 4, ::std::thread::id>                        mAffinity;
    ::ll::TypedStorage<4, 4, int const>                                mBackDownPriorityAmount;
    ::ll::TypedStorage<8, 8, ::std::chrono::steady_clock::time_point>  mStartAfterTime;
    ::ll::TypedStorage<8, 32, ::std::string>                           mTaskName;
    ::ll::TypedStorage<1, 1, ::Memory::MemoryCategory>                 mMemoryCategory;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    BackgroundTaskBase();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~BackgroundTaskBase();

    virtual void cancel() = 0;

    virtual bool isReady() const = 0;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::TaskRunResult run(::ITaskExecutionContext const*, bool) = 0;
#else // @header-generator platform
    virtual ::TaskRunResult run(::ITaskExecutionContext const* executionContext, bool isAsyncContext) = 0;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI BackgroundTaskBase(::gsl::not_null<IBackgroundTaskOwner*>, ::TaskStartInfo const&, bool);

    MCNAPI void _makeOrphan();

    MCNAPI void backDownPriority();

    MCNAPI bool canBeRunBy(std::__thread_id) const;

    MCNAPI ::IBackgroundTaskOwner* getGroup();

    MCNAPI ::TaskGroupState getGroupState() const;

    MCNAPI std::shared_ptr<BackgroundTaskBase> getNext();

    MCNAPI ::BackgroundTaskBase* getPrev();

    MCNAPI
        std::chrono::time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>>
        getStartAfterTime() const;

    MCNAPI bool hasAffinity() const;

    MCNAPI bool isAsync() const;

    MCNAPI bool isOrphaned() const;

    MCNAPI bool isReadyToStart(
        std::chrono::time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>>
    ) const;

    MCNAPI void setNext(std::shared_ptr<BackgroundTaskBase>);

    MCNAPI void setPrev(::BackgroundTaskBase*);

    MCNAPI void setStartAfterTime(
        std::chrono::time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>>
    );

    MCNAPI void setSyncPriority();

    MCNAPI void taskComplete();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::BackgroundTaskBase* getCurrent();
#else // @header-generator platform
    MCAPI
    BackgroundTaskBase(::gsl::not_null<::IBackgroundTaskOwner*> group, ::TaskStartInfo const& startInfo, bool isAsync);
#endif // @header-generator platform
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::BackgroundTaskBase*& gCurrentTask();
#else // @header-generator platform
    MCAPI static ::BackgroundTaskBase*& gCurrentTask();
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::gsl::not_null<IBackgroundTaskOwner*>, ::TaskStartInfo const&, bool);
#else // @header-generator platform
    MCAPI void* $ctor(::gsl::not_null<::IBackgroundTaskOwner*> group, ::TaskStartInfo const& startInfo, bool isAsync);
#endif // @header-generator platform
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI void $dtor();
#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
