#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/resource/PackIdVersion.h"
#include "mc/deps/core/resource/PackType.h"
#include "mc/deps/core/resource/ResourceLocation.h"
#include "mc/deps/core/sem_ver/SemVersion.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/resources/PackErrorType.h"
#else // @header-generator platform
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
class PackError;
#if defined(LL_PLAT_A) // @header-generator platform
namespace Json { class Value; }
#else // @header-generator platform
#endif // @header-generator platform
// clang-format on

class PackReport {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 48, ::ResourceLocation>                      mLocation;
    ::ll::TypedStorage<8, 24, std::vector<std::shared_ptr<PackError>>> mErrors;
    ::ll::TypedStorage<8, 24, std::vector<std::shared_ptr<PackError>>> mWarnings;
    ::ll::UntypedStorage<8, 24>                                        mRequiredBaseGameVersion;
    ::ll::TypedStorage<8, 24, std::string>                             mOriginalName;
    ::ll::TypedStorage<8, 24, std::string>                             mOriginalVersion;
    ::ll::UntypedStorage<8, 48>                                        mIdentity;
    ::ll::TypedStorage<1, 1, ::PackType>                               mPackType;
    ::ll::TypedStorage<1, 1, bool>                                     mWasUpgraded;
    ::ll::TypedStorage<1, 1, bool>                                     mAttemptedUpgrade;
#else // @header-generator platform
    ::ll::TypedStorage<8, 56, ::ResourceLocation>                            mLocation;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::shared_ptr<::PackError>>> mErrors;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::shared_ptr<::PackError>>> mWarnings;
    ::ll::TypedStorage<8, 24, ::SemVersion>                                  mRequiredBaseGameVersion;
    ::ll::TypedStorage<8, 32, ::std::string>                                 mOriginalName;
    ::ll::TypedStorage<8, 32, ::std::string>                                 mOriginalVersion;
    ::ll::TypedStorage<8, 48, ::PackIdVersion>                               mIdentity;
    ::ll::TypedStorage<1, 1, ::PackType>                                     mPackType;
    ::ll::TypedStorage<1, 1, bool>                                           mWasUpgraded;
    ::ll::TypedStorage<1, 1, bool>                                           mAttemptedUpgrade;
#endif // @header-generator platform
    // NOLINTEND

#if defined(LL_PLAT_A) // @header-generator platform
public:
    // prevent constructor by default
    PackReport& operator=(PackReport const&);
    PackReport(PackReport const&);

#else // @header-generator platform
#ifdef LL_PLAT_S
public:
    // prevent constructor by default
    PackReport& operator=(PackReport const&);
    PackReport();

#else // LL_PLAT_C
public:
    // prevent constructor by default
    PackReport();

#endif
#endif // @header-generator platform
public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI PackReport();
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCNAPI PackReport(::PackReport&&);
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void clear();
#else // @header-generator platform
    MCNAPI PackReport(::PackReport const&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::vector<std::shared_ptr<PackError>> const& getErrors() const;
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCNAPI void merge(::PackReport&& other);
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI int const getNumErrors() const;
#else // @header-generator platform
    MCNAPI ::PackReport& operator=(::PackReport&&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI int const getNumWarnings() const;
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCNAPI ::PackReport& operator=(::PackReport const&);
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::PackType getPackType() const;
#else // @header-generator platform
    MCNAPI void setIdentity(::PackIdVersion const& identity);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::vector<std::shared_ptr<PackError>> const& getWarnings() const;

    MCNAPI bool hasErrors() const;

    MCNAPI bool hasErrors(::PackErrorType);

    MCNAPI bool hasWarnings() const;

    MCNAPI void merge(::PackReport&&);

    MCNAPI void setAttemptedUpgrade();

    MCNAPI void setIdentity(::PackIdVersion const&);

    MCNAPI void setOriginalIdentity(std::string const&, std::string const&);

    MCNAPI void setPackType(::PackType);

    MCNAPI void setUpgradeSuccess();

    MCNAPI bool wasUpgraded() const;
#else // @header-generator platform
    MCNAPI ~PackReport();
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor();
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCNAPI void* $ctor(::PackReport&&);
#endif

    MCNAPI void* $ctor(::PackReport const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#endif // @header-generator platform
    // NOLINTEND
};
