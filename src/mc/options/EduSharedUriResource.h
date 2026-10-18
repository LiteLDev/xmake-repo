#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class CompoundTag;
// clang-format on

struct EduSharedUriResource {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::string> linkUri;
    ::ll::TypedStorage<8, 24, std::string> buttonName;
#else // @header-generator platform
    ::ll::TypedStorage<8, 32, ::std::string> linkUri;
    ::ll::TypedStorage<8, 32, ::std::string> buttonName;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    EduSharedUriResource& operator=(EduSharedUriResource const&);
    EduSharedUriResource();
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI explicit EduSharedUriResource(::CompoundTag const&);
#else // @header-generator platform
    MCAPI EduSharedUriResource(::EduSharedUriResource const&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool operator!=(::EduSharedUriResource const&) const;
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI bool operator!=(::EduSharedUriResource const& rhs) const;
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool operator==(::EduSharedUriResource const&) const;
#else // @header-generator platform
    MCFOLD ::EduSharedUriResource& operator=(::EduSharedUriResource&&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ~EduSharedUriResource();
#else // @header-generator platform
    MCAPI ~EduSharedUriResource();
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::optional<EduSharedUriResource> create(std::unordered_map<std::string, std::string> const&);
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI static ::std::optional<::EduSharedUriResource>
    create(::std::unordered_map<::std::string, ::std::string> const& values);
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::EduSharedUriResource fromTag(::CompoundTag const&);
#else // @header-generator platform
    MCAPI static ::EduSharedUriResource fromTag(::CompoundTag const& tag);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::unique_ptr<CompoundTag> toTag(::EduSharedUriResource const&);
#else // @header-generator platform
    MCAPI static ::std::unique_ptr<::CompoundTag> toTag(::EduSharedUriResource const& resource);
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::CompoundTag const&);
#else // @header-generator platform
    MCFOLD void* $ctor(::EduSharedUriResource const&);
#endif // @header-generator platform
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $dtor();
#else // @header-generator platform
    MCFOLD void $dtor();
#endif // @header-generator platform
    // NOLINTEND
};
