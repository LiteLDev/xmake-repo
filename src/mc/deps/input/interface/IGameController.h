#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/common/SubClientId.h"

// auto generated forward declare list
// clang-format off
struct GameControllerEvent;
// clang-format on

class IGameController {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IGameController() = default;

    virtual bool hasEvents(void const*) const = 0;

    virtual ::GameControllerEvent getNextEvent(void const*) = 0;

    virtual int getId() const = 0;

    virtual bool isConnected() const = 0;

    virtual bool isAdequateController() const = 0;

    virtual void pairControllerToClient(::SubClientId) = 0;

    virtual void unpairControllerFromClient() = 0;

    virtual bool isControllerPairedToClient() const = 0;

    virtual std::optional<SubClientId> getPairedClientId() const = 0;
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/common/SubClientId.h"

// auto generated forward declare list
// clang-format off
struct GameControllerEvent;
// clang-format on

class IGameController {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IGameController() = default;

    virtual bool hasEvents(void const* token) const = 0;

    virtual ::GameControllerEvent getNextEvent(void const* token) = 0;

    virtual int getId() const = 0;

    virtual bool isConnected() const = 0;

    virtual bool isAdequateController() const = 0;

    virtual void pairControllerToClient(::SubClientId clientId) = 0;

    virtual void unpairControllerFromClient() = 0;

    virtual bool isControllerPairedToClient() const = 0;

    virtual ::std::optional<::SubClientId> getPairedClientId() const = 0;
    // NOLINTEND
};
#else // @header-generator platform
class IGameController {};
#endif // @header-generator platform
#endif // @header-generator platform
