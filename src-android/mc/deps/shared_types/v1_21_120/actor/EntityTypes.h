#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/v1_21_120/actor/MobDescriptor.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_21_120 {

struct EntityTypes {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::vector<SharedTypes::v1_21_120::MobDescriptor>> mDescriptors;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI bool operator==(::SharedTypes::v1_21_120::EntityTypes const&) const;

    MCNAPI ~EntityTypes();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx&);

    MCNAPI static void fromDescriptor(::SharedTypes::v1_21_120::EntityTypes&, ::SharedTypes::v1_21_120::MobDescriptor&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace SharedTypes::v1_21_120
