#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_21_20 {

struct FilterTestData {
public:
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    // FilterTestData inner types define
    using ParamVariant = ::std::variant<bool, int, float, ::std::string>;

public:
#endif // @header-generator platform
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::string>                                                mTest;
    ::ll::TypedStorage<8, 40, std::optional<std::variant<bool, int, float, std::string>>> mSubject;
    ::ll::TypedStorage<8, 40, std::optional<std::variant<bool, int, float, std::string>>> mOperator;
    ::ll::TypedStorage<8, 40, std::optional<std::variant<bool, int, float, std::string>>> mDomain;
    ::ll::TypedStorage<8, 40, std::optional<std::variant<bool, int, float, std::string>>> mValue;
#else // @header-generator platform
    ::ll::TypedStorage<8, 32, ::std::string>                                                    mTest;
    ::ll::TypedStorage<8, 48, ::std::optional<::std::variant<bool, int, float, ::std::string>>> mSubject;
    ::ll::TypedStorage<8, 48, ::std::optional<::std::variant<bool, int, float, ::std::string>>> mOperator;
    ::ll::TypedStorage<8, 48, ::std::optional<::std::variant<bool, int, float, ::std::string>>> mDomain;
    ::ll::TypedStorage<8, 48, ::std::optional<::std::variant<bool, int, float, ::std::string>>> mValue;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    FilterTestData& operator=(FilterTestData const&);
#endif // @header-generator platform
    FilterTestData();

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI FilterTestData(::SharedTypes::v1_21_20::FilterTestData const&);
#else // @header-generator platform
    MCAPI FilterTestData(::SharedTypes::v1_21_20::FilterTestData&&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI FilterTestData(::SharedTypes::v1_21_20::FilterTestData&&);
#else // @header-generator platform
    MCAPI FilterTestData(::SharedTypes::v1_21_20::FilterTestData const&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool operator==(::SharedTypes::v1_21_20::FilterTestData const&) const;
#else // @header-generator platform
    MCAPI ::SharedTypes::v1_21_20::FilterTestData& operator=(::SharedTypes::v1_21_20::FilterTestData&&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ~FilterTestData();
#else // @header-generator platform
    MCAPI bool operator==(::SharedTypes::v1_21_20::FilterTestData const&) const;

    MCAPI ~FilterTestData();
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void bindType(::cereal::ReflectionCtx&);
#else // @header-generator platform
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::SharedTypes::v1_21_20::FilterTestData const&);
#else // @header-generator platform
    MCAPI void* $ctor(::SharedTypes::v1_21_20::FilterTestData&&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::SharedTypes::v1_21_20::FilterTestData&&);
#else // @header-generator platform
    MCAPI void* $ctor(::SharedTypes::v1_21_20::FilterTestData const&);
#endif // @header-generator platform
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI void $dtor();
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace SharedTypes::v1_21_20
