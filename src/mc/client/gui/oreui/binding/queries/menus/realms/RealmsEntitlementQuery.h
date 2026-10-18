#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/oreui/binding/QueryBase.h"
#include "mc/client/gui/oreui/binding/properties/Property.h"
#include "mc/deps/core/threading/TaskGroup.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
namespace OreUI { class GameDependencies; }
namespace Realms { class IRealmsEntitlements; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
namespace OreUI {

#if defined(LL_PLAT_C) // @header-generator platform
class RealmsEntitlementQuery : public ::OreUI::QueryBase<::OreUI::RealmsEntitlementQuery> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 200, ::OreUI::Property<::std::string>>                            mExpirationDate;
    ::ll::TypedStorage<8, 200, ::OreUI::Property<::std::string>>                            mFriendlyId;
    ::ll::TypedStorage<8, 176, ::OreUI::Property<int64>>                                    mRealmId;
    ::ll::TypedStorage<8, 176, ::OreUI::Property<bool>>                                     mIsActive;
    ::ll::TypedStorage<8, 176, ::OreUI::Property<bool>>                                     mIsValid;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::Realms::IRealmsEntitlements>> mRealmsEntitlements;
    ::ll::TypedStorage<8, 336, ::TaskGroup>                                                 mTaskGroup;
    // NOLINTEND

public:
    // prevent constructor by default
    RealmsEntitlementQuery();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI RealmsEntitlementQuery(::OreUI::GameDependencies const& game, int64 realmId);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::OreUI::GameDependencies const& game, int64 realmId);
    // NOLINTEND
};
#else // @header-generator platform
class RealmsEntitlementQuery {};
#endif // @header-generator platform

} // namespace OreUI
#endif // @header-generator platform
