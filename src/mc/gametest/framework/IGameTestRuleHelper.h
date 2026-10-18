#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace gametest {

class IGameTestRuleHelper {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IGameTestRuleHelper() = default;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void addRuleToClear(int) = 0;
#else // @header-generator platform
    virtual void addRuleToClear(int ruleID) = 0;
#endif // @header-generator platform

    virtual void clearRules() = 0;

    virtual void restoreRules() = 0;
    // NOLINTEND
};

} // namespace gametest
