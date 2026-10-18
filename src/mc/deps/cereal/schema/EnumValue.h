#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/cereal/schema/dynamic/DynamicValue.h"
#else // @header-generator platform
// auto generated forward declare list
// clang-format off
namespace cereal { class DynamicValue; }
// clang-format on
#endif // @header-generator platform

namespace cereal::internal {

struct EnumValue {
public:
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    // EnumValue inner types define
    using CerealProperties = ::std::map<::std::string, ::cereal::DynamicValue>;

public:
#endif // @header-generator platform
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, long>                                                        mValue;
    ::ll::TypedStorage<8, 24, std::string>                                                mName;
    ::ll::TypedStorage<8, 32, std::optional<std::string>>                                 mDescription;
    ::ll::TypedStorage<8, 32, std::optional<std::map<std::string, cereal::DynamicValue>>> mCerealProperties;
    ::ll::TypedStorage<8, 32, std::optional<std::string>>                                 mNonPublicFlag;
#else // @header-generator platform
    ::ll::TypedStorage<8, 8, int64>                                                               mValue;
    ::ll::TypedStorage<8, 32, ::std::string>                                                      mName;
    ::ll::TypedStorage<8, 40, ::std::optional<::std::string>>                                     mDescription;
    ::ll::TypedStorage<8, 24, ::std::optional<::std::map<::std::string, ::cereal::DynamicValue>>> mCerealProperties;
    ::ll::TypedStorage<8, 40, ::std::optional<::std::string>>                                     mNonPublicFlag;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    EnumValue& operator=(EnumValue const&);
#if defined(LL_PLAT_A) // @header-generator platform
    EnumValue(EnumValue const&);
#else // @header-generator platform
    EnumValue();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI EnumValue(::cereal::internal::EnumValue const&);

    MCAPI ~EnumValue();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::cereal::internal::EnumValue const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
#endif // @header-generator platform
};

} // namespace cereal::internal
