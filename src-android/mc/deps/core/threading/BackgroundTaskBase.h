#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/memory/MemoryCategory.h"
#include "mc/deps/core/threading/TaskRunResult.h"
#include "mc/resources/TaskGroupState.h"

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
    class PriorityComparer;
    class CurrentTaskAutoScope;
    class PendingComparer;
    // clang-format on

    // BackgroundTaskBase inner types define
    class PriorityComparer {};

    class CurrentTaskAutoScope {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, ::BackgroundTaskBase*> mPrev;
        // NOLINTEND

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
    };

    class PendingComparer {
    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI bool
        operator()(std::shared_ptr<BackgroundTaskBase> const&, std::shared_ptr<BackgroundTaskBase> const&) const;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
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

    virtual ::TaskRunResult run(::ITaskExecutionContext const*, bool) = 0;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
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
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::BackgroundTaskBase*& gCurrentTask();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::gsl::not_null<IBackgroundTaskOwner*>, ::TaskStartInfo const&, bool);
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
