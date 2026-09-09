#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/EmptyProgressHandler.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/world/actor/player/LoadingState.h"
#include "mc/world/level/FileArchiver.h"

// auto generated forward declare list
// clang-format off
class MinecraftScreenModel;
// clang-format on

class ImportExportProgressHandler : public ::EmptyProgressHandler {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24>            mFileArchiverProgress;
    ::ll::TypedStorage<8, 24, std::string> mDefaultTitleText;
    ::ll::TypedStorage<8, 24, std::string> mDefaultProgressMessage;
    // NOLINTEND

public:
    // prevent constructor by default
    ImportExportProgressHandler();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ImportExportProgressHandler();

    virtual ::LoadingState getLoadingState(::MinecraftScreenModel&) const;

    virtual float getLoadingProgress(::MinecraftScreenModel&) const;

    virtual std::string getProgressMessage(::MinecraftScreenModel&) const;

    virtual std::string getName() const;

    virtual std::string getTitleText() const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ImportExportProgressHandler(
        std::string const&,
        std::string const&,
        ::gsl::not_null<Bedrock::NonOwnerPointer<FileArchiver::ProgressReporter>>
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        std::string const&,
        std::string const&,
        ::gsl::not_null<Bedrock::NonOwnerPointer<FileArchiver::ProgressReporter>>
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::LoadingState $getLoadingState(::MinecraftScreenModel&) const;

    MCNAPI float $getLoadingProgress(::MinecraftScreenModel&) const;

    MCNAPI std::string $getProgressMessage(::MinecraftScreenModel&) const;

    MCNAPI std::string $getName() const;

    MCNAPI std::string $getTitleText() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
