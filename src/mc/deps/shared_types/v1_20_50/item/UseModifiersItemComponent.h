#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/legacy/LevelSoundEvent.h"

#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

#endif // @header-generator platform
namespace SharedTypes::v1_20_50 {

struct UseModifiersItemComponent {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 4, float>                                               mUseDuration;
    ::ll::TypedStorage<1, 1, bool>                                                mEmitVibrations;
    ::ll::TypedStorage<4, 8, std::optional<SharedTypes::Legacy::LevelSoundEvent>> mStartSound;
    ::ll::TypedStorage<4, 8, std::optional<float>>                                mMovementModifier;
#else // @header-generator platform
    ::ll::TypedStorage<4, 4, float>                                                   mUseDuration;
    ::ll::TypedStorage<1, 1, bool>                                                    mEmitVibrations;
    ::ll::TypedStorage<4, 8, ::std::optional<::SharedTypes::Legacy::LevelSoundEvent>> mStartSound;
    ::ll::TypedStorage<4, 8, ::std::optional<float>>                                  mMovementModifier;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::string_view const& NAME();
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace SharedTypes::v1_20_50
