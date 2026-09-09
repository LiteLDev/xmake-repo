#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/world/level/chunk/AverageTracker.h"
#include "mc/world/level/chunk/TimeAccumulator.h"

struct ImguiProfiler : public ::Bedrock::EnableNonOwnerReferences {
public:
    // ImguiProfiler inner types declare
    // clang-format off
    struct RecordGroup;
    struct Record;
    class Timer;
    class ScopedTimer;
    class ManualTimer;
    // clang-format on

    // ImguiProfiler inner types define
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

        public:
            // prevent constructor by default
            Record();
        };

        struct FullStackRecord {
        public:
            // member variables
            // NOLINTBEGIN
            ::ll::TypedStorage<8, 24, std::string>                          mName;
            ::ll::TypedStorage<1, 1, bool>                                  bUseAverageTracker;
            ::ll::TypedStorage<8, 72, ::ImguiProfiler::RecordGroup::Record> mClient;
            ::ll::TypedStorage<8, 72, ::ImguiProfiler::RecordGroup::Record> mServer;
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
            // NOLINTEND
        };

    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 24, std::vector<ImguiProfiler::RecordGroup::FullStackRecord>> mRecords;
        ::ll::TypedStorage<4, 4, ::ImguiProfiler::RecordGroup::SortType>                    mSortType;
        // NOLINTEND

    public:
        // member functions
        // NOLINTBEGIN
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

        public:
            // prevent constructor by default
            Signature();
        };

    public:
        // member variables
        // NOLINTBEGIN
        // clang-format off
        ::ll::TypedStorage<8, 8, char const*> mGroup;
        ::ll::TypedStorage<8, 8, char const*> mName;
        ::ll::TypedStorage<1, 1, bool> mIsClient;
        ::ll::TypedStorage<8, 8, std::chrono::time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>>> mStart;
        // clang-format on
        // NOLINTEND

    public:
        // prevent constructor by default
        Timer();

    public:
        // virtual functions
        // NOLINTBEGIN
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
        // prevent constructor by default
        ManualTimer();

    public:
        // virtual functions
        // NOLINTBEGIN
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
    ::ll::TypedStorage<8, 24, std::map<std::string, ImguiProfiler::RecordGroup>> mRecordGroups;
    ::ll::TypedStorage<4, 40, std::mutex>                                        mRecordGroupMutex;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ImguiProfiler();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ImguiProfiler();

    MCNAPI ::TimeAccumulator getTimeAccumulator(std::string const&, std::string const&, bool);

    MCNAPI void reset();

    MCNAPI void update();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void addRecord(::ImguiProfiler::Record&&);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static std::vector<ImguiProfiler::Record>& sPendingRecords();

    MCNAPI static int& sProduceRecords();

    MCNAPI static std::mutex& sRecordMutex();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
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
