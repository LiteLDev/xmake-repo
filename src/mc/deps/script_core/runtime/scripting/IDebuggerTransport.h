#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Scripting {

class IDebuggerTransport {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IDebuggerTransport() = default;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool listen(ushort) = 0;
#else // @header-generator platform
    virtual bool listen(ushort port) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool connect(std::string const&, ushort) = 0;
#else // @header-generator platform
    virtual bool connect(::std::string const& host, ushort port) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool selectClient(std::string&) = 0;
#else // @header-generator platform
    virtual bool selectClient(::std::string& outClient) = 0;
#endif // @header-generator platform

    virtual bool started() const = 0;

    virtual bool connected() const = 0;

    virtual bool lostConnection() const = 0;

    virtual bool readyClose() const = 0;

    virtual void close() = 0;

    virtual bool peek() const = 0;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool receive(char*, ulong) = 0;
#else // @header-generator platform
    virtual bool receive(char* buffer, uint64 length) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void send(char const*, ulong) = 0;
#else // @header-generator platform
    virtual void send(char const* buffer, uint64 length) = 0;
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace Scripting
