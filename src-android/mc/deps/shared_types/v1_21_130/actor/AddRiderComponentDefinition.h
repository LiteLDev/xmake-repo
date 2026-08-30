#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

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
        ::ll::TypedStorage<8, 24, std::string> mEntityType;
        ::ll::TypedStorage<8, 24, std::string> mSpawnEvent;
        // NOLINTEND

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI bool operator==(::SharedTypes::v1_21_130::AddRiderComponentDefinition::RiderData const&) const;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::vector<SharedTypes::v1_21_130::AddRiderComponentDefinition::RiderData>> mRiders;
    ::ll::TypedStorage<8, 24, std::string>                                                                 mEntityType;
    ::ll::TypedStorage<8, 24, std::string>                                                                 mSpawnEvent;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~AddRiderComponentDefinition();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx&);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static std::string_view const& NAME();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace SharedTypes::v1_21_130
