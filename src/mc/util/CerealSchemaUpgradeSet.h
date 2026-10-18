#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class CerealSchemaUpgrade;
#if defined(LL_PLAT_A) // @header-generator platform
class SemVersion;
#else // @header-generator platform
#endif // @header-generator platform
// clang-format on

class CerealSchemaUpgradeSet {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::vector<std::shared_ptr<CerealSchemaUpgrade>>> mOrderedUpgrades;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 24> mUnke8490a;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    CerealSchemaUpgradeSet& operator=(CerealSchemaUpgradeSet const&);
    CerealSchemaUpgradeSet(CerealSchemaUpgradeSet const&);
    CerealSchemaUpgradeSet();
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool forEach(std::function<bool(std::shared_ptr<CerealSchemaUpgrade>)>);
#else // @header-generator platform
    MCNAPI bool forEach(::std::function<bool(::std::shared_ptr<::CerealSchemaUpgrade>)> functor);

    MCNAPI ~CerealSchemaUpgradeSet();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#endif // @header-generator platform
    // NOLINTEND
};
