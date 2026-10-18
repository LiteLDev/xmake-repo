#if defined(LL_PLAT_C) || defined(LL_PLAT_A) // @header-generator platform
#if defined(LL_PLAT_A) // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/QueryBase.h"
#include "mc/client/gui/oreui/binding/properties/Property.h"

// auto generated forward declare list
// clang-format off
class IClientInstance;
// clang-format on

namespace OreUI {

class PlayerDeathInfoQuery : public ::OreUI::QueryBase<OreUI::PlayerDeathInfoQuery> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::IClientInstance const&> mClient;
    ::ll::UntypedStorage<8, 168>                       mDeathInfo;
    // NOLINTEND

public:
    // prevent constructor by default
    PlayerDeathInfoQuery& operator=(PlayerDeathInfoQuery const&);
    PlayerDeathInfoQuery(PlayerDeathInfoQuery const&);
    PlayerDeathInfoQuery();
};

} // namespace OreUI
#else // @header-generator platform
#endif // @header-generator platform
#else // @header-generator platform
#endif // @header-generator platform
