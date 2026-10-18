#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/resource/PackType.h"
#include "mc/deps/core/sem_ver/SemVersion.h"
#include "mc/platform/UUID.h"

struct PackIdVersion {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 16, ::mce::UUID> mId;
    ::ll::UntypedStorage<8, 24>            mVersion;
    ::ll::TypedStorage<1, 1, ::PackType>   mPackType;
#else // @header-generator platform
    ::ll::TypedStorage<8, 16, ::mce::UUID>  mId;
    ::ll::TypedStorage<8, 24, ::SemVersion> mVersion;
    ::ll::TypedStorage<1, 1, ::PackType>    mPackType;
#endif // @header-generator platform
    // NOLINTEND

#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#ifdef LL_PLAT_S
public:
    // prevent constructor by default
    PackIdVersion();

#else // LL_PLAT_C
public:
    // prevent constructor by default
    PackIdVersion& operator=(PackIdVersion const&);
    PackIdVersion();

#endif
#endif // @header-generator platform
public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI PackIdVersion(::PackIdVersion const&);
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI PackIdVersion(::PackIdVersion const&);
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI PackIdVersion(std::string const&, std::string const&, ::PackType);
#else // @header-generator platform
    MCAPI PackIdVersion(::mce::UUID const& id, ::SemVersion const& version, ::PackType packType);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::string asString() const;
#else // @header-generator platform
    MCAPI ::std::string asString() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool operator!=(::PackIdVersion const&) const;

    MCNAPI bool operator<(::PackIdVersion const&) const;

    MCNAPI bool operator==(::PackIdVersion const&) const;

    MCNAPI bool satisfies(::PackIdVersion const&) const;

    MCNAPI ~PackIdVersion();
#else // @header-generator platform
    MCAPI bool operator==(::PackIdVersion const& rhs) const;
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::PackIdVersion fromString(std::string const&);
#else // @header-generator platform
    MCAPI static ::PackIdVersion fromString(::std::string const& inputStr);
#endif // @header-generator platform
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::PackIdVersion& EMPTY();
#else // @header-generator platform
    MCAPI static ::PackIdVersion& EMPTY();
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::PackIdVersion const&);
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI void* $ctor(::PackIdVersion const&);
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(std::string const&, std::string const&, ::PackType);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI void* $ctor(::mce::UUID const& id, ::SemVersion const& version, ::PackType packType);
#endif // @header-generator platform
    // NOLINTEND
};
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

namespace std {
template <>
struct hash<::PackIdVersion> {
    size_t operator()(const ::PackIdVersion& packIdVersion) const {
        return std::hash<std::string>()(packIdVersion.mId->asString() + packIdVersion.mVersion->asString());
    }
};
} // namespace std
#endif // @header-generator platform
