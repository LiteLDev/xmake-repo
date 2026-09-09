#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

namespace Social {

class IUserDataObject {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IUserDataObject() = default;

    virtual std::string const& getObjectName() const = 0;

    virtual bool fillFromJSON(::Json::Value const&) = 0;

    virtual ::Json::Value toJSONObject() const = 0;
    // NOLINTEND
};

} // namespace Social
