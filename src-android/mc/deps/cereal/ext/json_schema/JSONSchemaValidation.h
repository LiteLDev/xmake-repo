#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace cereal::ext::internal {

struct JSONSchemaValidation {
public:
    // member variables
    // NOLINTBEGIN
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
    // NOLINTEND
};

} // namespace cereal::ext::internal
