#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class ScriptStat;
// clang-format on

class IScriptStatPublisher {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IScriptStatPublisher() = default;

    virtual bool isStatPublisherEnabled() const = 0;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void publishStats(ulong, std::vector<ScriptStat> const&) = 0;
#else // @header-generator platform
    virtual void publishStats(uint64 collectedTick, ::std::vector<::ScriptStat> const& stats) = 0;
#endif // @header-generator platform
    // NOLINTEND
};
