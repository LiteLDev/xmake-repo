#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/network/realms/RealmsServerMode.h"
#include "mc/client/network/realms/RealmsTier.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

namespace Realms {

struct ServerSettings {
public:
    // ServerSettings inner types declare
    // clang-format off
    struct SliderValue;
    // clang-format on

    // ServerSettings inner types define
    struct SliderValue {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, int> min;
        ::ll::TypedStorage<4, 4, int> max;
        ::ll::TypedStorage<4, 4, int> defaultValue;
        ::ll::TypedStorage<4, 4, int> current;
        // NOLINTEND

    public:
        // static functions
        // NOLINTBEGIN
        MCNAPI static ::Realms::ServerSettings::SliderValue fromJson(::Json::Value const&);
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::Realms::RealmsTier>                   tier;
    ::ll::TypedStorage<4, 4, ::Realms::RealmsServerMode>             sessionMode;
    ::ll::TypedStorage<4, 16, ::Realms::ServerSettings::SliderValue> playerCount;
    ::ll::TypedStorage<4, 16, ::Realms::ServerSettings::SliderValue> simDistance;
    ::ll::TypedStorage<4, 16, ::Realms::ServerSettings::SliderValue> renderDistance;
    // NOLINTEND
};

} // namespace Realms
