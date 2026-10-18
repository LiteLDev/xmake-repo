#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/cereal/schema/ConstraintDescription.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/cereal/schema/EnumValue.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/deps/cereal/schema/ReflectedType.h"
#include "mc/deps/cereal/schema/SchemaInfo.h"
#include "mc/deps/cereal/schema/SerializationTraits.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/cereal/schema/dynamic/DynamicValue.h"
#else // @header-generator platform
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
namespace cereal { class DynamicValue; }
#endif // @header-generator platform
namespace cereal { struct ReflectionCtx; }
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
namespace cereal::internal { struct EnumValue; }
#endif // @header-generator platform
namespace cereal::internal { struct Member; }
// clang-format on

namespace cereal {

struct SchemaDescription : public ::cereal::internal::SchemaInfo {
public:
    // SchemaDescription inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    using SchemaInfo = ::cereal::internal::SchemaInfo;
#else // @header-generator platform
    using CerealProperties = ::std::map<::std::string, ::cereal::DynamicValue>;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    using CerealProperties = std::map<std::string, cereal::DynamicValue>;
#else // @header-generator platform
    using ConstraintDescription = ::cereal::internal::ConstraintDescription;

    using EnumValue = ::cereal::internal::EnumValue;

    using Member = ::cereal::internal::Member;

    using ReflectedType = ::cereal::internal::ReflectedType;

    using SchemaInfo = ::cereal::internal::SchemaInfo;
#endif // @header-generator platform

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 424, std::optional<cereal::internal::ConstraintDescription>>        mConstraint;
    ::ll::TypedStorage<8, 32, std::optional<std::vector<cereal::internal::EnumValue>>>        mEnumValues;
    ::ll::UntypedStorage<8, 32>                                                               mParents;
    ::ll::UntypedStorage<8, 32>                                                               mSetters;
    ::ll::TypedStorage<8, 32, std::optional<std::map<std::string, cereal::internal::Member>>> mMembers;
    ::ll::TypedStorage<8, 32, std::optional<std::map<std::string, cereal::internal::Member>>> mPatternMembers;
    ::ll::TypedStorage<8, 16, std::shared_ptr<cereal::SchemaDescription>>                     mValueType;
    ::ll::TypedStorage<8, 16, std::shared_ptr<cereal::SchemaDescription>>                     mKeyType;
    ::ll::TypedStorage<8, 16, std::shared_ptr<cereal::SchemaDescription>>                     mMappedType;
    ::ll::TypedStorage<8, 32, std::optional<std::map<std::string, cereal::DynamicValue>>>     mCerealProperties;
    ::ll::TypedStorage<4, 8, std::optional<cereal::internal::ReflectedType>>                  mUnderlyingType;
    ::ll::TypedStorage<4, 8, std::optional<cereal::internal::ReflectedType>>                  mControlValueType;
    ::ll::TypedStorage<1, 2, std::optional<cereal::SerializationTraits>>                      mSerializationTraits;
    ::ll::TypedStorage<1, 2, std::optional<uchar>>                                            mOrdinalIndex;
    ::ll::TypedStorage<8, 32, std::optional<std::string>>                                     mNonPublicFlag;
#else // @header-generator platform
    ::ll::TypedStorage<8, 456, ::std::optional<::cereal::internal::ConstraintDescription>>            mConstraint;
    ::ll::TypedStorage<8, 32, ::std::optional<::std::vector<::cereal::internal::EnumValue>>>          mEnumValues;
    ::ll::TypedStorage<8, 32, ::std::optional<::std::vector<::cereal::SchemaDescription>>>            mParents;
    ::ll::TypedStorage<8, 32, ::std::optional<::std::vector<::cereal::SchemaDescription>>>            mSetters;
    ::ll::TypedStorage<8, 24, ::std::optional<::std::map<::std::string, ::cereal::internal::Member>>> mMembers;
    ::ll::TypedStorage<8, 24, ::std::optional<::std::map<::std::string, ::cereal::internal::Member>>> mPatternMembers;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::cereal::SchemaDescription>>                         mValueType;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::cereal::SchemaDescription>>                         mKeyType;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::cereal::SchemaDescription>>                         mMappedType;
    ::ll::TypedStorage<8, 24, ::std::optional<::std::map<::std::string, ::cereal::DynamicValue>>>     mCerealProperties;
    ::ll::TypedStorage<4, 8, ::std::optional<::cereal::internal::ReflectedType>>                      mUnderlyingType;
    ::ll::TypedStorage<4, 8, ::std::optional<::cereal::internal::ReflectedType>>                      mControlValueType;
    ::ll::TypedStorage<1, 2, ::std::optional<::cereal::SerializationTraits>> mSerializationTraits;
    ::ll::TypedStorage<1, 2, ::std::optional<uchar>>                         mOrdinalIndex;
    ::ll::TypedStorage<8, 40, ::std::optional<::std::string>>                mNonPublicFlag;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    SchemaDescription();
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI SchemaDescription(::cereal::SchemaDescription const&);
#else // @header-generator platform
    MCAPI SchemaDescription(::cereal::SchemaDescription&&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI SchemaDescription(::cereal::SchemaDescription&&);
#else // @header-generator platform
    MCAPI SchemaDescription(::cereal::SchemaDescription const&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ~SchemaDescription();
#else // @header-generator platform
    MCAPI ::cereal::SchemaDescription& operator=(::cereal::SchemaDescription&&);

    MCAPI ::cereal::SchemaDescription& operator=(::cereal::SchemaDescription const&);

    MCAPI ~SchemaDescription();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bindTypes(::cereal::ReflectionCtx& ctx);
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::cereal::SchemaDescription const&);
#else // @header-generator platform
    MCAPI void* $ctor(::cereal::SchemaDescription&&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::cereal::SchemaDescription&&);
#else // @header-generator platform
    MCAPI void* $ctor(::cereal::SchemaDescription const&);
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

} // namespace cereal
