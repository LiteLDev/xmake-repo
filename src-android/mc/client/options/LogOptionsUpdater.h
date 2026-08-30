#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/debug/LogSettingsUpdater.h"

// auto generated forward declare list
// clang-format off
class OptionRegistry;
namespace Bedrock::PubSub { class Subscription; }
// clang-format on

class LogOptionsUpdater : public ::LogSettingsUpdater {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, std::shared_ptr<OptionRegistry>> mOptions;
    // NOLINTEND

public:
    // prevent constructor by default
    LogOptionsUpdater();

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~LogOptionsUpdater();

    virtual void save();

    virtual bool getDevLogAppend() const;

    virtual void setDevLogAppend(bool);

    virtual bool getDevLogFlushImmediate() const;

    virtual void setDevLogFlushImmediate(bool);

    virtual int getDevLogFlushDelay() const;

    virtual void setDevLogFlushDelay(int);

    virtual bool getDevLogTimestamp() const;

    virtual void setDevLogTimestamp(bool);

    virtual bool getDevLogTrace() const;

    virtual void setDevLogTrace(bool);

    virtual bool getDevLogArea() const;

    virtual void setDevLogArea(bool);

    virtual bool getDevLogPriority() const;

    virtual void setDevLogPriority(bool);

    virtual bool getDevLogProcessId() const;

    virtual void setDevLogProcessId(bool);

    virtual bool getDevLogThreadId() const;

    virtual void setDevLogThreadId(bool);

    virtual bool getDevLogMessageId() const;

    virtual void setDevLogMessageId(bool);

    virtual bool getDevLogSilentLogging() const;

    virtual void setDevLogSilentLogging(bool);

    virtual std::string const& getDevLogAreaFilter() const;

    virtual void setDevLogAreaFilter(std::string const&);

    virtual ::Bedrock::PubSub::Subscription registerDevLogAreaObserver(std::function<void (const std::string&)>);

    virtual std::string const& getDevLogPriorityFilter() const;

    virtual void setDevLogPriorityFilter(std::string const&);

    virtual ::Bedrock::PubSub::Subscription registerDevLogPriorityObserver(std::function<void (const std::string&)>);
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit LogOptionsUpdater(std::shared_ptr<OptionRegistry>);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::shared_ptr<OptionRegistry>);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $save();

    MCNAPI bool $getDevLogAppend() const;

    MCNAPI void $setDevLogAppend(bool);

    MCNAPI bool $getDevLogFlushImmediate() const;

    MCNAPI void $setDevLogFlushImmediate(bool);

    MCNAPI int $getDevLogFlushDelay() const;

    MCNAPI void $setDevLogFlushDelay(int);

    MCNAPI bool $getDevLogTimestamp() const;

    MCNAPI void $setDevLogTimestamp(bool);

    MCNAPI bool $getDevLogTrace() const;

    MCNAPI void $setDevLogTrace(bool);

    MCNAPI bool $getDevLogArea() const;

    MCNAPI void $setDevLogArea(bool);

    MCNAPI bool $getDevLogPriority() const;

    MCNAPI void $setDevLogPriority(bool);

    MCNAPI bool $getDevLogProcessId() const;

    MCNAPI void $setDevLogProcessId(bool);

    MCNAPI bool $getDevLogThreadId() const;

    MCNAPI void $setDevLogThreadId(bool);

    MCNAPI bool $getDevLogMessageId() const;

    MCNAPI void $setDevLogMessageId(bool);

    MCNAPI bool $getDevLogSilentLogging() const;

    MCNAPI void $setDevLogSilentLogging(bool);

    MCNAPI std::string const& $getDevLogAreaFilter() const;

    MCNAPI void $setDevLogAreaFilter(std::string const&);

    MCNAPI ::Bedrock::PubSub::Subscription $registerDevLogAreaObserver(std::function<void(const std::string&)>);

    MCNAPI std::string const& $getDevLogPriorityFilter() const;

    MCNAPI void $setDevLogPriorityFilter(std::string const&);

    MCNAPI ::Bedrock::PubSub::Subscription $registerDevLogPriorityObserver(std::function<void(const std::string&)>);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
