#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/shared_types/BodySizeType.h"
#else // @header-generator platform
#include "mc/deps/shared_types/persona/BodySizeType.h"
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
namespace persona { struct SizeInfo; }
// clang-format on

namespace persona {

class BodySize {
public:
    // BodySize inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    using SizeInfoList = std::unordered_map<SharedTypes::persona::BodySizeType, persona::SizeInfo>;
#else // @header-generator platform
    using SizeInfoList = ::std::unordered_map<::SharedTypes::persona::BodySizeType, ::persona::SizeInfo>;
#endif // @header-generator platform

    using Type = ::SharedTypes::persona::BodySizeType;

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::string getStringFromType(::SharedTypes::persona::BodySizeType const);

    MCNAPI static std::string_view getTexturePathByType(::SharedTypes::persona::BodySizeType const);

    MCNAPI static ::SharedTypes::persona::BodySizeType getTypeFromString(std::string_view);

    MCNAPI static bool isValidType(::SharedTypes::persona::BodySizeType const);
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI static ::std::string getStringFromType(::SharedTypes::persona::BodySizeType bodySizeType);

    MCAPI static ::SharedTypes::persona::BodySizeType getTypeFromString(::std::string_view bodySizeStr);
#endif
#endif // @header-generator platform
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::unordered_map<SharedTypes::persona::BodySizeType, persona::SizeInfo> const& mInfoList();
#else // @header-generator platform
    MCAPI static ::std::unordered_map<::SharedTypes::persona::BodySizeType, ::persona::SizeInfo> const& mInfoList();
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace persona
