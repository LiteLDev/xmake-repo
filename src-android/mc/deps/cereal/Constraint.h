#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/cereal/ContextArea.h"
#include "mc/deps/cereal/InputConstraint.h"

// auto generated forward declare list
// clang-format off
namespace cereal { class SerializerContext; }
namespace cereal::internal { struct ConstraintDescription; }
// clang-format on

namespace cereal {

class Constraint {
public:
    // Constraint inner types define
    using Description = ::cereal::internal::ConstraintDescription;

    using TypeInfo = ::entt::type_info;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::cereal::internal::InputConstraint> mInputConstraint;
    ::ll::TypedStorage<1, 1, ::cereal::ContextArea>                mContextArea;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void doValidate(::entt::meta_any const&, ::cereal::SerializerContext&) const = 0;

    virtual ~Constraint();

    virtual ::cereal::internal::ConstraintDescription doDescription(::cereal::ContextArea) const = 0;

    virtual ulong doMaxInputLength() const;

    virtual ulong doMinInputLength() const;

    virtual ::cereal::Constraint const* subConstraint(ulong) const;

    virtual ::entt::type_info const& info() const = 0;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::cereal::ContextArea contextArea() const;

    MCNAPI ::cereal::internal::ConstraintDescription description(::cereal::ContextArea) const;

    MCNAPI ulong maxInputLength() const;

    MCNAPI ulong minInputLength() const;

    MCNAPI void setContextArea(::cereal::ContextArea);

    MCNAPI void setMaxInputLength(ulong);

    MCNAPI void validate(::entt::meta_any const&, ::cereal::SerializerContext&) const;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ulong $doMaxInputLength() const;

    MCNAPI ulong $doMinInputLength() const;

    MCNAPI ::cereal::Constraint const* $subConstraint(ulong) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace cereal
