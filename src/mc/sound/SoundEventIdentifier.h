#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/legacy/LevelSoundEvent.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

struct SoundEventIdentifier {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 32, std::variant<std::monostate, SharedTypes::Legacy::LevelSoundEvent, std::string>> mSound;
#else // @header-generator platform
    ::ll::TypedStorage<8, 40, ::std::variant<::std::monostate, ::SharedTypes::Legacy::LevelSoundEvent, ::std::string>>
        mSound;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI explicit SoundEventIdentifier(::SharedTypes::Legacy::LevelSoundEvent);

    MCNAPI explicit SoundEventIdentifier(std::string);

#else // @header-generator platform
#endif // @header-generator platform
    MCNAPI ~SoundEventIdentifier();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void bindType(::cereal::ReflectionCtx&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::SharedTypes::Legacy::LevelSoundEvent);

    MCNAPI void* $ctor(std::string);
#else // @header-generator platform
    MCNAPI static void bindType(::cereal::ReflectionCtx& ctx);
#endif // @header-generator platform
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
