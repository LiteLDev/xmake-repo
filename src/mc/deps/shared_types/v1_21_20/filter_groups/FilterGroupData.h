#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/v1_21_20/filter_groups/FilterGroupDataMap.h"
#include "mc/deps/shared_types/v1_21_20/filter_groups/FilterTestData.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_21_20 {

struct FilterGroupData {
public:
    // FilterGroupData inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    using Variant = std::variant<
        SharedTypes::v1_21_20::FilterTestData,
        std::vector<SharedTypes::v1_21_20::FilterGroupData>,
        SharedTypes::v1_21_20::FilterGroupDataMap>;
#else // @header-generator platform
    using Variant = ::std::variant<
        ::SharedTypes::v1_21_20::FilterTestData,
        ::std::vector<::SharedTypes::v1_21_20::FilterGroupData>,
        ::SharedTypes::v1_21_20::FilterGroupDataMap>;
#endif // @header-generator platform

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<8, 192> mData;
#else // @header-generator platform
    ::ll::TypedStorage<
        8,
        232,
        ::std::variant<
            ::SharedTypes::v1_21_20::FilterTestData,
            ::std::vector<::SharedTypes::v1_21_20::FilterGroupData>,
            ::SharedTypes::v1_21_20::FilterGroupDataMap>>
        mData;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool isTest() const;
#else // @header-generator platform
    MCAPI FilterGroupData();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool operator==(::SharedTypes::v1_21_20::FilterGroupData const&) const;
#else // @header-generator platform
    MCAPI bool operator==(::SharedTypes::v1_21_20::FilterGroupData const&) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ~FilterGroupData();
#else // @header-generator platform
    MCAPI ~FilterGroupData();
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void bindType(::cereal::ReflectionCtx&);
#else // @header-generator platform
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCFOLD void* $ctor();
#endif // @header-generator platform
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $dtor();
#else // @header-generator platform
    MCFOLD void $dtor();
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace SharedTypes::v1_21_20
