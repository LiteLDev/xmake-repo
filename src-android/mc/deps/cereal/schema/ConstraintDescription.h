#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace cereal::internal {

struct ConstraintDescription {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, std::optional<double>>                                    mMultipleOf;
    ::ll::TypedStorage<8, 16, std::optional<double>>                                    mMinimum;
    ::ll::TypedStorage<8, 16, std::optional<double>>                                    mExclusiveMinimum;
    ::ll::TypedStorage<8, 16, std::optional<double>>                                    mMaximum;
    ::ll::TypedStorage<8, 16, std::optional<double>>                                    mExclusiveMaximum;
    ::ll::TypedStorage<8, 16, std::optional<ulong>>                                     mMinLength;
    ::ll::TypedStorage<8, 16, std::optional<ulong>>                                     mMaxLength;
    ::ll::TypedStorage<8, 32, std::optional<std::string>>                               mPattern;
    ::ll::TypedStorage<8, 32, std::optional<std::string>>                               mRegexFlags;
    ::ll::TypedStorage<8, 16, std::optional<ulong>>                                     mMinItems;
    ::ll::TypedStorage<8, 16, std::optional<ulong>>                                     mMaxItems;
    ::ll::TypedStorage<1, 2, std::optional<bool>>                                       mNoDuplicates;
    ::ll::TypedStorage<8, 16, std::shared_ptr<cereal::internal::ConstraintDescription>> mItems;
    ::ll::TypedStorage<8, 16, std::optional<ulong>>                                     mMinProperties;
    ::ll::TypedStorage<8, 16, std::optional<ulong>>                                     mMaxProperties;
    ::ll::TypedStorage<8, 16, std::shared_ptr<cereal::internal::ConstraintDescription>> mPropertyNames;
    ::ll::TypedStorage<8, 16, std::shared_ptr<cereal::internal::ConstraintDescription>> mAdditionalProperties;
    ::ll::TypedStorage<8, 32, std::optional<std::vector<long>>>                         mEnumValues;
    ::ll::UntypedStorage<8, 24>                                                         mVariantTypes;
    ::ll::TypedStorage<8, 32, std::optional<std::string>>                               mCustomDescription;
    ::ll::TypedStorage<8, 32, std::optional<std::string>>                               mNonPublicFlag;
    // NOLINTEND

public:
    // prevent constructor by default
    ConstraintDescription& operator=(ConstraintDescription const&);
    ConstraintDescription(ConstraintDescription const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void merge(::cereal::internal::ConstraintDescription const&);

    MCNAPI ~ConstraintDescription();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace cereal::internal
