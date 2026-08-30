#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/cereal/ConstraintHandle.h"
#include "mc/deps/cereal/ContextArea.h"
#include "mc/deps/cereal/internal/StringConstraint.h"

// auto generated forward declare list
// clang-format off
namespace cereal { class SerializerContext; }
namespace cereal::internal { struct ConstraintDescription; }
// clang-format on

namespace cereal {

class StringConstraint : public ::cereal::ConstraintHandle<cereal::StringConstraint> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 96, ::cereal::internal::StringConstraint> mConstraint;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~StringConstraint();

    virtual ::cereal::internal::ConstraintDescription doDescription(::cereal::ContextArea) const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::cereal::StringConstraint& maxSize(ulong);

    MCNAPI ulong maxSize() const;

    MCNAPI ::cereal::StringConstraint& minSize(ulong);

    MCNAPI ::cereal::StringConstraint& regex(std::string, ::std::regex_constants::syntax_option_type);

    MCNAPI ::cereal::StringConstraint& rejectEmpty();

    MCNAPI void validateValue(std::string_view, ::cereal::SerializerContext&) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static std::string flagsToString(::std::regex_constants::syntax_option_type);
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
