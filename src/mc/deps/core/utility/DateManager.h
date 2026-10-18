#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/core/utility/CompareScheduledCallback.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/core/utility/ScheduledCallback.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/platform/Result.h"

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
struct tm;
#else // @header-generator platform
struct ScheduledCallback;
#endif // @header-generator platform
// clang-format on

class DateManager : public ::Bedrock::EnableNonOwnerReferences {
public:
    // DateManager inner types define
    enum class TimeZoneType : int {
#if defined(LL_PLAT_A) // @header-generator platform
        UTC   = 0,
#else // @header-generator platform
        Utc   = 0,
#endif // @header-generator platform
        Local = 1,
    };

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    ::ll::TypedStorage<4, 4, uint> mTimeScale;
    ::ll::TypedStorage<8, 8, long> mRealTime;
    ::ll::TypedStorage<8, 8, long> mTime;
    ::ll::TypedStorage<4, 40, std::mutex> mScheduledCallbacksMutex;
    ::ll::TypedStorage<8, 32, std::priority_queue<ScheduledCallback, std::vector<ScheduledCallback>, CompareScheduledCallback>> mScheduledCallbacks;
    ::ll::TypedStorage<1, 1, bool> mIsTimeOverridden;
    // clang-format on
#else // @header-generator platform
    ::ll::UntypedStorage<4, 4>  mUnk38358c;
    ::ll::UntypedStorage<8, 8>  mUnka25ee2;
    ::ll::UntypedStorage<8, 8>  mUnk6da9eb;
    ::ll::UntypedStorage<8, 80> mUnkb81dc2;
    ::ll::UntypedStorage<8, 32> mUnk8d6b0a;
    ::ll::UntypedStorage<1, 1>  mUnk79feed;
#endif // @header-generator platform
    // NOLINTEND

#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#ifdef LL_PLAT_S
public:
    // prevent constructor by default
    DateManager& operator=(DateManager const&);
    DateManager(DateManager const&);
    DateManager();

#else // LL_PLAT_C
public:
    // prevent constructor by default
    DateManager& operator=(DateManager const&);
    DateManager(DateManager const&);

#endif
#endif // @header-generator platform
public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~DateManager();
#else // @header-generator platform
    virtual ~DateManager() /*override*/ = default;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual long _getUnixTime();
#else // @header-generator platform
    virtual int64 _getUnixTime();
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCNAPI DateManager();

    MCNAPI void _sendScheduledCallbacks();

    MCNAPI void registerScheduledCallback(::ScheduledCallback callback) const;

    MCNAPI ::std::string toString(::DateManager::TimeZoneType outputType, ::std::string const& format) const;
#endif
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static int _parseTime(char const*, ulong const, uint*, uint*, uint*);
#else // @header-generator platform
    MCNAPI static int _parseTime(char const* str, uint64 const len, uint* hours, uint* minutes, uint* seconds);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static int _parseTimeZone(char const*, ulong const, ::DateManager::TimeZoneType*, int*, int*);
#else // @header-generator platform
    MCNAPI static int
    _parseTimeZone(char const* str, uint64 const len, ::DateManager::TimeZoneType* type, int* hours, int* minutes);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static double daysUntilDate(long const, long const);
#else // @header-generator platform
    MCNAPI static ::std::string getCurrentTimestampFileName();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::string getCurrentTimestampFileName();
#else // @header-generator platform
    MCNAPI static int64 getRealTime();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::tm getRealDateTime(::DateManager::TimeZoneType const);
#else // @header-generator platform
    MCNAPI static ::Bedrock::Result<int64> parseImfFixdate(::std::string const& dateHeader);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static long getRealTime();
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCNAPI static ::Bedrock::Result<::std::chrono::seconds> parseNetTimeSpan(::std::string_view str);

    MCNAPI static bool toDateTime(
        ::std::string const&         strTime,
        ::tm*                        result,
        ::DateManager::TimeZoneType* resultType,
        int*                         resultTimeZoneMinutes
    );
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::Bedrock::Result<long, std::error_code> parseImfFixdate(std::string const&);
#else // @header-generator platform
    MCNAPI static bool toEpochTime(
        ::std::string const&         strTime,
        int64*                       result,
        ::DateManager::TimeZoneType* resultType,
        int*                         resultTimeZoneMinutes
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::Bedrock::Result<std::chrono::duration<long long, std::ratio<1, 1>>, std::error_code>
        parseNetTimeSpan(std::string_view);
#else // @header-generator platform
    MCNAPI static int64 toEpochTime(::tm const* dateTime, ::DateManager::TimeZoneType inputType);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static bool toDateTime(std::string const&, ::tm*, ::DateManager::TimeZoneType*, int*);
#else // @header-generator platform
    MCNAPI static ::std::string
    toString(::tm const& time, ::std::string const& format, ::std::optional<::std::locale> const& locale);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::tm toDateTime(std::string const&);
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCNAPI static ::std::string toString_Date(::tm const& time);
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::tm toDateTime(long const, ::DateManager::TimeZoneType const);
#else // @header-generator platform
    MCNAPI static ::std::string toString_DateTime(::tm const& time, ::DateManager::TimeZoneType outputType);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCNAPI static ::std::string toString_NetTimeSpan(::std::chrono::seconds value);
#endif
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
#ifdef LL_PLAT_C
    MCNAPI void* $ctor();
#endif
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI long $_getUnixTime();
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCNAPI int64 $_getUnixTime();
#endif


#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
