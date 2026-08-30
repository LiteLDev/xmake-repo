#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/Subject.h"
#include "mc/server/commands/CommandPermissionLevel.h"

// auto generated forward declare list
// clang-format off
class AutomationCmdOutput;
class CommandOrigin;
class CommandOutput;
namespace CodeBuilder { class CommandOutputObserver; }
namespace Core { class SingleThreadedLock; }
namespace Json { class Value; }
// clang-format on

class CommandOutputSender {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 48> mEmplaceTestCommandOutputCallback;
    ::ll::UntypedStorage<8, 16> mCodeBuilderSubject;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~CommandOutputSender();

    virtual void send(::CommandOrigin const&, ::CommandOutput const&);

    virtual void registerOutputCallback(std::function<void(AutomationCmdOutput&)> const&);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI CommandOutputSender();

    MCNAPI void _sendToCodeBuilder(::CommandOrigin const&, ::CommandOutput const&);

    MCNAPI ::Json::Value _toJson(::CommandOutput const&) const;

    MCNAPI void addObserver(::CodeBuilder::CommandOutputObserver&);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static std::vector<std::string> translate(std::vector<std::string> const&);
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
    MCNAPI void $send(::CommandOrigin const&, ::CommandOutput const&);

    MCNAPI void $registerOutputCallback(std::function<void(AutomationCmdOutput&)> const&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
