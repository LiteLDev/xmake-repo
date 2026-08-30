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

class ComponentStorageConstraint : public ::cereal::ConstraintHandle<cereal::ComponentStorageConstraint> {
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
    ::ll::TypedStorage<8, 40, std::unordered_set<std::string>>                         mKeys;
    ::ll::TypedStorage<1, 1, ::cereal::ComponentStorageConstraint::ConstraintKeysMode> mKeysMode;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ComponentStorageConstraint();

    virtual ::cereal::internal::ConstraintDescription doDescription(::cereal::ContextArea) const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::cereal::ComponentStorageConstraint& minSize(ulong);

    MCNAPI ::cereal::ComponentStorageConstraint& rejectKeys(std::initializer_list<std::string>);

    MCNAPI void validateValue(::cereal::ComponentStorage const&, ::cereal::SerializerContext&) const;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::cereal::internal::ConstraintDescription $doDescription(::cereal::ContextArea) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace cereal
