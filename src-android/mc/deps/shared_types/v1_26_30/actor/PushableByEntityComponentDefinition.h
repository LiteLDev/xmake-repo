#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/v1_26_20/actor/PushableByEntityComponentDefinition.h"
#include "mc/deps/shared_types/v1_26_30/actor/PushableByEntityPreset.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_26_30 {

struct PushableByEntityComponentDefinition : public ::SharedTypes::v1_26_20::PushableByEntityComponentDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::vector<SharedTypes::v1_26_30::PushableByEntityPreset>> mPresets;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx&);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static std::string_view const& DESCRIPTION();

    MCNAPI static std::string_view const& NAME();

    MCNAPI static std::string_view const& PRESETS_DESCRIPTION();
    // NOLINTEND
};

} // namespace SharedTypes::v1_26_30
