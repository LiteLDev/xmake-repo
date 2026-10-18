#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/oreui/routing/IEntryPoint.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class ISceneStack;
class SceneFactory;
namespace OreUI { class RouteMatcher; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
namespace OreUI::EntryPoints {

#if defined(LL_PLAT_C) // @header-generator platform
class RedeemSwitch2Beta : public ::OreUI::IEntryPoint {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool shouldAddToConfiguration() const /*override*/;

    virtual void addToMatcher(
        ::OreUI::RouteMatcher& routeMatcher,
        ::SceneFactory&,
        ::Bedrock::NotNullNonOwnerPtr<::ISceneStack> const&
    ) const /*override*/;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::add_lvalue_reference_t<char const[]> ROUTE();

    MCAPI static ::std::add_lvalue_reference_t<char const[20]> SCREEN_NAME();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD bool $shouldAddToConfiguration() const;

    MCAPI void $addToMatcher(
        ::OreUI::RouteMatcher& routeMatcher,
        ::SceneFactory&,
        ::Bedrock::NotNullNonOwnerPtr<::ISceneStack> const&
    ) const;
    // NOLINTEND
};
#else // @header-generator platform
class RedeemSwitch2Beta {};
#endif // @header-generator platform

} // namespace OreUI::EntryPoints
#endif // @header-generator platform
