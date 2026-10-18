#if defined(LL_PLAT_C) || defined(LL_PLAT_A) // @header-generator platform
#if defined(LL_PLAT_A) // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/QueryBase.h"
#include "mc/client/gui/oreui/binding/properties/Property.h"
#include "mc/deps/core/threading/TaskGroup.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
namespace Realms { class IRealmsEntitlements; }
// clang-format on

namespace OreUI {

class RealmsEntitlementQuery : public ::OreUI::QueryBase<OreUI::RealmsEntitlementQuery> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 168>            mExpirationDate;
    ::ll::UntypedStorage<8, 168>            mFriendlyId;
    ::ll::UntypedStorage<8, 152>            mRealmId;
    ::ll::UntypedStorage<8, 152>            mIsActive;
    ::ll::UntypedStorage<8, 152>            mIsValid;
    ::ll::UntypedStorage<8, 24>             mRealmsEntitlements;
    ::ll::TypedStorage<8, 240, ::TaskGroup> mTaskGroup;
    // NOLINTEND
};

} // namespace OreUI
#else // @header-generator platform
#endif // @header-generator platform
#else // @header-generator platform
#endif // @header-generator platform
