#pragma once

#include "mc/_HeaderOutputPredefine.h"

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
