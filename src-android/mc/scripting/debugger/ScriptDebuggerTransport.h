#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/raknet/SystemAddress.h"
#include "mc/deps/script_core/runtime/scripting/IDebuggerTransport.h"

// auto generated forward declare list
// clang-format off
class IScriptDebuggerWatchdog;
namespace RakNet { class TCPInterface; }
namespace RakNet { struct Packet; }
// clang-format on

class ScriptDebuggerTransport : public ::Scripting::IDebuggerTransport {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::IScriptDebuggerWatchdog&>            mDebuggerWatchdog;
    ::ll::TypedStorage<8, 8, std::unique_ptr<RakNet::TCPInterface>> mTcp;
    ::ll::TypedStorage<8, 136, ::RakNet::SystemAddress>             mClient;
    ::ll::TypedStorage<8, 8, ::RakNet::Packet*>                     mCurrentPacket;
    ::ll::TypedStorage<8, 8, ulong>                                 mBytesReadFromCurrentPacket;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptDebuggerTransport& operator=(ScriptDebuggerTransport const&);
    ScriptDebuggerTransport(ScriptDebuggerTransport const&);
    ScriptDebuggerTransport();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ScriptDebuggerTransport();

    virtual bool listen(ushort);

    virtual bool connect(std::string const&, ushort);

    virtual bool selectClient(std::string&);

    virtual bool started() const;

    virtual bool connected() const;

    virtual bool lostConnection() const;

    virtual bool readyClose() const;

    virtual void close();

    virtual bool peek() const;

    virtual bool receive(char*, ulong);

    virtual void send(char const*, ulong);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit ScriptDebuggerTransport(::IScriptDebuggerWatchdog&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::IScriptDebuggerWatchdog&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $listen(ushort);

    MCNAPI bool $connect(std::string const&, ushort);

    MCNAPI bool $selectClient(std::string&);

    MCNAPI bool $started() const;

    MCNAPI bool $connected() const;

    MCNAPI bool $lostConnection() const;

    MCNAPI bool $readyClose() const;

    MCNAPI void $close();

    MCNAPI bool $peek() const;

    MCNAPI bool $receive(char*, ulong);

    MCNAPI void $send(char const*, ulong);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
