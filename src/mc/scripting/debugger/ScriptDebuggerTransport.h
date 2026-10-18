#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/raknet/SystemAddress.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/deps/script_core/runtime/scripting/IDebuggerTransport.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated forward declare list
// clang-format off
class IScriptDebuggerWatchdog;
namespace RakNet { class TCPInterface; }
namespace RakNet { struct Packet; }
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform

class ScriptDebuggerTransport : public ::Scripting::IDebuggerTransport {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, ::IScriptDebuggerWatchdog&>            mDebuggerWatchdog;
    ::ll::TypedStorage<8, 8, std::unique_ptr<RakNet::TCPInterface>> mTcp;
    ::ll::TypedStorage<8, 136, ::RakNet::SystemAddress>             mClient;
    ::ll::TypedStorage<8, 8, ::RakNet::Packet*>                     mCurrentPacket;
    ::ll::TypedStorage<8, 8, ulong>                                 mBytesReadFromCurrentPacket;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 8>   mUnkeffb26;
    ::ll::UntypedStorage<8, 8>   mUnk264430;
    ::ll::UntypedStorage<8, 136> mUnkf9bbd8;
    ::ll::UntypedStorage<8, 8>   mUnk34b362;
    ::ll::UntypedStorage<8, 8>   mUnk23a39e;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptDebuggerTransport& operator=(ScriptDebuggerTransport const&);
    ScriptDebuggerTransport(ScriptDebuggerTransport const&);
    ScriptDebuggerTransport();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~ScriptDebuggerTransport();
#else // @header-generator platform
    virtual ~ScriptDebuggerTransport() /*override*/ = default;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool listen(ushort);
#else // @header-generator platform
    virtual bool listen(ushort port) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool connect(std::string const&, ushort);
#else // @header-generator platform
    virtual bool connect(::std::string const& host, ushort port) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool selectClient(std::string&);
#else // @header-generator platform
    virtual bool selectClient(::std::string& outClient) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool started() const;
#else // @header-generator platform
    virtual bool started() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool connected() const;
#else // @header-generator platform
    virtual bool connected() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool lostConnection() const;
#else // @header-generator platform
    virtual bool lostConnection() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool readyClose() const;
#else // @header-generator platform
    virtual bool readyClose() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void close();
#else // @header-generator platform
    virtual void close() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool peek() const;
#else // @header-generator platform
    virtual bool peek() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool receive(char*, ulong);
#else // @header-generator platform
    virtual bool receive(char* buffer, uint64 length) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    virtual void send(char const* buffer, uint64 length) /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $listen(ushort);
#else // @header-generator platform
    MCNAPI bool $listen(ushort port);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $connect(std::string const&, ushort);
#else // @header-generator platform
    MCNAPI bool $connect(::std::string const& host, ushort port);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $selectClient(std::string&);
#else // @header-generator platform
    MCNAPI bool $selectClient(::std::string& outClient);
#endif // @header-generator platform

    MCNAPI bool $started() const;

    MCNAPI bool $connected() const;

    MCNAPI bool $lostConnection() const;

    MCNAPI bool $readyClose() const;

    MCNAPI void $close();

    MCNAPI bool $peek() const;

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $receive(char*, ulong);
#else // @header-generator platform
    MCNAPI bool $receive(char* buffer, uint64 length);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $send(char const*, ulong);
#else // @header-generator platform
    MCNAPI void $send(char const* buffer, uint64 length);


#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
