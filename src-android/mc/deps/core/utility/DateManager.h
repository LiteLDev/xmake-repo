#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/CompareScheduledCallback.h"
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/deps/core/utility/ScheduledCallback.h"
#include "mc/platform/Result.h"

// auto generated forward declare list
// clang-format off
struct tm;
// clang-format on

class DateManager : public ::Bedrock::EnableNonOwnerReferences {
public:
    // DateManager inner types define
    enum class TimeZoneType : int {
        UTC   = 0,
        Local = 1,
    };

public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<4, 4, uint> mTimeScale;
    ::ll::TypedStorage<8, 8, long> mRealTime;
    ::ll::TypedStorage<8, 8, long> mTime;
    ::ll::TypedStorage<4, 40, std::mutex> mScheduledCallbacksMutex;
    ::ll::TypedStorage<8, 32, std::priority_queue<ScheduledCallback, std::vector<ScheduledCallback>, CompareScheduledCallback>> mScheduledCallbacks;
    ::ll::TypedStorage<1, 1, bool> mIsTimeOverridden;
    // clang-format on
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~DateManager();

    virtual long _getUnixTime();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI DateManager();

    MCNAPI void _sendScheduledCallbacks();

    MCNAPI ::tm getDateTime(::DateManager::TimeZoneType const) const;

    MCNAPI long getTime() const;

    MCNAPI bool isBetweenDates(std::string const&, std::string const&) const;

    MCNAPI bool isInFuture(std::string const&) const;

    MCNAPI bool isInPast(std::string const&) const;

    MCNAPI void registerScheduledCallback(::ScheduledCallback) const;

    MCNAPI void setTime(long const);

    MCNAPI void tick();

    MCNAPI std::string toString(::DateManager::TimeZoneType const, std::string const&) const;

    MCNAPI std::string toString_DateTime(::DateManager::TimeZoneType const) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static int _parseTime(char const*, ulong const, uint*, uint*, uint*);

    MCNAPI static int _parseTimeZone(char const*, ulong const, ::DateManager::TimeZoneType*, int*, int*);

    MCNAPI static double daysUntilDate(long const, long const);

    MCNAPI static std::string getCurrentTimestampFileName();

    MCNAPI static ::tm getRealDateTime(::DateManager::TimeZoneType const);

    MCNAPI static long getRealTime();

    MCNAPI static ::Bedrock::Result<long, std::error_code> parseImfFixdate(std::string const&);

    MCNAPI static ::Bedrock::Result<std::chrono::duration<long long, std::ratio<1, 1>>, std::error_code>
        parseNetTimeSpan(std::string_view);

    MCNAPI static bool toDateTime(std::string const&, ::tm*, ::DateManager::TimeZoneType*, int*);

    MCNAPI static ::tm toDateTime(std::string const&);

    MCNAPI static ::tm toDateTime(long const, ::DateManager::TimeZoneType const);

    MCNAPI static bool toEpochTime(std::string const&, long*, ::DateManager::TimeZoneType*, int*);

    MCNAPI static long toEpochTime(std::string const&);

    MCNAPI static long toEpochTime(::tm const*, ::DateManager::TimeZoneType const);

    MCNAPI static std::string toString(::tm const&, std::string const&, std::optional<std::locale> const&);

    MCNAPI static std::string
    toString(long const&, ::DateManager::TimeZoneType const, std::string const&, std::optional<std::locale> const&);

    MCNAPI static std::string toString_Date(::tm const&);

    MCNAPI static std::string toString_DateTime(::tm const&, ::DateManager::TimeZoneType const);

    MCNAPI static std::string toString_DateTime(long const&, ::DateManager::TimeZoneType const);

    MCNAPI static std::string toString_NetTimeSpan(std::chrono::duration<long long, std::ratio<1, 1>>);
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
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI long $_getUnixTime();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
