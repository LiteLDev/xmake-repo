#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated forward declare list
// clang-format off
namespace Bedrock::PubSub { class Subscription; }
// clang-format on

class LogSettingsUpdater {
public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~LogSettingsUpdater() = default;

    virtual void save() = 0;

    virtual bool getDevLogAppend() const = 0;

    virtual void setDevLogAppend(bool) = 0;

    virtual bool getDevLogFlushImmediate() const = 0;

    virtual void setDevLogFlushImmediate(bool) = 0;

    virtual int getDevLogFlushDelay() const = 0;

    virtual void setDevLogFlushDelay(int) = 0;

    virtual bool getDevLogTimestamp() const = 0;

    virtual void setDevLogTimestamp(bool) = 0;

    virtual bool getDevLogTrace() const = 0;

    virtual void setDevLogTrace(bool) = 0;

    virtual bool getDevLogArea() const = 0;

    virtual void setDevLogArea(bool) = 0;

    virtual bool getDevLogPriority() const = 0;

    virtual void setDevLogPriority(bool) = 0;

    virtual bool getDevLogProcessId() const = 0;

    virtual void setDevLogProcessId(bool) = 0;

    virtual bool getDevLogThreadId() const = 0;

    virtual void setDevLogThreadId(bool) = 0;

    virtual bool getDevLogMessageId() const = 0;

    virtual void setDevLogMessageId(bool) = 0;

    virtual bool getDevLogSilentLogging() const = 0;

    virtual void setDevLogSilentLogging(bool) = 0;

    virtual std::string const& getDevLogAreaFilter() const = 0;

    virtual void setDevLogAreaFilter(std::string const&) = 0;

    virtual ::Bedrock::PubSub::Subscription registerDevLogAreaObserver(std::function<void (const std::string&)>) = 0;

    virtual std::string const& getDevLogPriorityFilter() const = 0;

    virtual void setDevLogPriorityFilter(std::string const&) = 0;

    virtual ::Bedrock::PubSub::Subscription registerDevLogPriorityObserver(std::function<void (const std::string&)>) = 0;
    // clang-format on
    // NOLINTEND
};
#else // @header-generator platform
class LogSettingsUpdater {};
#endif // @header-generator platform
