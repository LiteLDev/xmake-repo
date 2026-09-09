#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Scripting {

class IDebuggerTransport {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IDebuggerTransport() = default;

    virtual bool listen(ushort) = 0;

    virtual bool connect(std::string const&, ushort) = 0;

    virtual bool selectClient(std::string&) = 0;

    virtual bool started() const = 0;

    virtual bool connected() const = 0;

    virtual bool lostConnection() const = 0;

    virtual bool readyClose() const = 0;

    virtual void close() = 0;

    virtual bool peek() const = 0;

    virtual bool receive(char*, ulong) = 0;

    virtual void send(char const*, ulong) = 0;
    // NOLINTEND
};

} // namespace Scripting
