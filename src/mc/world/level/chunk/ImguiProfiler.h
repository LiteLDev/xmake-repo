#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#include "mc/platform/threading/Mutex.h"
#endif // @header-generator platform
#include "mc/world/level/chunk/AverageTracker.h"
#include "mc/world/level/chunk/TimeAccumulator.h"

struct ImguiProfiler : public ::Bedrock::EnableNonOwnerReferences {
public:
    // ImguiProfiler inner types declare
    // clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
    struct RecordGroup;
#else // @header-generator platform
#endif // @header-generator platform
    struct Record;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    struct RecordGroup;
#endif // @header-generator platform
    class Timer;
#if defined(LL_PLAT_A) // @header-generator platform
    class ScopedTimer;
#else // @header-generator platform
#endif // @header-generator platform
    class ManualTimer;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    class ScopedTimer;
#endif // @header-generator platform
    // clang-format on

    // ImguiProfiler inner types define
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    struct Record {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, char const*>                mGroup;
        ::ll::TypedStorage<8, 8, char const*>                mName;
        ::ll::TypedStorage<1, 1, bool>                       mIsClient;
        ::ll::TypedStorage<8, 8, ::std::chrono::nanoseconds> mElapsed;
        // NOLINTEND
    };

#endif // @header-generator platform
    struct RecordGroup {
    public:
        // RecordGroup inner types declare
        // clang-format off
        struct Record;
        struct FullStackRecord;
        // clang-format on

        // RecordGroup inner types define
        enum class SortType : int {
            AverageTimeClient = 0,
            CountTimeClient   = 1,
            TotalTimeClient   = 2,
            AverageTimeServer = 3,
            CountTimeServer   = 4,
            TotalTimeServer   = 5,
        };

        struct Record {
        public:
            // member variables
            // NOLINTBEGIN
            ::ll::TypedStorage<8, 24, ::TimeAccumulator> mTimeAccumulator;
            ::ll::TypedStorage<8, 48, ::AverageTracker>  mAverageTracker;
            // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

        public:
            // prevent constructor by default
            Record();
#else // @header-generator platform
#endif // @header-generator platform
        };

        struct FullStackRecord {
        public:
            // member variables
            // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
            ::ll::TypedStorage<8, 24, std::string>                          mName;
#else // @header-generator platform
            ::ll::TypedStorage<8, 32, ::std::string>                        mName;
#endif // @header-generator platform
            ::ll::TypedStorage<1, 1, bool>                                  bUseAverageTracker;
            ::ll::TypedStorage<8, 72, ::ImguiProfiler::RecordGroup::Record> mClient;
            ::ll::TypedStorage<8, 72, ::ImguiProfiler::RecordGroup::Record> mServer;
#if defined(LL_PLAT_A) // @header-generator platform
            // NOLINTEND

        public:
            // prevent constructor by default
            FullStackRecord();

        public:
            // member functions
            // NOLINTBEGIN
            MCNAPI FullStackRecord(::ImguiProfiler::RecordGroup::FullStackRecord const&);

            MCNAPI ~FullStackRecord();
            // NOLINTEND

        public:
            // constructor thunks
            // NOLINTBEGIN
            MCNAPI void* $ctor(::ImguiProfiler::RecordGroup::FullStackRecord const&);
            // NOLINTEND

        public:
            // destructor thunk
            // NOLINTBEGIN
            MCNAPI void $dtor();
#else // @header-generator platform
#endif // @header-generator platform
            // NOLINTEND
        };

    public:
        // member variables
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::TypedStorage<8, 24, std::vector<ImguiProfiler::RecordGroup::FullStackRecord>> mRecords;
        ::ll::TypedStorage<4, 4, ::ImguiProfiler::RecordGroup::SortType>                    mSortType;
#else // @header-generator platform
        ::ll::TypedStorage<8, 24, ::std::vector<::ImguiProfiler::RecordGroup::FullStackRecord>> mRecords;
        ::ll::TypedStorage<4, 4, ::ImguiProfiler::RecordGroup::SortType>                        mSortType;
#endif // @header-generator platform
        // NOLINTEND

    public:
        // member functions
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        MCNAPI ::ImguiProfiler::RecordGroup::FullStackRecord& operator[](std::string const&);
        // NOLINTEND
    };

    struct Record {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, char const*>                                                 mGroup;
        ::ll::TypedStorage<8, 8, char const*>                                                 mName;
        ::ll::TypedStorage<1, 1, bool>                                                        mIsClient;
        ::ll::TypedStorage<8, 8, std::chrono::duration<long long, std::ratio<1, 1000000000>>> mElapsed;
#else // @header-generator platform
        MCAPI ::ImguiProfiler::RecordGroup::FullStackRecord& operator[](::std::string const& name);
#endif // @header-generator platform
        // NOLINTEND
    };

