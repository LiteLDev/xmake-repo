#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/shared_types/versionless/SoundEventName.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::Beta {

struct RecordItemComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::SharedTypes::Versionless::SoundEventName> mSoundEvent;
    ::ll::TypedStorage<4, 4, float>                                       mDuration;
    ::ll::TypedStorage<4, 4, int>                                         mComparatorSignal;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static std::string_view const& NAME();
    // NOLINTEND
};

} // namespace SharedTypes::Beta
