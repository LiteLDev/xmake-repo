#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/DeserializeDataSettings.h"

// auto generated forward declare list
// clang-format off
class ActorMigratedDefinitionFactory;
// clang-format on

namespace JsonComponentGlueUtils {

struct CustomUpgradeData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 64>                                                      mDeserializeDataSettings;
    ::ll::TypedStorage<8, 8, ::gsl::not_null<const ActorMigratedDefinitionFactory*>> mFactory;
    // NOLINTEND

public:
    // prevent constructor by default
    CustomUpgradeData& operator=(CustomUpgradeData const&);
    CustomUpgradeData(CustomUpgradeData const&);
    CustomUpgradeData();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~CustomUpgradeData();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace JsonComponentGlueUtils
