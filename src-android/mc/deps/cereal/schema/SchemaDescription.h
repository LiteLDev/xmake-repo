#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/cereal/schema/ConstraintDescription.h"
#include "mc/deps/cereal/schema/EnumValue.h"
#include "mc/deps/cereal/schema/ReflectedType.h"
#include "mc/deps/cereal/schema/SchemaInfo.h"
#include "mc/deps/cereal/schema/SerializationTraits.h"
#include "mc/deps/cereal/schema/dynamic/DynamicValue.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
namespace cereal::internal { struct Member; }
// clang-format on

namespace cereal {

struct SchemaDescription : public ::cereal::internal::SchemaInfo {
public:
    // SchemaDescription inner types define
    using SchemaInfo = ::cereal::internal::SchemaInfo;

    using CerealProperties = std::map<std::string, cereal::DynamicValue>;

public:
    // member variables
    // NOLINTBEGIN
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
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI SchemaDescription(::cereal::SchemaDescription const&);

    MCNAPI SchemaDescription(::cereal::SchemaDescription&&);

    MCNAPI ~SchemaDescription();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::cereal::SchemaDescription const&);

    MCNAPI void* $ctor(::cereal::SchemaDescription&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace cereal
