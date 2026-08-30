#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/BodySizeType.h"

// auto generated forward declare list
// clang-format off
namespace persona { struct SizeInfo; }
// clang-format on

namespace persona {

class BodySize {
public:
    // BodySize inner types define
    using SizeInfoList = std::unordered_map<SharedTypes::persona::BodySizeType, persona::SizeInfo>;

    using Type = ::SharedTypes::persona::BodySizeType;

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static std::string getStringFromType(::SharedTypes::persona::BodySizeType const);

    MCNAPI static std::string_view getTexturePathByType(::SharedTypes::persona::BodySizeType const);

    MCNAPI static ::SharedTypes::persona::BodySizeType getTypeFromString(std::string_view);

    MCNAPI static bool isValidType(::SharedTypes::persona::BodySizeType const);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static std::unordered_map<SharedTypes::persona::BodySizeType, persona::SizeInfo> const& mInfoList();
    // NOLINTEND
};

} // namespace persona
