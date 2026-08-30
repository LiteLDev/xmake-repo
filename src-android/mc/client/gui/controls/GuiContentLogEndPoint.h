#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/debug/log/ContentLogEndPoint.h"
#include "mc/deps/core/debug/log/LogArea.h"
#include "mc/deps/core/debug/log/LogLevel.h"
#include "mc/deps/core/memory/MoodyCamelBedrockMemoryTraits.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class GuiData;
// clang-format on

class GuiContentLogEndPoint : public ::ContentLogEndPoint {
public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<1, 1, bool> mEnabled;
    ::ll::TypedStorage<4, 8, std::optional<LogLevel>> mLogLevel;
    ::ll::TypedStorage<8, 616, ::moodycamel::ConcurrentQueue<std::pair<std::string, LogLevel>, Bedrock::Memory::MoodyCamelBedrockMemoryTraits>> mMessages;
    // clang-format on
    // NOLINTEND

public:
    // prevent constructor by default
    GuiContentLogEndPoint();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~GuiContentLogEndPoint();

    virtual void log(::LogArea const, ::LogLevel const, char const*);

    virtual bool logOnlyOnce() const;

    virtual void setEnabled(bool);

    virtual bool isEnabled() const;

    virtual void flush();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit GuiContentLogEndPoint(std::optional<LogLevel>);

    MCNAPI bool pushMessagesToUI(::gsl::not_null<Bedrock::NonOwnerPointer<GuiData>> const&);

    MCNAPI void setLogLevel(::LogLevel const);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::optional<LogLevel>);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $log(::LogArea const, ::LogLevel const, char const*);

    MCNAPI bool $logOnlyOnce() const;

    MCNAPI void $setEnabled(bool);

    MCNAPI bool $isEnabled() const;

    MCNAPI void $flush();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
