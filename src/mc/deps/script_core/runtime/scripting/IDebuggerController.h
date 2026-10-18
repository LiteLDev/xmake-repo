#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Scripting {

class IDebuggerController {
public:
#if defined(LL_PLAT_A) // @header-generator platform
    // IDebuggerController inner types define
    using MessageHandler = std::function<void(std::string_view)>;

public:
#else // @header-generator platform
#endif // @header-generator platform
    // virtual functions
    // NOLINTBEGIN
    virtual ~IDebuggerController() = default;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool attach(bool, std::optional<std::string>, std::function<void(std::string_view)>) = 0;
#else // @header-generator platform
    virtual bool attach(
        bool                                      performHandshake,
        ::std::optional<::std::string>            targetModuleUuid,
        ::std::function<void(::std::string_view)> handler
    ) = 0;
#endif // @header-generator platform

    virtual void detach() = 0;

    virtual bool closed() const = 0;

    virtual void pumpMessages() = 0;
    // NOLINTEND
};

} // namespace Scripting