    class Timer {
    public:
        // Timer inner types declare
        // clang-format off
        struct Signature;
        // clang-format on

        // Timer inner types define
        struct Signature {
        public:
            // member variables
            // NOLINTBEGIN
            ::ll::TypedStorage<8, 8, char const*> mGroup;
            ::ll::TypedStorage<8, 8, char const*> mName;
            // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

        public:
            // prevent constructor by default
            Signature();
#else // @header-generator platform
#endif // @header-generator platform
        };

    public:
        // member variables
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        // clang-format off
        ::ll::TypedStorage<8, 8, char const*> mGroup;
        ::ll::TypedStorage<8, 8, char const*> mName;
        ::ll::TypedStorage<1, 1, bool> mIsClient;
        ::ll::TypedStorage<8, 8, std::chrono::time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>>> mStart;
        // clang-format on
#else // @header-generator platform
        ::ll::TypedStorage<8, 8, char const*>                             mGroup;
        ::ll::TypedStorage<8, 8, char const*>                             mName;
        ::ll::TypedStorage<1, 1, bool>                                    mIsClient;
        ::ll::TypedStorage<8, 8, ::std::chrono::steady_clock::time_point> mStart;
#endif // @header-generator platform
        // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

    public:
        // prevent constructor by default
        Timer();
#else // @header-generator platform
#endif // @header-generator platform

    public:
        // virtual functions
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        virtual ~Timer();
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

    class ScopedTimer : public ::ImguiProfiler::Timer {
    public:
        // prevent constructor by default
        ScopedTimer();

    public:
        // virtual functions
        // NOLINTBEGIN
        virtual ~ScopedTimer();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
#else // @header-generator platform
        virtual ~Timer() = default;
#endif // @header-generator platform
        // NOLINTEND

    public:
        // vftables
        // NOLINTBEGIN
        MCNAPI static void** $vftable();
        // NOLINTEND
    };

    class ManualTimer : public ::ImguiProfiler::Timer {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<1, 1, bool> mHasAddedRecord;
        // NOLINTEND

    public:
#if defined(LL_PLAT_A) // @header-generator platform
        // prevent constructor by default
        ManualTimer();
#else // @header-generator platform
        // vftables
        // NOLINTBEGIN
        MCNAPI static void** $vftable();
        // NOLINTEND
    };
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    class ScopedTimer : public ::ImguiProfiler::Timer {
#endif // @header-generator platform
    public:
        // virtual functions
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        virtual ~ManualTimer();
        // NOLINTEND

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ManualTimer(char const*, char const*, bool);

        MCNAPI void mark();
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCNAPI void* $ctor(char const*, char const*, bool);
#else // @header-generator platform
        virtual ~ScopedTimer() /*override*/;
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

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::map<std::string, ImguiProfiler::RecordGroup>> mRecordGroups;
    ::ll::TypedStorage<4, 40, std::mutex>                                        mRecordGroupMutex;
#else // @header-generator platform
    ::ll::TypedStorage<8, 16, ::std::map<::std::string, ::ImguiProfiler::RecordGroup>> mRecordGroups;
    ::ll::TypedStorage<8, 80, ::Bedrock::Threading::Mutex>                             mRecordGroupMutex;
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~ImguiProfiler();
#else // @header-generator platform
    virtual ~ImguiProfiler() /*override*/ = default;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ImguiProfiler();
#else // @header-generator platform
    MCAPI ImguiProfiler();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::TimeAccumulator getTimeAccumulator(std::string const&, std::string const&, bool);
#else // @header-generator platform
    MCAPI ::TimeAccumulator
    getTimeAccumulator(::std::string const& group, ::std::string const& name, bool isClientSide);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void reset();

    MCNAPI void update();
#else // @header-generator platform
    MCAPI void update();
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void addRecord(::ImguiProfiler::Record&&);
#else // @header-generator platform
    MCAPI static void addRecord(::ImguiProfiler::Record&& record);
#endif // @header-generator platform
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::vector<ImguiProfiler::Record>& sPendingRecords();
#else // @header-generator platform
    MCAPI static ::std::vector<::ImguiProfiler::Record>& sPendingRecords();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static int& sProduceRecords();
#else // @header-generator platform
    MCAPI static int& sProduceRecords();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::mutex& sRecordMutex();
#else // @header-generator platform
    MCAPI static ::Bedrock::Threading::Mutex& sRecordMutex();
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI void* $ctor();
#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
