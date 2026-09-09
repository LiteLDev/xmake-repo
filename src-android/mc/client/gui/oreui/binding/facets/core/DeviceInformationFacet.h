#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/FacetBase_DEPRECATED.h"
#include "mc/client/gui/oreui/input/InputMethod.h"
#include "mc/client/gui/oreui/interface/FacetAvailability.h"
#include "mc/deps/application/AppPlatformListener.h"
#include "mc/deps/core/platform/BuildPlatform.h"
#include "mc/deps/core/platform/OperationMode.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class IAppPlatform;
class IClientInstance;
// clang-format on

namespace OreUI {

class DeviceInformationFacet : public ::OreUI::FacetBase_DEPRECATED<OreUI::DeviceInformationFacet>,
                               public ::AppPlatformListener {
public:
    // DeviceInformationFacet inner types define
    enum class Platform : uchar {
        iOS             = 0,
        Google          = 1,
        AmazonHandheld  = 2,
        UWP_GDK_PC      = 3,
        Xbox            = 4,
        NxHandheld      = 5,
        PS4             = 6,
        Win32           = 7,
        macOS           = 8,
        NxConsole       = 9,
        PS5             = 10,
        Switch2Handheld = 11,
        Switch2Console  = 12,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>                                      mIsDirty;
    ::ll::UntypedStorage<8, 48>                                         mGetClientInstance;
    ::ll::UntypedStorage<8, 24>                                         mAppPlatform;
    ::ll::TypedStorage<1, 1, ::OreUI::DeviceInformationFacet::Platform> mPlatform;
    ::ll::TypedStorage<8, 24, std::vector<OreUI::InputMethod>>          mInputMethods;
    ::ll::TypedStorage<1, 1, bool>                                      mIsLowMemoryDevice;
    // NOLINTEND

public:
    // prevent constructor by default
    DeviceInformationFacet();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~DeviceInformationFacet();

    virtual bool update();

    virtual void onOperationModeChanged(::OperationMode);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI DeviceInformationFacet(
        std::function<gsl::not_null<Bedrock::NonOwnerPointer<IClientInstance>>()>,
        ::Bedrock::NonOwnerPointer<IAppPlatform> const&
    );

    MCNAPI std::vector<OreUI::InputMethod> const& getInputMethods() const;

    MCNAPI bool getIsLowMemoryDevice() const;

    MCNAPI ::OreUI::DeviceInformationFacet::Platform getPlatform() const;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::OreUI::FacetAvailability const& AVAILABILITY();

    MCNAPI static ::std::add_lvalue_reference_t<char const[23]> NAME();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        std::function<gsl::not_null<Bedrock::NonOwnerPointer<IClientInstance>>()>,
        ::Bedrock::NonOwnerPointer<IAppPlatform> const&
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $update();

    MCNAPI void $onOperationModeChanged(::OperationMode);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace OreUI
