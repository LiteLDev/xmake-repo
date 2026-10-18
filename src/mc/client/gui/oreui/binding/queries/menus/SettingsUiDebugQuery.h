#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/oreui/binding/QueryBase.h"
#include "mc/client/gui/oreui/binding/properties/Property.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"

// auto generated forward declare list
// clang-format off
namespace OreUI { class ClientDependencies; }
// clang-format on

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/oreui/binding/QueryBase.h"
#include "mc/client/gui/oreui/binding/properties/Property.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"

// auto generated forward declare list
// clang-format off
namespace OreUI { class ClientDependencies; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace OreUI::Debug {

#if defined(LL_PLAT_A) // @header-generator platform
class SettingsUiDebugQuery : public ::OreUI::QueryBase<OreUI::Debug::SettingsUiDebugQuery> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 152>                               mIsUiDebugModeEnabled;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mDebugModeChangedSubscription;
    // NOLINTEND

public:
    // prevent constructor by default
    SettingsUiDebugQuery();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~SettingsUiDebugQuery();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit SettingsUiDebugQuery(::OreUI::ClientDependencies const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::OreUI::ClientDependencies const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
class SettingsUiDebugQuery : public ::OreUI::QueryBase<::OreUI::Debug::SettingsUiDebugQuery> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 176, ::OreUI::Property<bool>>        mIsUiDebugModeEnabled;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mDebugModeChangedSubscription;
    // NOLINTEND

public:
    // prevent constructor by default
    SettingsUiDebugQuery();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit SettingsUiDebugQuery(::OreUI::ClientDependencies const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::OreUI::ClientDependencies const&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForIQuery();

    MCNAPI static void** $vftableForPropertyObject();
    // NOLINTEND
};
#else // @header-generator platform
class SettingsUiDebugQuery {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace OreUI::Debug
