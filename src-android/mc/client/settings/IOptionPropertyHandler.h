#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/settings/IPropertyHandler.h"

// auto generated forward declare list
// clang-format off
namespace Settings { struct LocStringData; }
namespace Settings { struct OptionData; }
// clang-format on

namespace Settings {

class IOptionPropertyHandler : public ::Settings::IPropertyHandler<int> {
public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~IOptionPropertyHandler() = default;

    virtual std::vector<Settings::OptionData> getOptions() = 0;

    virtual std::optional<std::variant<std::string, std::function<std::string ()>, Settings::LocStringData>> getInfo();
    // clang-format on
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI std::optional<std::variant<std::string, std::function<std::string()>, Settings::LocStringData>> $getInfo();
    // NOLINTEND
};

} // namespace Settings
