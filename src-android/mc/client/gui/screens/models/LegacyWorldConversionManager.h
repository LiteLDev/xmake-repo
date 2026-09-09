#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/resource/PackIdVersion.h"
#include "mc/world/actor/player/LoadingState.h"

// auto generated forward declare list
// clang-format off
class IContentAcquisition;
class IDlcBatchModel;
class IDlcValidation;
class ILevelListCache;
// clang-format on

class LegacyWorldConversionManager {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::ILevelListCache&>     mLevelListCache;
    ::ll::TypedStorage<8, 8, ::IContentAcquisition&> mContentAcquisition;
    ::ll::TypedStorage<8, 8, ::IDlcValidation&>      mDlcValidation;
    ::ll::UntypedStorage<8, 48>                      mDlcBatchModelProvider;
    ::ll::TypedStorage<4, 4, ::LoadingState>         mConversionState;
    ::ll::TypedStorage<4, 4, float>                  mLegacyWorldConversionProgress;
    ::ll::TypedStorage<8, 16, std::shared_ptr<bool>> mExistenceTracker;
    ::ll::TypedStorage<8, 8, ::IDlcBatchModel*>      mDownloadingContent;
    // NOLINTEND

public:
    // prevent constructor by default
    LegacyWorldConversionManager& operator=(LegacyWorldConversionManager const&);
    LegacyWorldConversionManager(LegacyWorldConversionManager const&);
    LegacyWorldConversionManager();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~LegacyWorldConversionManager();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::LoadingState getConversionState() const;

    MCNAPI float getProgress() const;

    MCNAPI void reset();

    MCNAPI void setLegacyWorldConversionProgress(float);

    MCNAPI void tryAcquireMissingDlc(std::string const&, std::function<void(bool)>);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
