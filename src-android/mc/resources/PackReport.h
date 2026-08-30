#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/resource/PackIdVersion.h"
#include "mc/deps/core/resource/PackType.h"
#include "mc/deps/core/resource/ResourceLocation.h"
#include "mc/deps/core/sem_ver/SemVersion.h"
#include "mc/resources/PackErrorType.h"

// auto generated forward declare list
// clang-format off
class PackError;
namespace Json { class Value; }
// clang-format on

class PackReport {
public:
    // member variables
    // NOLINTBEGIN
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
    // NOLINTEND

public:
    // prevent constructor by default
    PackReport& operator=(PackReport const&);
    PackReport(PackReport const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI PackReport();

    MCNAPI void clear();

    MCNAPI std::vector<std::shared_ptr<PackError>> const& getErrors() const;

    MCNAPI int const getNumErrors() const;

    MCNAPI int const getNumWarnings() const;

    MCNAPI ::PackType getPackType() const;

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
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND
};
