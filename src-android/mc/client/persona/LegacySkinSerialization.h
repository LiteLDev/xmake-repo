#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/persona/SkinHandle.h"
#include "mc/world/actor/player/persona/ProfileType.h"

// auto generated forward declare list
// clang-format off
class SemVersion;
namespace Json { class Value; }
// clang-format on

namespace persona {

class LegacySkinSerialization {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 96, ::SkinHandle>          mSkinHandle;
    ::ll::TypedStorage<1, 1, ::persona::ProfileType> mLastUsedSlot;
    ::ll::TypedStorage<1, 1, bool>                   mSeenSkinDifferencePrompt;
    ::ll::TypedStorage<1, 1, bool>                   mShowPersonaSkinChangePrompt;
    ::ll::TypedStorage<1, 1, bool>                   mBeingDeleted;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI LegacySkinSerialization();

    MCNAPI void _backCompatFromJson(::Json::Value const&);

    MCNAPI void _backCompatToJson(::Json::Value&) const;

    MCNAPI void _metaFromJson(::Json::Value const&);

    MCNAPI void _metaToJson(::Json::Value&) const;

    MCNAPI void clear();

    MCNAPI void fillFromJSON(::SemVersion const&, ::Json::Value const&);

    MCNAPI ::persona::ProfileType getLastUsedPersonaSlot() const;

    MCNAPI bool getSeenSkinDifferencePrompt() const;

    MCNAPI bool getShowPersonaSkinChangePrompt() const;

    MCNAPI bool operator!=(::persona::LegacySkinSerialization const&) const;

    MCNAPI void setClassicSkin(::SkinHandle const&);

    MCNAPI void setLastUsedPersonaSlot(::persona::ProfileType);

    MCNAPI void setSeenSkinDifferencePrompt(bool);

    MCNAPI ::Json::Value toJSONObject() const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND
};

} // namespace persona
