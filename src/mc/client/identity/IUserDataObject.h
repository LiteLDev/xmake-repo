#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
namespace Social {

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
class IUserDataObject {};
#endif // @header-generator platform

} // namespace Social
