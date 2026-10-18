#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on
#else // @header-generator platform
// auto generated inclusion list
#include "mc/deps/json/Value.h"
#endif // @header-generator platform

namespace cg {

struct VariationMap {
public:
    // VariationMap inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    using MaterialJsonVariationMap = std::map<std::string, cg::VariationMap>;
#else // @header-generator platform
    using MaterialJsonVariationMap = ::std::map<::std::string, ::cg::VariationMap>;
#endif // @header-generator platform

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<8, 24> mMaterialJsonVariationMap;
    ::ll::UntypedStorage<8, 16> mVariantJson;
#else // @header-generator platform
    ::ll::TypedStorage<8, 16, ::std::map<::std::string, ::cg::VariationMap>> mMaterialJsonVariationMap;
    ::ll::TypedStorage<8, 16, ::Json::Value>                                 mVariantJson;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    VariationMap& operator=(VariationMap const&);
    VariationMap(VariationMap const&);
#else // @header-generator platform
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ~VariationMap();
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI ~VariationMap();
#endif
#endif // @header-generator platform
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $dtor();
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI void $dtor();
#endif
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace cg
