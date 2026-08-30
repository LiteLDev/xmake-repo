#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class CerealSchemaUpgrade;
class SemVersion;
// clang-format on

class CerealSchemaUpgradeSet {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::vector<std::shared_ptr<CerealSchemaUpgrade>>> mOrderedUpgrades;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI bool forEach(std::function<bool(std::shared_ptr<CerealSchemaUpgrade>)>);
    // NOLINTEND
};
