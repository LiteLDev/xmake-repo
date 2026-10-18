#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/legacy/LevelSoundEvent.h"
#include "mc/util/BidirectionalUnorderedMap.h"

// auto generated forward declare list
// clang-format off
struct SoundEventIdentifier;
namespace SharedTypes::Versionless { struct SoundEventName; }
// clang-format on

class LevelSoundEventMap {
public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::SharedTypes::Legacy::LevelSoundEvent getId(std::string const&);
#else // @header-generator platform
    MCAPI static ::SharedTypes::Legacy::LevelSoundEvent getId(::std::string const& type);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::SharedTypes::Legacy::LevelSoundEvent getIdOtherwiseContentError(std::string const&);
#else // @header-generator platform
    MCAPI static ::std::string const& getName(::SharedTypes::Legacy::LevelSoundEvent type);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::string const& getName(::SharedTypes::Legacy::LevelSoundEvent);

    MCNAPI static ::SoundEventIdentifier resolve(::SharedTypes::Versionless::SoundEventName const&);
#else // @header-generator platform
    MCAPI static ::SoundEventIdentifier resolve(::SharedTypes::Versionless::SoundEventName const& name);
#endif // @header-generator platform
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::BidirectionalUnorderedMap<std::string, SharedTypes::Legacy::LevelSoundEvent> const& map();
#else // @header-generator platform
    MCAPI static ::BidirectionalUnorderedMap<::std::string, ::SharedTypes::Legacy::LevelSoundEvent> const& map();
#endif // @header-generator platform
    // NOLINTEND
};
