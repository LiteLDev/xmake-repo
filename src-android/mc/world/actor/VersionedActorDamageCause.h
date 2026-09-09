#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/scripting/Version.h"
#include "mc/deps/shared_types/legacy/actor/ActorDamageCause.h"

class VersionedActorDamageCause {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string const>                            mName;
    ::ll::TypedStorage<4, 4, ::SharedTypes::Legacy::ActorDamageCause const> mCause;
    ::ll::TypedStorage<8, 32, ::Scripting::Version const>                   mVersion;
    ::ll::TypedStorage<1, 2, std::optional<uchar> const>                    mDeprecatedMajorVersion;
    // NOLINTEND

public:
    // prevent constructor by default
    VersionedActorDamageCause& operator=(VersionedActorDamageCause const&);
    VersionedActorDamageCause();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::SharedTypes::Legacy::ActorDamageCause getCause() const;

    MCNAPI std::optional<uchar> getDeprecatedMajorVersion() const;

    MCNAPI ::Scripting::Version getVersion() const;

    MCNAPI ~VersionedActorDamageCause();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
