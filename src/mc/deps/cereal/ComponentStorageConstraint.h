#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/cereal/ConstraintHandle.h"
#include "mc/deps/cereal/ContextArea.h"

// auto generated forward declare list
// clang-format off
namespace cereal { class ComponentStorage; }
namespace cereal { class SerializerContext; }
namespace cereal::internal { struct ConstraintDescription; }
// clang-format on

namespace cereal {

#if defined(LL_PLAT_A) // @header-generator platform
class ComponentStorageConstraint : public ::cereal::ConstraintHandle<cereal::ComponentStorageConstraint> {
#else // @header-generator platform
class ComponentStorageConstraint : public ::cereal::ConstraintHandle<::cereal::ComponentStorageConstraint> {
#endif // @header-generator platform
public:
    // ComponentStorageConstraint inner types define
    enum class ConstraintKeysMode : uchar {
        None   = 0,
        Reject = 1,
        Accept = 2,
    };

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 40, std::unordered_set<std::string>>                         mKeys;
#else // @header-generator platform
    ::ll::TypedStorage<8, 64, ::std::unordered_set<::std::string>>                     mKeys;
#endif // @header-generator platform
    ::ll::TypedStorage<1, 1, ::cereal::ComponentStorageConstraint::ConstraintKeysMode> mKeysMode;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~ComponentStorageConstraint();
#else // @header-generator platform
    virtual ::cereal::internal::ConstraintDescription doDescription(::cereal::ContextArea) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::cereal::internal::ConstraintDescription doDescription(::cereal::ContextArea) const;
#else // @header-generator platform
    virtual ~ComponentStorageConstraint() /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::cereal::ComponentStorageConstraint& minSize(ulong);
#else // @header-generator platform
    MCAPI ::cereal::ComponentStorageConstraint& rejectKeys(::std::initializer_list<::std::string> keys);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::cereal::ComponentStorageConstraint& rejectKeys(std::initializer_list<std::string>);

    MCNAPI void validateValue(::cereal::ComponentStorage const&, ::cereal::SerializerContext&) const;
#else // @header-generator platform
    MCAPI void validateValue(::cereal::ComponentStorage const& storage, ::cereal::SerializerContext& context) const;
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

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::cereal::internal::ConstraintDescription $doDescription(::cereal::ContextArea) const;
#else // @header-generator platform
    MCAPI ::cereal::internal::ConstraintDescription $doDescription(::cereal::ContextArea) const;


#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace cereal
