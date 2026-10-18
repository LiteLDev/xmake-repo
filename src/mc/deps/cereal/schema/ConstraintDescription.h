#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace cereal::internal {

struct ConstraintDescription {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    ::ll::TypedStorage<8, 16, ::std::optional<double>>                                      mMultipleOf;
    ::ll::TypedStorage<8, 16, ::std::optional<double>>                                      mMinimum;
    ::ll::TypedStorage<8, 16, ::std::optional<double>>                                      mExclusiveMinimum;
    ::ll::TypedStorage<8, 16, ::std::optional<double>>                                      mMaximum;
    ::ll::TypedStorage<8, 16, ::std::optional<double>>                                      mExclusiveMaximum;
    ::ll::TypedStorage<8, 16, ::std::optional<uint64>>                                      mMinLength;
    ::ll::TypedStorage<8, 16, ::std::optional<uint64>>                                      mMaxLength;
    ::ll::TypedStorage<8, 40, ::std::optional<::std::string>>                               mPattern;
    ::ll::TypedStorage<8, 40, ::std::optional<::std::string>>                               mRegexFlags;
    ::ll::TypedStorage<8, 16, ::std::optional<uint64>>                                      mMinItems;
    ::ll::TypedStorage<8, 16, ::std::optional<uint64>>                                      mMaxItems;
    ::ll::TypedStorage<1, 2, ::std::optional<bool>>                                         mNoDuplicates;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::cereal::internal::ConstraintDescription>> mItems;
    ::ll::TypedStorage<8, 16, ::std::optional<uint64>>                                      mMinProperties;
    ::ll::TypedStorage<8, 16, ::std::optional<uint64>>                                      mMaxProperties;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::cereal::internal::ConstraintDescription>> mPropertyNames;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::cereal::internal::ConstraintDescription>> mAdditionalProperties;
    ::ll::TypedStorage<8, 32, ::std::optional<::std::vector<int64>>>                        mEnumValues;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::optional<::cereal::internal::ConstraintDescription>>> mVariantTypes;
    ::ll::TypedStorage<8, 40, ::std::optional<::std::string>> mCustomDescription;
    ::ll::TypedStorage<8, 40, ::std::optional<::std::string>> mNonPublicFlag;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    ConstraintDescription& operator=(ConstraintDescription const&);
#if defined(LL_PLAT_A) // @header-generator platform
    ConstraintDescription(ConstraintDescription const&);
#else // @header-generator platform
    ConstraintDescription();
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void merge(::cereal::internal::ConstraintDescription const&);
#else // @header-generator platform
    MCAPI ConstraintDescription(::cereal::internal::ConstraintDescription&&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ~ConstraintDescription();
#else // @header-generator platform
    MCAPI ConstraintDescription(::cereal::internal::ConstraintDescription const&);

    MCAPI void merge(::cereal::internal::ConstraintDescription const& other);

    MCAPI ::cereal::internal::ConstraintDescription& operator=(::cereal::internal::ConstraintDescription&&);

    MCAPI ~ConstraintDescription();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::cereal::internal::ConstraintDescription&&);

    MCAPI void* $ctor(::cereal::internal::ConstraintDescription const&);
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

} // namespace cereal::internal
