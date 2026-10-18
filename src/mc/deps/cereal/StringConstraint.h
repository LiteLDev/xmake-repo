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

#if defined(LL_PLAT_A) // @header-generator platform
class StringConstraint : public ::cereal::ConstraintHandle<cereal::StringConstraint> {
#else // @header-generator platform
class StringConstraint : public ::cereal::ConstraintHandle<::cereal::StringConstraint> {
#endif // @header-generator platform
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 96, ::cereal::internal::StringConstraint> mConstraint;
#else // @header-generator platform
    ::ll::TypedStorage<8, 80, ::cereal::internal::StringConstraint> mConstraint;
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~StringConstraint();
#else // @header-generator platform
    virtual ::cereal::internal::ConstraintDescription doDescription(::cereal::ContextArea) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::cereal::internal::ConstraintDescription doDescription(::cereal::ContextArea) const;
#else // @header-generator platform
    virtual ~StringConstraint() /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::cereal::StringConstraint& maxSize(ulong);
#else // @header-generator platform
    MCAPI ::cereal::StringConstraint& regex(::std::string str, ::std::regex_constants::syntax_option_type flag);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ulong maxSize() const;

    MCNAPI ::cereal::StringConstraint& minSize(ulong);

    MCNAPI ::cereal::StringConstraint& regex(std::string, ::std::regex_constants::syntax_option_type);

    MCNAPI ::cereal::StringConstraint& rejectEmpty();

    MCNAPI void validateValue(std::string_view, ::cereal::SerializerContext&) const;
#else // @header-generator platform
    MCAPI void validateValue(::std::string_view str, ::cereal::SerializerContext& context) const;
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::string flagsToString(::std::regex_constants::syntax_option_type);
#else // @header-generator platform
    MCAPI static ::std::string flagsToString(::std::regex_constants::syntax_option_type flags);
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
