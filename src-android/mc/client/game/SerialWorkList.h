#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/game/SerialWorkListLogEntry.h"
#include "mc/deps/core/utility/CrashDumpLogStringID.h"
#include "mc/platform/brstd/move_only_function.h"

// auto generated forward declare list
// clang-format off
class IMinecraftEventing;
namespace Bedrock { class StaticOptimizedString; }
namespace Social::Events { class Event; }
// clang-format on

class SerialWorkList {
public:
    // SerialWorkList inner types declare
    // clang-format off
    struct WorkItem;
    // clang-format on

    // SerialWorkList inner types define
    enum class WorkResult : int {
        Repeat   = 0,
        Complete = 1,
    };

    struct WorkItem {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 16>     name;
        ::ll::UntypedStorage<8, 48>     func;
        ::ll::TypedStorage<8, 8, ulong> callCount;
        ::ll::TypedStorage<4, 4, float> maxSessionTime;
        ::ll::TypedStorage<4, 4, float> totalExclusiveTime;
        ::ll::UntypedStorage<4, 16>     totalInclusiveTime;
        // NOLINTEND

    public:
        // prevent constructor by default
        WorkItem& operator=(WorkItem const&);
        WorkItem();
    };

    using WorkFunction = std::function<SerialWorkList::WorkResult()>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string>                           mSeriesTitle;
    ::ll::TypedStorage<2, 2, ::CrashDumpLogStringID>                 mCDStringID;
    ::ll::TypedStorage<8, 48, std::deque<SerialWorkList::WorkItem>>  mModalWorkList;
    ::ll::TypedStorage<8, 24, std::vector<SerialWorkList::WorkItem>> mModalWorkLog;
    ::ll::TypedStorage<8, 24, std::vector<SerialWorkListLogEntry>>   mMinecraftEventingLog;
    ::ll::TypedStorage<8, 8, double>                                 mModalWorkItemStartTime;
    ::ll::TypedStorage<8, 8, double>                                 mSeriesStartTime;
    ::ll::TypedStorage<4, 4, uint>                                   mAbortGeneration;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void _handleEndOfSeries(::IMinecraftEventing&);

    MCNAPI void abortAll();

    MCNAPI std::vector<SerialWorkListLogEntry> const& getEventingLog() const;

    MCNAPI bool hasWorkPending() const;

    MCNAPI bool processNextWorkItem(::IMinecraftEventing&);

    MCNAPI void queueWorkItem(char const*, std::function<SerialWorkList::WorkResult()>);

    MCNAPI void setCrashDumpLogID(::CrashDumpLogStringID);

    MCNAPI void setTitle(std::string const&);

    MCNAPI double totalElapsedSeconds() const;

    MCNAPI ulong totalWorkItemsPending() const;

    MCNAPI ulong totalWorldItemsComplete() const;

    MCNAPI ~SerialWorkList();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::brstd::move_only_function<void(Social::Events::Event&) const>
    createEventWriter(::Bedrock::StaticOptimizedString, std::vector<SerialWorkListLogEntry> const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
