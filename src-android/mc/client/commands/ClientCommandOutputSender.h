#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/server/commands/CommandOutputSender.h"

// auto generated forward declare list
// clang-format off
class AutomationCmdOutput;
class CommandOrigin;
class CommandOutput;
class GuiData;
// clang-format on

class ClientCommandOutputSender : public ::CommandOutputSender {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mMachineGuiData;
    // NOLINTEND

public:
    // prevent constructor by default
    ClientCommandOutputSender();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ClientCommandOutputSender();

    virtual void send(::CommandOrigin const&, ::CommandOutput const&);

    virtual void registerOutputCallback(std::function<void(AutomationCmdOutput&)> const&);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit ClientCommandOutputSender(::gsl::not_null<Bedrock::NonOwnerPointer<GuiData>> const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::gsl::not_null<Bedrock::NonOwnerPointer<GuiData>> const&);
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
