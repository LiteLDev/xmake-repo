#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/QueryBase.h"
#include "mc/client/gui/oreui/binding/properties/Property.h"
#include "mc/client/gui/oreui/binding/properties/PropertyVector.h"
#include "mc/client/gui/oreui/input/InputMethod.h"
#include "mc/deps/application/AppPlatformListener.h"

// auto generated forward declare list
// clang-format off
class AppPlatform;
class IClientInstance;
namespace OreUI::Detail { template<typename T0> class ObservableValue; }
// clang-format on

namespace OreUI {

class DevicePlatformQuery : public ::OreUI::QueryBase<OreUI::DevicePlatformQuery>, public ::AppPlatformListener {
public:
    // DevicePlatformQuery inner types define
    enum class PlatformType : uchar {
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
        Unknown         = 13,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, std::reference_wrapper<IClientInstance>> mClient;
    ::ll::TypedStorage<8, 8, std::reference_wrapper<AppPlatform>>     mAppPlatform;
    ::ll::UntypedStorage<8, 152>                                      mPlatformType;
    ::ll::UntypedStorage<8, 104>                                      mInputMethods;
    // NOLINTEND
};

} // namespace OreUI
