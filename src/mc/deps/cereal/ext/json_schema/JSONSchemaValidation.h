#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace cereal::ext::internal {

struct JSONSchemaValidation {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 16, std::optional<double>>      mMultipleOf;
    ::ll::TypedStorage<8, 16, std::optional<double>>      mMinimum;
    ::ll::TypedStorage<8, 16, std::optional<double>>      mExclusiveMinimum;
    ::ll::TypedStorage<8, 16, std::optional<double>>      mMaximum;
    ::ll::TypedStorage<8, 16, std::optional<double>>      mExclusiveMaximum;
    ::ll::TypedStorage<8, 16, std::optional<ulong>>       mMinLength;
    ::ll::TypedStorage<8, 16, std::optional<ulong>>       mMaxLength;
    ::ll::TypedStorage<8, 32, std::optional<std::string>> mPattern;
    ::ll::TypedStorage<8, 32, std::optional<std::string>> mExtraRegexFlags;
    ::ll::TypedStorage<8, 16, std::optional<ulong>>       mMinItems;
    ::ll::TypedStorage<8, 16, std::optional<ulong>>       mMaxItems;
    ::ll::TypedStorage<1, 2, std::optional<bool>>         mExtraNoDuplicates;
    ::ll::TypedStorage<8, 16, std::optional<ulong>>       mMinProperties;
    ::ll::TypedStorage<8, 16, std::optional<ulong>>       mMaxProperties;
    ::ll::TypedStorage<8, 32, std::optional<std::string>> mExtraCustomDescription;
    ::ll::TypedStorage<8, 32, std::optional<std::string>> mExtraNonPublicConstraint;
#else // @header-generator platform
    ::ll::TypedStorage<8, 16, ::std::optional<double>>        mMultipleOf;
    ::ll::TypedStorage<8, 16, ::std::optional<double>>        mMinimum;
    ::ll::TypedStorage<8, 16, ::std::optional<double>>        mExclusiveMinimum;
    ::ll::TypedStorage<8, 16, ::std::optional<double>>        mMaximum;
    ::ll::TypedStorage<8, 16, ::std::optional<double>>        mExclusiveMaximum;
    ::ll::TypedStorage<8, 16, ::std::optional<uint64>>        mMinLength;
    ::ll::TypedStorage<8, 16, ::std::optional<uint64>>        mMaxLength;
    ::ll::TypedStorage<8, 40, ::std::optional<::std::string>> mPattern;
    ::ll::TypedStorage<8, 40, ::std::optional<::std::string>> mExtraRegexFlags;
    ::ll::TypedStorage<8, 16, ::std::optional<uint64>>        mMinItems;
    ::ll::TypedStorage<8, 16, ::std::optional<uint64>>        mMaxItems;
    ::ll::TypedStorage<1, 2, ::std::optional<bool>>           mExtraNoDuplicates;
    ::ll::TypedStorage<8, 16, ::std::optional<uint64>>        mMinProperties;
    ::ll::TypedStorage<8, 16, ::std::optional<uint64>>        mMaxProperties;
    ::ll::TypedStorage<8, 40, ::std::optional<::std::string>> mExtraCustomDescription;
    ::ll::TypedStorage<8, 40, ::std::optional<::std::string>> mExtraNonPublicConstraint;
    // NOLINTEND

public:
    // prevent constructor by default
    JSONSchemaValidation(JSONSchemaValidation const&);
    JSONSchemaValidation();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::cereal::ext::internal::JSONSchemaValidation&
    operator=(::cereal::ext::internal::JSONSchemaValidation const&);

    MCAPI ~JSONSchemaValidation();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace cereal::ext::internal
