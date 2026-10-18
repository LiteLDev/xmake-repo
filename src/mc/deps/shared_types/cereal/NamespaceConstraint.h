#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/cereal/ConstraintHandle.h"
#include "mc/deps/cereal/ContextArea.h"

// auto generated forward declare list
// clang-format off
namespace cereal { class SerializerContext; }
namespace cereal::internal { struct ConstraintDescription; }
// clang-format on

namespace SharedTypes {

#if defined(LL_PLAT_A) // @header-generator platform
class NamespaceConstraint : public ::cereal::ConstraintHandle<SharedTypes::NamespaceConstraint> {
#else // @header-generator platform
class NamespaceConstraint : public ::cereal::ConstraintHandle<::SharedTypes::NamespaceConstraint> {
#endif // @header-generator platform
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 32, std::optional<std::string>> mDisallowedNamespace;
#else // @header-generator platform
    ::ll::TypedStorage<8, 40, ::std::optional<::std::string>> mDisallowedNamespace;
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~NamespaceConstraint();
#else // @header-generator platform
    virtual ::cereal::internal::ConstraintDescription doDescription(::cereal::ContextArea) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::cereal::internal::ConstraintDescription doDescription(::cereal::ContextArea) const;
#else // @header-generator platform
    virtual ~NamespaceConstraint() /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::SharedTypes::NamespaceConstraint& disallowMinecraft();
#else // @header-generator platform
    MCAPI ::std::string getRegexString(::std::optional<::std::string> disallowedNamespace) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::SharedTypes::NamespaceConstraint& disallowNamespace(std::string const&);

    MCNAPI std::string getRegexString(std::optional<std::string>) const;

    MCNAPI void validateValue(std::string_view, ::cereal::SerializerContext&) const;
#else // @header-generator platform
    MCAPI void validateValue(::std::string_view value, ::cereal::SerializerContext& context) const;
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

} // namespace SharedTypes
