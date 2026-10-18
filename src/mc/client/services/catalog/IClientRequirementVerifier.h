#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/services/catalog/RequirementCategory.h"

class IClientRequirementVerifier {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IClientRequirementVerifier() = default;

    virtual bool doesMeetRequirements(::RequirementCategory, std::string const&) const = 0;
    // NOLINTEND
};
#else // @header-generator platform
class IClientRequirementVerifier {};
#endif // @header-generator platform
