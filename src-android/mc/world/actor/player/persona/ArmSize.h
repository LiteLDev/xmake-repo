#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/ArmSizeType.h"

// auto generated forward declare list
// clang-format off
namespace persona { struct SizeInfo; }
// clang-format on

namespace persona {

class ArmSize {
public:
    // ArmSize inner types define
    using SizeInfoList = std::unordered_map<SharedTypes::persona::ArmSizeType, persona::SizeInfo>;

    using Type = ::SharedTypes::persona::ArmSizeType;

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static std::string getStringFromType(::SharedTypes::persona::ArmSizeType const);

    MCNAPI static std::string_view getStringViewFromType(::SharedTypes::persona::ArmSizeType const);

    MCNAPI static std::string_view getTexturePathByType(::SharedTypes::persona::ArmSizeType const);

    MCNAPI static ::SharedTypes::persona::ArmSizeType getTypeFromString(std::string_view);

    MCNAPI static bool isValidType(::SharedTypes::persona::ArmSizeType const);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static std::unordered_map<SharedTypes::persona::ArmSizeType, persona::SizeInfo> const& mInfoList();
    // NOLINTEND
};

} // namespace persona
