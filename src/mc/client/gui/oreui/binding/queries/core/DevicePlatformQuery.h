#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/oreui/binding/QueryBase.h"
#include "mc/client/gui/oreui/binding/properties/ObservableValue.h"
#include "mc/client/gui/oreui/binding/properties/Property.h"
#include "mc/client/gui/oreui/binding/properties/PropertyVector.h"
#include "mc/client/gui/oreui/input/InputMethod.h"
#include "mc/deps/application/AppPlatformListener.h"
#include "mc/deps/core/platform/OperationMode.h"

// auto generated forward declare list
// clang-format off
class AppPlatform;
class IClientInstance;
namespace OreUI { class ClientDependencies; }
namespace OreUI { class GameDependencies; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
namespace OreUI {

#if defined(LL_PLAT_C) // @header-generator platform
class DevicePlatformQuery : public ::OreUI::QueryBase<::OreUI::DevicePlatformQuery>, public ::AppPlatformListener {
#else // @header-generator platform
class DevicePlatformQuery {
#endif // @header-generator platform
public:
    // DevicePlatformQuery inner types define
#if defined(LL_PLAT_C) // @header-generator platform
    enum class PlatformType : uchar {
        IOS             = 0,
        Google          = 1,
        AmazonHandheld  = 2,
        UwpGdkPc        = 3,
        Xbox            = 4,
        NxHandheld      = 5,
        Ps4             = 6,
        Win32           = 7,
        MacOS           = 8,
        NxConsole       = 9,
        Ps5             = 10,
        Switch2Handheld = 11,
        Switch2Console  = 12,
        Unknown         = 13,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::std::reference_wrapper<::IClientInstance>>                     mClient;
    ::ll::TypedStorage<8, 8, ::std::reference_wrapper<::AppPlatform>>                         mAppPlatform;
    ::ll::TypedStorage<8, 176, ::OreUI::Property<::OreUI::DevicePlatformQuery::PlatformType>> mPlatformType;
    ::ll::TypedStorage<
        8,
        120,
        ::OreUI::PropertyVector<
            ::OreUI::InputMethod,
            ::std::allocator<::OreUI::Detail::ObservableValue<::OreUI::InputMethod>>>>
        mInputMethods;
    // NOLINTEND

public:
    // prevent constructor by default
    DevicePlatformQuery();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~DevicePlatformQuery() /*override*/ = default;

    virtual void onOperationModeChanged(::OperationMode operationMode) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI DevicePlatformQuery(::OreUI::ClientDependencies const& client, ::OreUI::GameDependencies const& game);

    MCAPI void _updateInputMethods();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::OreUI::ClientDependencies const& client, ::OreUI::GameDependencies const& game);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD void $onOperationModeChanged(::OperationMode operationMode);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForPropertyObject();

    MCNAPI static void** $vftable();

    MCNAPI static void** $vftableForIQuery();
    // NOLINTEND
#else // @header-generator platform
    enum class PlatformType : uchar {};
#endif // @header-generator platform
};

} // namespace OreUI
#endif // @header-generator platform
