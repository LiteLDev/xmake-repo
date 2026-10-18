#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/cereal/schema/SchemaDescription.h"
#include "mc/deps/cereal/schema/dynamic/DynamicValue.h"

namespace cereal::internal {

struct Member : public ::cereal::SchemaDescription {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<1, 1, bool>                                 mRequired;
    ::ll::TypedStorage<1, 1, bool>                                 mDeprecated;
    ::ll::TypedStorage<8, 56, std::optional<cereal::DynamicValue>> mDefaultValue;
    ::ll::TypedStorage<8, 56, std::optional<cereal::DynamicValue>> mConstValue;
#else // @header-generator platform
    ::ll::TypedStorage<1, 1, bool>                                     mRequired;
    ::ll::TypedStorage<1, 1, bool>                                     mDeprecated;
    ::ll::TypedStorage<8, 80, ::std::optional<::cereal::DynamicValue>> mDefaultValue;
    ::ll::TypedStorage<8, 80, ::std::optional<::cereal::DynamicValue>> mConstValue;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    Member& operator=(Member const&);
    Member();

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI Member(::cereal::internal::Member const&);

    MCNAPI ~Member();
#else // @header-generator platform
    MCAPI Member(::cereal::internal::Member const&);
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::cereal::internal::Member const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI void* $ctor(::cereal::internal::Member const&);
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace cereal::internal
