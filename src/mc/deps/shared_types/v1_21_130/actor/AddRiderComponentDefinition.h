#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform

namespace SharedTypes::v1_21_130 {

struct AddRiderComponentDefinition {
public:
    // AddRiderComponentDefinition inner types declare
    // clang-format off
    struct RiderData;
    // clang-format on

    // AddRiderComponentDefinition inner types define
    struct RiderData {
    public:
        // member variables
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::TypedStorage<8, 24, std::string> mEntityType;
        ::ll::TypedStorage<8, 24, std::string> mSpawnEvent;
        // NOLINTEND

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI bool operator==(::SharedTypes::v1_21_130::AddRiderComponentDefinition::RiderData const&) const;
#else // @header-generator platform
        ::ll::TypedStorage<8, 32, ::std::string> mEntityType;
        ::ll::TypedStorage<8, 32, ::std::string> mSpawnEvent;
#endif // @header-generator platform
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::vector<SharedTypes::v1_21_130::AddRiderComponentDefinition::RiderData>> mRiders;
    ::ll::TypedStorage<8, 24, std::string>                                                                 mEntityType;
    ::ll::TypedStorage<8, 24, std::string>                                                                 mSpawnEvent;
#else // @header-generator platform
    ::ll::TypedStorage<8, 24, ::std::vector<::SharedTypes::v1_21_130::AddRiderComponentDefinition::RiderData>> mRiders;
    ::ll::TypedStorage<8, 32, ::std::string> mEntityType;
    ::ll::TypedStorage<8, 32, ::std::string> mSpawnEvent;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    AddRiderComponentDefinition& operator=(AddRiderComponentDefinition const&);
    AddRiderComponentDefinition(AddRiderComponentDefinition const&);
    AddRiderComponentDefinition();
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ~AddRiderComponentDefinition();
    // NOLINTEND
#else // @header-generator platform
    MCAPI ::SharedTypes::v1_21_130::AddRiderComponentDefinition&
    operator=(::SharedTypes::v1_21_130::AddRiderComponentDefinition&&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx&);
#else // @header-generator platform
    MCAPI ~AddRiderComponentDefinition();
#endif // @header-generator platform
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::string_view const& NAME();
#else // @header-generator platform
    MCAPI static ::std::string_view const& NAME();
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

} // namespace SharedTypes::v1_21_130
