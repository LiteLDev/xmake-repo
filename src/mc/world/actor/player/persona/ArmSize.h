#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/shared_types/ArmSizeType.h"
#else // @header-generator platform
#include "mc/deps/shared_types/persona/ArmSizeType.h"
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
namespace persona { struct SizeInfo; }
// clang-format on

namespace persona {

class ArmSize {
public:
    // ArmSize inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    using SizeInfoList = std::unordered_map<SharedTypes::persona::ArmSizeType, persona::SizeInfo>;
#else // @header-generator platform
    using SizeInfoList = ::std::unordered_map<::SharedTypes::persona::ArmSizeType, ::persona::SizeInfo>;
#endif // @header-generator platform

    using Type = ::SharedTypes::persona::ArmSizeType;

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::string getStringFromType(::SharedTypes::persona::ArmSizeType const);

    MCNAPI static std::string_view getStringViewFromType(::SharedTypes::persona::ArmSizeType const);

    MCNAPI static std::string_view getTexturePathByType(::SharedTypes::persona::ArmSizeType const);

    MCNAPI static ::SharedTypes::persona::ArmSizeType getTypeFromString(std::string_view);

    MCNAPI static bool isValidType(::SharedTypes::persona::ArmSizeType const);
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI static ::std::string getStringFromType(::SharedTypes::persona::ArmSizeType armSizeType);
#endif
#endif // @header-generator platform
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::unordered_map<SharedTypes::persona::ArmSizeType, persona::SizeInfo> const& mInfoList();
#else // @header-generator platform
    MCAPI static ::std::unordered_map<::SharedTypes::persona::ArmSizeType, ::persona::SizeInfo> const& mInfoList();
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace persona
