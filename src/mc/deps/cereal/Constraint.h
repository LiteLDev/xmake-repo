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
#if defined(LL_PLAT_A) // @header-generator platform
    virtual void doValidate(::entt::meta_any const&, ::cereal::SerializerContext&) const = 0;
#else // @header-generator platform
    virtual void doValidate(::entt::meta_any const& any, ::cereal::SerializerContext& context) const = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~Constraint();
#else // @header-generator platform
    virtual ::cereal::internal::ConstraintDescription doDescription(::cereal::ContextArea req) const = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::cereal::internal::ConstraintDescription doDescription(::cereal::ContextArea) const = 0;
#else // @header-generator platform
    virtual uint64 doMaxInputLength() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ulong doMaxInputLength() const;
#else // @header-generator platform
    virtual uint64 doMinInputLength() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ulong doMinInputLength() const;
#else // @header-generator platform
    virtual ~Constraint() = default;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::cereal::Constraint const* subConstraint(ulong) const;
#else // @header-generator platform
    virtual ::cereal::Constraint const* subConstraint(uint64 index) const;
#endif // @header-generator platform

    virtual ::entt::type_info const& info() const = 0;
    // NOLINTEND

public:
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
#endif // @header-generator platform
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ulong $doMaxInputLength() const;
#else // @header-generator platform
    MCFOLD uint64 $doMaxInputLength() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ulong $doMinInputLength() const;
#else // @header-generator platform
    MCFOLD uint64 $doMinInputLength() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::cereal::Constraint const* $subConstraint(ulong) const;
#else // @header-generator platform
    MCFOLD ::cereal::Constraint const* $subConstraint(uint64 index) const;


#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace cereal
