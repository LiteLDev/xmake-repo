#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/scripting/Version.h"
#include "mc/deps/shared_types/legacy/actor/ActorDamageCause.h"

class VersionedActorDamageCause {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::string const>                            mName;
#else // @header-generator platform
    ::ll::TypedStorage<8, 32, ::std::string const>                          mName;
#endif // @header-generator platform
    ::ll::TypedStorage<4, 4, ::SharedTypes::Legacy::ActorDamageCause const> mCause;
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 32, ::Scripting::Version const>                   mVersion;
    ::ll::TypedStorage<1, 2, std::optional<uchar> const>                    mDeprecatedMajorVersion;
#else // @header-generator platform
    ::ll::TypedStorage<8, 40, ::Scripting::Version const>                   mVersion;
    ::ll::TypedStorage<1, 2, ::std::optional<uchar> const>                  mDeprecatedMajorVersion;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
    VersionedActorDamageCause& operator=(VersionedActorDamageCause const&);
#else // @header-generator platform
#endif // @header-generator platform
    VersionedActorDamageCause();

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::SharedTypes::Legacy::ActorDamageCause getCause() const;
#else // @header-generator platform
    MCAPI VersionedActorDamageCause(
        ::std::string                           name,
        ::SharedTypes::Legacy::ActorDamageCause cause,
        ::Scripting::Version                    version,
        ::std::optional<uchar>                  deprecatedMajorVersion
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::optional<uchar> getDeprecatedMajorVersion() const;

    MCNAPI ::Scripting::Version getVersion() const;

    MCNAPI ~VersionedActorDamageCause();
#else // @header-generator platform
    MCAPI ::Scripting::Version getVersion() const;
#endif // @header-generator platform
    // NOLINTEND

public:
#if defined(LL_PLAT_A) // @header-generator platform
    // destructor thunk
#else // @header-generator platform
    // constructor thunks
#endif // @header-generator platform
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI void* $ctor(
        ::std::string                           name,
        ::SharedTypes::Legacy::ActorDamageCause cause,
        ::Scripting::Version                    version,
        ::std::optional<uchar>                  deprecatedMajorVersion
    );
#endif // @header-generator platform
    // NOLINTEND
};
