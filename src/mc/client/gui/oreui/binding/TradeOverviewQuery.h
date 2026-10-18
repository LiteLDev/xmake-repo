#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/oreui/binding/QueryBase.h"
#include "mc/client/gui/oreui/binding/properties/Property.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
namespace GameplayUI { struct GameplayUIContext; }
namespace OreUI { class ClientDependencies; }
namespace OreUI { class GameDependencies; }
// clang-format on

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/oreui/binding/QueryBase.h"
#include "mc/client/gui/oreui/binding/properties/Property.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
namespace GameplayUI { struct GameplayUIContext; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace OreUI {

#if defined(LL_PLAT_A) // @header-generator platform
class TradeOverviewQuery : public ::OreUI::QueryBase<OreUI::TradeOverviewQuery> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 152> mIsExperienceBarVisible;
    ::ll::UntypedStorage<8, 152> mExperienceProgress;
    ::ll::UntypedStorage<8, 152> mExperiencePossibleProgress;
    ::ll::UntypedStorage<8, 168> mTraderName;
    ::ll::UntypedStorage<8, 152> mTradeTiers;
    ::ll::UntypedStorage<8, 24>  mContext;
    // NOLINTEND

public:
    // prevent constructor by default
    TradeOverviewQuery();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~TradeOverviewQuery();

    virtual void update(double);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::std::add_lvalue_reference_t<char const[34]> NAME();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $update(double);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
class TradeOverviewQuery : public ::OreUI::QueryBase<::OreUI::TradeOverviewQuery> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 176, ::OreUI::Property<bool>>          mIsExperienceBarVisible;
    ::ll::TypedStorage<8, 176, ::OreUI::Property<float>>         mExperienceProgress;
    ::ll::TypedStorage<8, 176, ::OreUI::Property<float>>         mExperiencePossibleProgress;
    ::ll::TypedStorage<8, 200, ::OreUI::Property<::std::string>> mTraderName;
    ::ll::TypedStorage<8, 176, ::OreUI::Property<int>>           mTradeTiers;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::GameplayUI::GameplayUIContext>> mContext;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void update(double) /*override*/;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::add_lvalue_reference_t<char const[34]> NAME();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $update(double);
    // NOLINTEND
};
#else // @header-generator platform
class TradeOverviewQuery {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace OreUI
